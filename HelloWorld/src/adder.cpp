#include "adder.h"

Adder::Adder(QObject *parent) :
    QObject(parent)
{
}

int Adder::addNumbers(int x, int y)
{
    return x + y;
}
