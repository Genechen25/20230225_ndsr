#ifndef ANIMATIONBUTTON_H
#define ANIMATIONBUTTON_H

/**
 * 作者:Winter  20181124    Qt5.7
 */
//example
//ui->widget1->setText("主页");
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
    bool enter;                         //是否进入
    bool leave;                         //是否离开
    int pixWidth;                       //图片宽度
    int pixHeight;                      //图片高度
    int oldWidth;                       //图片旧宽度
    int oldHeight;                      //图片旧高度

    QPropertyAnimation *enterAnimation; //进入动画
    QPropertyAnimation *leaveAnimation; //离开动画

    int targetWidth;                    //目标宽度
    int targetHeight;                   //目标高度
    QString text;                       //显示文字
    bool flag;                          //seclect
    QString image1;                     //图像路径
    QString image2;                     //图像路径
    QPoint mousePos;
signals:
    void Clicked(void);
private slots:
    void enterImageChanged(QVariant index);
    void leaveImageChanged(QVariant index);
public:
    //设置显示的文字
    void setText(QString text);
    //设置显示的图像
    void setImage1(QString image);
    void setImage2(QString image);

    void setFlag(bool flag);

};

#endif // ANIMATIONBUTTON_H
