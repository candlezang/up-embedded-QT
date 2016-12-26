#ifndef COMMON_H
#define COMMON_H
#include "oneform.h"
#include "twoform.h"
#include "threeform.h"

class Common
{
public:
    Common();

    enum formType{
        one, two, three
    };

    static void Init(); //初始化窗体成员函数
    static void FormShow(formType);

private:
    static OneForm *oneform;
    static TwoForm *twoform;
    static ThreeForm *threeform;
};

#endif // COMMON_H
