#include <algorithm>
#include "ipcamsetting.h"
#include "ui_ipcamsetting.h"

IPCamSetting::IPCamSetting(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::IPCamSetting)
{
    ui->setupUi(this);
	QObjectList objList = this->children();
    QObjectList::iterator objIter = objList.begin(), objEnd = objList.end();
	QObjectList::iterator lineEditIter = objList.begin();
	IsInherit predLabel("QLabel"), predLineEdit("QLineEdit");
    while ((objIter = std::find_if(objIter, objEnd, predLabel)) != objEnd) {
        lineEditIter = std::find_if(lineEditIter, objEnd, predLineEdit);
        if (lineEditIter != objEnd) {
            m_mapLabelToLineEdit.insert(dynamic_cast<QLabel*>(*objIter)->text(),
                                        dynamic_cast<QLineEdit*>(*lineEditIter));
            ++lineEditIter;
        }
        ++objIter;
	}
}

IPCamSetting::~IPCamSetting()
{
    delete ui;
	m_mapLabelToLineEdit.clear();
}
