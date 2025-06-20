#pragma once
#include <stdio.h>

class IShape {
public:
    virtual void Size() = 0;   // 计算面积
    virtual void Draw() = 0;   // 显示面积

protected:
    const char* name;
    float radius = 4;
    int wide = 2;
    int height = 3;
};
