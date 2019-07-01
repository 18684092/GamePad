# GamePad

Retruned structure is:

struct joystick
{
    // left joy
    int16_t x1Value;  // -32767 --> 32767
    int16_t y1Value;  // -32767 --> 32767
    // right joy
    int16_t x2Value;  // -32767 --> 32767
    int16_t y2Value;  // -32767 --> 32767
    // Button array
    bool button[50];
    string Compass;
};


#Make an instance:

GamePad JoyStick;

# Setup receiving structure

joystick e;

# Get buttons and stick values for /dev/input/js0

e = JoyStick.ReadDevice(0);

# e.Compass returns N NE E SE S SW W NW
# e.button[0 -> N] returns true / false depending on if that button was pressed



