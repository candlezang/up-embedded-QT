#include "common.h"

OneForm *Common::oneform = NULL;
TwoForm *Common::twoform = NULL;
ThreeForm *Common::threeform = NULL;

Common::Common()
{

}

void Common::Init(){
    oneform = new OneForm();
    twoform = new TwoForm();
    threeform = new ThreeForm();
}
void Common::FormShow(formType type){
    if(type == one){
        oneform->show();
        twoform->hide();
        threeform->hide();
    }
    else if(type == two){
        oneform->hide();
        twoform->show();
        threeform->hide();
    }
    else if(type == three){
        oneform->hide();
        twoform->hide();
        threeform->show();
    }
}
