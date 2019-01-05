#include "areacompras.h"
#include "ui_areacompras.h"

AreaCompras::AreaCompras(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AreaCompras)
{
    ui->setupUi(this);
}

AreaCompras::~AreaCompras()
{
    delete ui;
}
