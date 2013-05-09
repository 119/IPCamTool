#ifndef IPCAMSETTING_H
#define IPCAMSETTING_H

#include <QGroupBox>
#include <QMap>
#include <QString>

class QLineEdit;

namespace Ui {
class IPCamSetting;
}

class IPCamSetting : public QGroupBox
{
    Q_OBJECT
    
public:
    explicit IPCamSetting(QWidget *parent = 0);
    ~IPCamSetting();
	
 private:
    Ui::IPCamSetting *ui;
	QMap<QString, QLineEdit *> m_mapLabelToLineEdit;
};

struct IsInherit
{
	explicit IsInherit(const char *inheritName) : m_strInheritName(inheritName)
	{}
    bool operator()(QObject *&obj) { return obj->inherits(m_strInheritName); }
    const char *m_strInheritName;
};

#endif // IPCAMSETTING_H










