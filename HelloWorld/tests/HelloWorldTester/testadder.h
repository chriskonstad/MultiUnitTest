#ifndef TESTADDER_H
#define TESTADDER_H

#include <QObject>
#include "adder.h"

class TestAdder : public QObject
{
    Q_OBJECT
public:
    explicit TestAdder(QObject *parent = 0);
    
signals:
    
public slots:

private slots:

    void initTestCase();

    void testAddNumbers();
    
    void cleanupTestCase();

private:

    Adder *adder;
};

#endif // TESTADDER_H
