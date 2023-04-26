#include <QApplication>
#include <QPushButton>
#include "callerMainWindow.h"
#include "./ui_controller.h"



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CallerMainWindow window(nullptr);
    Ui::MainWindow caller;
    caller.setupUi(&window);
    window.plainTextEdit = caller.plainTextEdit;
    window.resize(263, 680);
    window.showInfo();
    window.show();

    return QApplication::exec();
}
