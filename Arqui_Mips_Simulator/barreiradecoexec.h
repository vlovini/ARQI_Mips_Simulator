#ifndef BARREIRADECOEXEC_H
#define BARREIRADECOEXEC_H
#include <QString>

class BarreiraDecoExec
{
private:
    QString operacao;
    int operadorX;
    int operadorY;
    int operadorZ;
public:
    BarreiraDecoExec();
    int getOperadorZ() const;
    void setOperadorZ(int value);
    int getOperadorY() const;
    void setOperadorY(int value);
    int getOperadorX() const;
    void setOperadorX(int value);
    QString getOperacao() const;
    void setOperacao(const QString &value);
};

#endif // BARREIRADECOEXEC_H
