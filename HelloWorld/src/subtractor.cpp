#include "subtractor.h"

Subtractor::Subtractor(QObject *parent) :
    QObject(parent)
{
}

int Subtractor::subtractNumbers(int x, int y)
{
    return x - y;
}
