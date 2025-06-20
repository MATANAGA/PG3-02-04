#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {

    IShape* shape[2];

    shape[0] = new Circle();
    shape[1] = new Rectangle();

    printf("�Ҥΰ뾶:4\n���Τε��x:2\n���Τθߤ�:3\n");

    for (int i = 0; i < 2; i++)
        shape[i]->Size();

    printf("\n");

    for (int i = 0; i < 2; i++)
        shape[i]->Draw();

    // ʹ����Ϻ��ͷ��ڴ�
    for (int i = 0; i < 2; i++)
        delete shape[i];

    return 0;
}
