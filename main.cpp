#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {

    IShape* shape[2];

    shape[0] = new Circle();
    shape[1] = new Rectangle();

    printf("円の半径:4\n短形の底辺:2\n短形の高さ:3\n");

    for (int i = 0; i < 2; i++)
        shape[i]->Size();

    printf("\n");

    for (int i = 0; i < 2; i++)
        shape[i]->Draw();

    // 使用完毕后释放内存
    for (int i = 0; i < 2; i++)
        delete shape[i];

    return 0;
}
