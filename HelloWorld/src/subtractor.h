#ifndef SUBTRACTOR_H
#define SUBTRACTOR_H

#include <QObject>

class Subtractor : public QObject
{
    Q_OBJECT
public:
    explicit Subtractor(QObject *parent = 0);
    
signals:
    
public slots:
    int subtractNumbers(int x, int y);
    
};

#endif // SUBTRACTOR_H
