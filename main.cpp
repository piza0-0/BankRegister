#include "MainWindow.h"
#include "AuthorizationDialog.h"

#include <QApplication>

/*
 * Передача по конст референс или по значению?
 * Когда передаёшь в любом случае происходит копирование. Есть разница сколько байт копировать.
 * Предположим у тебя 64-битная система, то все адреса состоят из 8 байт. Тогда константная ссылка весит 8 байт.
 * При этом, если тебе требуется передать интовое значение, которое весит 4 байта, то если сделать из него
 * конст референс, то ты передашь не 4 байта, а 8 байт, и сделаешь только хуже.
 * Поэтому конст референс имеет использовать для элементов, которые весят >=8 байт.
 * (например это объект класса у которого куча полей)
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //AuthorizationDialog d;
    //d.show();

    return a.exec();
}
