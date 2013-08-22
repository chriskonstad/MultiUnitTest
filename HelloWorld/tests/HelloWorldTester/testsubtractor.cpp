#include "testsubtractor.h"

TestSubtractor::TestSubtractor(QObject *parent) :
    QObject(parent)
{
}

void TestSubtractor::init()
{
    sub = new Subtractor();
}

void TestSubtractor::testSubtractNumbers()
{
    QCOMPARE(sub->subtractNumbers(4,2), 2);
}

void TestSubtractor::cleanup()
{
    delete sub;
}
