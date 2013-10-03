#ifndef Format_h
#define Format_h

#include <QObject>
#include <QString>

class Format : public QObject {
    Q_OBJECT

 public:
    Format();
    QString getExemple();

 private:
    QString _format;
};

#endif // Format_h
