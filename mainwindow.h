#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QString>
class IPCamTable;
class IPCamSetting;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
	
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
	
private:
    Ui::MainWindow *ui;
    QMap<QString, QString> m_mapLabelToStruct;
	IPCamTable *m_pIPCamTable;
    IPCamSetting *m_pIPCamSetting;
};

#endif // MAINWINDOW_H
