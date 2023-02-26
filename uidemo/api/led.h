#ifndef LED_H
#define LED_H

/**
 * ����:Winter  20181124    Qt5.7
 */



#include <QWidget>

class LED : public QWidget
{
    Q_OBJECT
public:
    explicit LED(QWidget *parent = 0);
    ~LED();

protected:
    void paintEvent(QPaintEvent *);
private:
    bool flag;                          //seclect
    QString image1;                     //ͼ��·��
    QString image2;                     //ͼ��·��
public:
    //������ʾ��ͼ��
    void setImage1(QString image);
    void setImage2(QString image);

    void setFlag(bool flag);

};

#endif // LED_H
