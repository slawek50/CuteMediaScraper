#ifndef ANCHOR_H
#define ANCHOR_H

#include <QDateTime>


class Anchor : public QObject {
    Q_OBJECT
    Q_PROPERTY(int value READ value WRITE setValue NOTIFY
               valueChanged)

public:
    Anchor();

    Q_INVOKABLE void reset();
    int value();
    void setValue(int i);
    Q_INVOKABLE void incValue();

signals:
    void valueChanged(int);

private:
    int m_iValue;
};

#endif
