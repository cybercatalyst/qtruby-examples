#include <QCoreApplication>
#include <QDebug>

#include "qruby.h"
#include "qrubyvalue.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QRuby ruby;

    ruby.printVersion();
    ruby.printCopyrightNotice();

    return a.exec();
}
