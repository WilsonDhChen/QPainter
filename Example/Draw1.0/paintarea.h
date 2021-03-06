#ifndef PAINTAREA_H
#define PAINTAREA_H

#include <QWidget>
#include <QPoint>
#include <QPointF>
#include <QMouseEvent>


class PaintArea : public QWidget
{

public:
    PaintArea();//构造函数
    void setImageSize(double width, double height);
    void setImageColor(QColor color);
    bool isModified()const{return modified;}
    bool saveImage(const QString & fileName,const char*fileFormat);
    bool openImage(const QString & fileName);//打开图片
    QSize getImageSize();
    //编辑菜单中的功能
    void zoomIn();
    void zoomOut();
    void zoom_1();
    void doRotate();
    void doShear();
    void doClear();
    //进行绘图工具函数声明
    void setPenStyle(Qt::PenStyle);
    void setPenWidth(double width);
    void setPenColor(QColor color);
    void setBrushColor(QColor color);
    enum ShapeType
    {
        None,Line,Rectangle,Ellipse
    };
    void setShape(ShapeType shape);//选择要绘制的图形

protected:
    //事件处理函数
    void paintEvent(QPaintEvent *);
    //添加鼠标事件
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void paint(QImage &theImage);
private:
    QImage image;
    QRgb backColor;
    QPointF lastPoint,endPoint;
    bool modified;//是否被更改标志
    //编辑菜单中需要的属性
    qreal scale;//所放量
    double angle;//角度
    qreal shear;//拉伸量

    //绘图工具栏所需要的属性
    QColor penColor;
    QColor brushColor;
    double penWidth;
    Qt::PenStyle penStyle;//画笔风格

    ShapeType curShape;
    //添加临时绘图区，解决多个图形的不停画图的问题
    QImage tempImage;
    bool isDrawing;//是否再绘制特殊图形，初始化为 false;


};

#endif // PAINTAREA_H
