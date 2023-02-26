#ifndef ANIMATIONBUTTON_H
#define ANIMATIONBUTTON_H

/**
 * ����:Winter  20181124    Qt5.7
 */
//example
//ui->widget1->setText("��ҳ");
//ui->widget1->setImage(":/image/v-home-ico-home.png");
//connect(ui->widget1,SIGNAL(Clicked()),this,SLOT(MainPage()));



#include <QWidget>
#include <QVariant>
#include <QMouseEvent>

class QPropertyAnimation;

class AnimationButton : public QWidget
{
    Q_OBJECT
public:
    explicit AnimationButton(QWidget *parent = 0);
    ~AnimationButton();

protected:
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *ev);
private:
    bool enter;                         //�Ƿ����
    bool leave;                         //�Ƿ��뿪
    int pixWidth;                       //ͼƬ���
    int pixHeight;                      //ͼƬ�߶�
    int oldWidth;                       //ͼƬ�ɿ��
    int oldHeight;                      //ͼƬ�ɸ߶�

    QPropertyAnimation *enterAnimation; //���붯��
    QPropertyAnimation *leaveAnimation; //�뿪����

    int targetWidth;                    //Ŀ����
    int targetHeight;                   //Ŀ��߶�
    QString text;                       //��ʾ����
    bool flag;                          //seclect
    QString image1;                     //ͼ��·��
    QString image2;                     //ͼ��·��
    QPoint mousePos;
signals:
    void Clicked(void);
private slots:
    void enterImageChanged(QVariant index);
    void leaveImageChanged(QVariant index);
public:
    //������ʾ������
    void setText(QString text);
    //������ʾ��ͼ��
    void setImage1(QString image);
    void setImage2(QString image);

    void setFlag(bool flag);

};

#endif // ANIMATIONBUTTON_H
