#ifndef TESTSUBTRACTOR_H
#define TESTSUBTRACTOR_H

#include <QObject>
#include <QTest>
#include "subtractor.h"
class TestSubtractor : public QObject
{
    Q_OBJECT
public:
    explicit TestSubtractor(QObject *parent = 0);
    
signals:
    
private slots:
    void init();

    void testSubtractNumbers();

    void cleanup();

private:
    Subtractor *sub;
    
};

#endif // TESTSUBTRACTOR_H
