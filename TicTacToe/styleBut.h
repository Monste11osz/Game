#ifndef STYLEBUT_H
#define STYLEBUT_H
#include <QString>

class StyleBut
{
public:
    static QString GetStartButton();
    static QString GetXButton();
    static QString GetOButton();
    static QString ActivXButton();
    static QString ActivOButton();

    static QString EmptyButton();
    static QString GetinEmptyButton();
    static QString WinButton();
    static QString LoseButton();

    static QString Get2inEmptyButton();
    static QString Win2Button();
    static QString Lose2Button();
    static QString GetText();
};

#endif // STYLEBUT_H
