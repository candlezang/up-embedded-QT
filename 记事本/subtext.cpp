#include "subtext.h"

subText::subText(QWidget *parent) : QTextEdit(parent), msgLen(1024)
{
    currentFilename.clear();
    myFile = new QFile(this);

    connect(this, SIGNAL(cursorPositionChanged()),
            this, SLOT(doProcessCursorPositionChanged()));
    blockNum = 0;
    columnNum = 0;
    codeName.clear();
    isFind = false;
    QFont font;
    font.setBold(true);
    font.setItalic(true);
    font.setPointSize(26);
    this->setFont(font);
    //是否自动换行
    //this->setWordWrapMode(QTextOption::NoWrap);
}

//---funcion
//public
void subText::NewFile(){
    int static index=1;
    QString title = QString("未命名%1[*]").arg(index);
    this->setWindowTitle(title);
    connect(this->document(), SIGNAL(contentsChanged()),
            this, SLOT(doProcessContentsChanged()));
    index++;
}
void subText::OpenFile(){
    QString filename = QFileDialog::getOpenFileName(this,"打开我们想要的文件",
                                 "recent:///", "Text(*.cpp *.h *.txt)");
    if(filename.isEmpty()){
        return;
    }

    currentFilename = filename;
    myFile->setFileName(currentFilename);
    bool ret = myFile->open(QIODevice::ReadOnly|QIODevice::Text);
    if(!ret){
        QMessageBox::warning(this, "错误提示", myFile->errorString());
        return;
    }
    QTextStream readStream(myFile);
    if(!this->codeName.isEmpty())
        readStream.setCodec(codeName.toUtf8().data());
    while(!readStream.atEnd()){
        this->append(readStream.read(msgLen));
    }
    myFile->close();

    //获取文件名称
    QFileInfo info(currentFilename);
    QString title = info.fileName();
    title.append("[*]");
    this->setWindowTitle(title);
    connect(this->document(), SIGNAL(contentsChanged()),
            this, SLOT(doProcessContentsChanged()));
}
int subText::SaveFile(){
    if(currentFilename.isEmpty()){
        QString filename = QFileDialog::getSaveFileName(this,
                   "保存我们需要的文件", ".", "Text(*.cpp *.h *.txt)");
        if(filename.isEmpty()){
            return -1;
        }
        currentFilename = filename;
    }

    //保存文件
    myFile->setFileName(currentFilename);
    bool ret = myFile->open(QIODevice::WriteOnly|QIODevice::Truncate
                            |QIODevice::Text);
    if(!ret){
        QMessageBox::warning(this, "失败提示", "保存文件失败!");
        return -1;
    }
    QTextStream writeStream(myFile);
    if(!this->codeName.isEmpty()){
        //字符串转换成char*
        //writeStream.setCodec(codeName.toUtf8().data());

        //字符串转换成QTextCodec
        QTextCodec *code = QTextCodec::codecForName(this->codeName.toUtf8());
        writeStream.setCodec(code);
    }
    writeStream << this->toPlainText();
    myFile->close();

    this->setWindowModified(false);
    //改变内容区域文字的颜色
    QPalette pa;
    pa.setColor(QPalette::Text, Qt::black);
    this->setPalette(pa);
    //QMessageBox::information(this, "成功提示", "保存成功!");
    return 0;
}
void subText::SaveAsFile(){
    QString filename;
    if(!currentFilename.isEmpty()){
        filename = currentFilename;
        currentFilename.clear();
    }
    int ret = SaveFile();
    if(ret < 0){
        currentFilename = filename;
    }
}
void subText::GetTextCode(const QString codeName){
    this->codeName = codeName;
}
void subText::ChangeBG(const QString str){
    QString bg;
    if(str == "1"){
        bg = "background-color: rgb(0, 255, 0);";
    }
    else if(str == "2"){
        bg = "background-color: rgb(255, 0, 0);";
    }
    else if(str == "3"){
        bg = "background-color: rgb(0, 0, 255);";
    }
    this->setStyleSheet(bg);
}
void subText::PrintFile(){
    QPrinter printer;
    printer.setPageSize(QPageSize(QPageSize::B9));

    QPrintDialog printDialog(&printer, this);
    printDialog.setOption(QAbstractPrintDialog::PrintSelection, true);
    if (printDialog.exec() == QDialog::Accepted) {
        this->print(&printer);
    }
}
void subText::SearchStr(const QString searchStr, bool caseSensitive, bool isNext){
    QTextDocument::FindFlags flag = 0;
    if(caseSensitive){
        flag |= QTextDocument::FindCaseSensitively;
    }
    if(!isNext){
        flag |= QTextDocument::FindBackward;
    }
    isFind = this->find(searchStr, flag);
    if(!isFind){
        QMessageBox::information(this,tr("结果"),tr("没有找到查找内容"),QMessageBox::Yes);
    }
}
void subText::ReplaceStr(const QString searchStr, const QString replaceStr,
                         bool caseSensitive, bool replaceAll){
    QTextDocument::FindFlags flag = 0;
    if(caseSensitive){
        flag |= QTextDocument::FindCaseSensitively;
    }
    bool isBack = false;
continueGo:
    bool ret = this->find(searchStr, flag);
    if(!ret){
        if(replaceAll && !isBack){
            isBack = true;
            flag |=QTextDocument::FindBackward;
            goto continueGo;
        }
        QMessageBox::information(this,tr("结果"),tr("没有内容不能替换 ")+searchStr,QMessageBox::Yes);
        return;
    }

    QTextCursor text_cursor = this->textCursor();
    text_cursor.insertText(replaceStr);

    if(!replaceAll)return;
    //替换后面的
    while(this->find(searchStr, flag)){
        QTextCursor text_cursor = this->textCursor();
        text_cursor.insertText(replaceStr);
    }
    //替换前面的
    flag |= QTextDocument::FindBackward;
    while(this->find(searchStr, flag)){
        QTextCursor text_cursor = this->textCursor();
        text_cursor.insertText(replaceStr);
    }
}
void subText::SetFontSize(int fontSize){
    QFont font;
    font.setPointSize(fontSize);
    this->setFont(font);
}
void subText::SelectALL(){
    this->selectAll();
}
void subText::DelectSelectALL(){
    this->textCursor().removeSelectedText();
}
void subText::ChangeLine(bool ischange){
    QTextOption::WrapMode mode;
    if(ischange){
        mode = QTextOption::WrapAtWordBoundaryOrAnywhere;
    }
    else{
        mode =QTextOption::NoWrap;
    }
    this->setWordWrapMode(mode);
}
//end


