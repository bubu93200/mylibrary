#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <QtCore/QObject>

class MyLibrary : public QObject
{
    Q_OBJECT
public:
    explicit MyLibrary(QObject *parent = nullptr);

    Q_INVOKABLE QString sayHello();
};

#endif // MYLIBRARY_H
