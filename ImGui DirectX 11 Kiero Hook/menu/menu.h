#pragma once
#include <Windows.h>
#include "../includes.h"
//bool
namespace b {
   extern bool bMenu;
   extern bool bCheckBox;
}
//int
namespace i {
    extern int iInt;
    extern int screen_x;
    extern int screen_y;
}
//float
namespace f {
    extern float fFloat;
}
//keybind
namespace Key {
    extern int Key;
}
void RenderMenu();