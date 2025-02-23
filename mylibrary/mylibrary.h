#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include "QtCore/qobject.h"
//#include <QObject>

class MyLibrary : public QObject
{
    Q_OBJECT
public:
    explicit MyLibrary(QObject *parent = nullptr);

	/**
	 * @brief This function returns a greeting message.
	 *
	 * The sayHello function is a public member function of the MyLibrary class.
	 * It takes no parameters and returns a QString object containing a greeting message.
	 *
	 * @return QString - A greeting message.
	 */
	Q_INVOKABLE QString sayHello();
};

#endif // MYLIBRARY_H
