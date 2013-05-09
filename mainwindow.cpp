#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ipcamtable.h"
#include "ipcamsetting.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_mapLabelToStruct.insert(QString("Item"), QString("Item"));
    m_mapLabelToStruct.insert(QString("IP"), QString("IP"));
    m_mapLabelToStruct.insert(QString("MAC"), QString("MAC"));
    m_mapLabelToStruct.insert(QString("Port"), QString("Port"));
    m_mapLabelToStruct.insert(QString("DNS1"), QString("DNS1"));
    m_mapLabelToStruct.insert(QString("DNS2"), QString("DNS2"));
    m_mapLabelToStruct.insert(QString("Gate Way"), QString("GateWay"));
    m_mapLabelToStruct.insert(QString("Host Name"), QString("HostName"));
    m_mapLabelToStruct.insert(QString("Firmware"), QString("FWVersion"));
    m_mapLabelToStruct.insert(QString("type"), QString("Type"));
    m_mapLabelToStruct.insert(QString("wh"), QString("WH"));
    m_mapLabelToStruct.insert(QString("SubMask"), QString("SubMask"));
	m_pIPCamTable = new IPCamTable();
    m_pIPCamSetting = new IPCamSetting();
    ui->mainLayout->addWidget(m_pIPCamTable);
    ui->mainLayout->addWidget(m_pIPCamSetting);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_pIPCamTable;
    delete m_pIPCamSetting;
}