//---slots
void subText::doProcessContentsChanged(){
    this->setWindowModified(true);

    //改变内容区域文字的颜色
    QPalette pa;
    pa.setColor(QPalette::Text, Qt::red);
    this->setPalette(pa);
}
void subText::doProcessCursorPositionChanged(){
    QTextCursor textCur = this->textCursor();
    int blockNum = textCur.blockNumber();
    int columnNum = textCur.columnNumber();

    qDebug() << textCur.blockNumber();
    qDebug() << textCur.columnNumber();
//    if(this->blockNum == blockNum && columnNum == 1){
//        this->columnNum += columnNum;
//    }
//    else{
//        if(this->blockNum != blockNum){
//            this->columnNum = columnNum;
//        }
//        else{
//            this->columnNum += columnNum;
//        }
//    }
    this->blockNum = blockNum;
    this->columnNum  = columnNum;
    QString str = QString("行:%1 列:%2").arg(this->blockNum).arg(this->columnNum);
    //QString str = QString("行:%1 列:%2").arg(blockNum).arg(columnNum);
//    qDebug() << str;
    emit SignalLineMsg(str);

}
void subText::doProcessDeleteSelect(){
    this->textCursor().removeSelectedText();
}
//end


//---event
void subText::closeEvent(QCloseEvent *event){
    if(this->isWindowModified()){
        QString str = QString("<strong>文件%1没有保存</strong> <br/> 你是否需要在关闭前进行保存?")
                .arg(this->windowTitle());
        int ret = QMessageBox::information(this, "保存提示",str,
                  QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel, QMessageBox::Yes);
        if(ret == QMessageBox::Yes){
            //保存文件
            ret = SaveFile();
            if(ret < 0){
                event->ignore();
                return;
            }
            event->accept();
        }
        else if(ret == QMessageBox::No){
            event->accept();
        }
        else{
            event->ignore();
        }
    }
}
void subText::contextMenuEvent(QContextMenuEvent *e){
    QMenu *myMenu = new QMenu("xxxxx", this);
    QList<QAction *> list;
    QAction *undo = new QAction(this);
    undo->setText("撤销");
    undo->setShortcut(QKeySequence::Undo);
    connect(undo, SIGNAL(triggered(bool)),this, SLOT(undo()));
    undo->setEnabled(this->document()->isUndoAvailable());

    QAction *redo = new QAction(this);
    redo->setText("恢复");
    redo->setShortcut(QKeySequence::Redo);
    connect(redo, SIGNAL(triggered(bool)), this, SLOT(redo()));
    QAction *seq1 = myMenu->addSeparator();
    redo->setEnabled(this->document()->isRedoAvailable());


    QAction *cut = new QAction(this);
    cut->setText("剪贴");
    cut->setShortcut(QKeySequence::Cut);
    connect(cut, SIGNAL(triggered(bool)), this, SLOT(cut()));
    cut->setEnabled(this->textCursor().hasSelection());

    QAction *copy = new QAction(this);
    copy->setText("复制");
    copy->setShortcut(QKeySequence::Copy);
    connect(copy, SIGNAL(triggered(bool)), this, SLOT(copy()));
    copy->setEnabled(this->textCursor().hasSelection());

    QAction *paste = new QAction(this);
    paste->setText("粘贴");
    paste->setShortcut(QKeySequence::Paste);
    connect(paste, SIGNAL(triggered(bool)), this, SLOT(paste()));
    QAction *seq2 = myMenu->addSeparator();

    QAction *del = new QAction(this);
    del->setText("删除");
    del->setShortcut(QKeySequence::Delete);
    del->setEnabled(this->textCursor().hasSelection());
    connect(del, SIGNAL(triggered(bool)), this, SLOT(doProcessDeleteSelect()));


    QAction *myclear = new QAction(this);
    myclear->setText("清除");
    myclear->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_D));
    connect(myclear, SIGNAL(triggered(bool)), this, SLOT(clear()));
    myclear->setEnabled(!this->document()->isEmpty());

    QAction *selectAll = new QAction(this);
    selectAll->setText("全选");
    selectAll->setShortcut(QKeySequence::SelectAll);
    connect(selectAll, SIGNAL(triggered(bool)), this, SLOT(selectAll()));
    selectAll->setEnabled(!this->document()->isEmpty());

    list.append(undo);
    list.append(redo);
    list.append(seq1);
    list.append(cut);
    list.append(copy);
    list.append(paste);
    list.append(seq2);
    list.append(del);
    list.append(myclear);
    list.append(selectAll);
    myMenu->addActions(list);

   // myMenu->addAction(undo);
    myMenu->exec(e->globalPos());
}
//end
