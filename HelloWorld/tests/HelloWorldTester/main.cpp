#include <QCoreApplication>
#include "testadder.h"
#include "testsubtractor.h"
#include <QtTest/QTest>
#include <QtDebug>

int main()
{
    auto runTest = [](QObject *test)
    {
        QTest::qExec(test);

        qDebug() << '\n';
    };

    {
        TestAdder test;
        runTest(&test);
    }

    {
        TestSubtractor test;
        runTest(&test);
    }

    return 0;
}
