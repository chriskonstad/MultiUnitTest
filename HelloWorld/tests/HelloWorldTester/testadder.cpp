#include "testadder.h"
#include <QtTest/QTest>

TestAdder::TestAdder(QObject *parent) :
    QObject(parent)
{
}

void TestAdder::initTestCase()
{
    adder = new Adder();
}

void TestAdder::testAddNumbers()
{
    QCOMPARE(adder->addNumbers(2,3), 5);
}

void TestAdder::cleanupTestCase()
{
    delete adder;
}
