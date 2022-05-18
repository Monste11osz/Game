#include "StyleBut.h"




QString styleBut::GetStartButton()
{
    return "QPushButton{""color:#0f0;""}";
}

QString styleBut::GetXButton()
{
    return "QPushButton{""color:#000;"
            "border: none;"
            "font: 700 14pt 'Ubuntu Condensed';"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(217, 100, 100, 255), stop:1 rgba(255, 255, 255, 255));""}"
"QPushButton::hover{""background-color: qlineargradient(spread:pad, x1:0.0251256, y1:0.0340909, x2:1, y2:1, stop:0 rgba(217, 67, 67, 255), stop:1 rgba(255, 255, 255, 255));""}"
"QPushButton::pressed{""background-color: qlineargradient(spread:pad, x1:0.0251256, y1:0.0340909, x2:1, y2:1, stop:0 rgba(119, 26, 26, 255), stop:1 rgba(255, 255, 255, 255));""}";

}

QString styleBut::GetOButton()
{
    return "QPushButton{""color:#000;"
            "border: none;"
            "font: 700 14pt 'Ubuntu Condensed';"
           "background-color: qlineargradient(spread:pad, x1:0.080402, y1:0.085, x2:1, y2:1, stop:0 rgba(242, 255, 147, 255), stop:1 rgba(255, 255, 255, 255));""}"
            "QPushButton::hover{""background-color: qlineargradient(spread:pad, x1:0.05, y1:0.0452273, x2:1, y2:1, stop:0 rgba(226, 245, 81, 255), stop:1 rgba(255, 255, 255, 255));""}"
            "QPushButton::pressed{""background-color: qlineargradient(spread:pad, x1:0.05, y1:0.0452273, x2:1, y2:1, stop:0 rgba(163, 177, 58, 255), stop:1 rgba(255, 255, 255, 255));""}";

}

QString styleBut::ActivXButton()
{
    return "QPushButton{""background-color: #2d313b;"
           "background-repeat:no-repeat;"
            "background-position: center center;"
            "border:1px solid #333;"
           "}";
}

QString styleBut::ActivOButton()
{
    return "QPushButton{""background-color: #2d313b;"
           "background-repeat:no-repeat;"
            "background-position: center center;"
            "border:1px solid #333;"
           "}";
}

QString styleBut::EmptyButton()
{
    return "QPushButton{""border:none;"
           "background: #095D8A;""}"

           "QPushButton::hover{""background: #499DBA;"
           "}";
}

QString styleBut::GetinEmptyButton()
{
    return "QPushButton{""border:none;"
           "background: #095D8A url(:/new/res/res/images/cross_large.png);}"
           "QPushButton::hover{""background-color: #499DBA;"
           "}";

}

QString styleBut::WinButton()
{
    return "QPushButton{""border:none;"
           "background-color: #DA2F3C;"
           "background-image: url(:/new/res/res/images/cross_large.png);"
           "background-repeat:no-repeat;"
           "background-position: center center;"
           "}";
}

QString styleBut::LoseButton()
{
    return "QPushButton{""border:none;"
           "background-color: #AFCC5F;"
           "background-image: url(:/new/res/res/images/cross_large.png);"
           "background-repeat:no-repeat;"
           "background-position: center center;"
           "}";
}

QString styleBut::Get2inEmptyButton()
{
    return "QPushButton{""border:none;"
           "background: #095D8A url(:/new/res/res/images/zero_large.png);}"
           "QPushButton::hover{""background-color: #499DBA;"
           "}";

}

QString styleBut::Win2Button()
{
    return "QPushButton{""border:none;"
           "background-color: #DA2F3C;"
           "background-image: url(:/new/res/res/images/zero_large.png);"
           "background-repeat:no-repeat;"
           "background-position: center center;"
           "}";
}

QString styleBut::Lose2Button()
{
    return "QPushButton{""border:none;"
           "background-color: #AFCC5F;"
           "background-image: url(:/new/res/res/images/zero_large.png);"
           "background-repeat:no-repeat;"
           "background-position: center center;"
           "}";
}

QString styleBut::GetText()
{
    return "QLineEdit{"
            "border:none;"
            "font: 700 6pt 'Ubuntu Condensed';"
           "}";
}
