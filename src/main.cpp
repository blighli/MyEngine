#include <QApplication>
#include <QMainWindow>

int main(int argc, char* argv[])
{
    QApplication EditorApp(argc, argv);
    QMainWindow Editor;
    Editor.show();

    return EditorApp.exec();
}