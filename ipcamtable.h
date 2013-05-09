#ifndef IPCAMTABLE_H
#define IPCAMTABLE_H

#include <QMap>
#include <QString>
#include <QVector>
#include <QGroupBox>

namespace Ui {
class IPCamTable;
}

class IPCamTable : public QGroupBox
{
    Q_OBJECT
	
public:
    explicit IPCamTable(QWidget *parent = 0);
    ~IPCamTable();
	
private:
    Ui::IPCamTable *ui;
    QVector<QMap<QString, QString> > m_vecIPCamInfo;
	QMap<QString, int> m_mapHeaderToColumn;
};

#endif // IPCAMTABLE_H
