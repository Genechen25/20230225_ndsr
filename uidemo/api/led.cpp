#include "led.h"
#include "qpainter.h"
#include "qpropertyanimation.h"
#include "qdebug.h"

LED::LED(QWidget *parent) : QWidget(parent)
{
    flag = false;
}

LED::~LED()
{
}


void LED::paintEvent(QPaintEvent *)
{
    if (image1.isEmpty() || image2.isEmpty()) {
		return;
	}

	QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    QString str;
    if(this->flag == true)
    {
        str = image2;
    }
    else
    {
        str = image1;
    }
    QPixmap pix(str);
    pix = pix.scaled(20, 20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    painter.drawPixmap(0,0, pix);
}

void LED::setImage1(QString image)
{
    this->image1 = image;
    update();
}

void LED::setImage2(QString image)
{
    this->image2 = image;
    update();
}

void LED::setFlag(bool flag)
{
    this->flag = flag;
    update();
}
