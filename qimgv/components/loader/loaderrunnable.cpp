#include "loaderrunnable.h"

#include <QElapsedTimer>

LoaderRunnable::LoaderRunnable(QString _path) : path(_path) {
}

void LoaderRunnable::run() {
    //QElapsedTimer t;
    //t.start();
    qDebug() << "Loading " << path;
    auto image = ImageFactory::createImage(path);
    //qDebug() << "L: " << t.elapsed();
    emit finished(image, path);
}
