#include <QTableWidgetItem>
#include "ipcamtable.h"
#include "ui_ipcamtable.h"
#include "ipcamtable.h"

IPCamTable::IPCamTable(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::IPCamTable)
{
    ui->setupUi(this);
	QTableWidget *tableWidget = ui->tableWidget;
    QTableWidgetItem *headerItem;
	int i = 0;
    while ((headerItem=tableWidget->horizontalHeaderItem(i)) != 0)
        m_mapHeaderToColumn.insert(headerItem->text(), i++);
}

IPCamTable::~IPCamTable()
{
    delete ui;
	m_vecIPCamInfo.clear();
	m_mapHeaderToColumn.clear();
}














