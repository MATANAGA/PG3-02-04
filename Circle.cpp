#include "Circle.h"

void Circle::Size() {
    answer = radius * radius * 3.14f;
}

void Circle::Draw() {
    printf("�Ҥ���e��%.2f\n", answer);
}
