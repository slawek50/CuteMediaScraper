#ifndef Format_h
#define Format_h

#include <QObject>
#include <QString>

class Format : public QObject {
    Q_OBJECT

 public:
    Format(QString format);
    QString getExemple();
    QString getFormat();

 private:
    QString _format;
};

#endif // Format_h
