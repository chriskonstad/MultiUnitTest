#ifndef ADDER_H
#define ADDER_H

#include <QObject>

class Adder : public QObject
{
    Q_OBJECT
public:
    explicit Adder(QObject *parent = 0);
    
signals:
    
public slots:
    int addNumbers(int x, int y);
    
};

#endif // ADDER_H
