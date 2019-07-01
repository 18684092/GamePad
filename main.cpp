#include <iostream>

#include "GamePad.h"

using namespace std;



int main()
{
    joystick e;
    GamePad JoyStick;
    while(true)
    {
        e = JoyStick.ReadDevice(0);
        std::cout << "X1 : " << e.x1Value << std::endl;
        std::cout << "Y1 : " << e.y1Value << std::endl;
        std::cout << "X2 : " << e.x2Value << std::endl;
        std::cout << "Y2 : " << e.y2Value << std::endl;
        // how many buttons
        for (int b = 0; b < 12; b++)
        {
            std::cout << "Button : " << b << " - " << e.button[b] << std::endl;
        }
    }
    return 0;
}
