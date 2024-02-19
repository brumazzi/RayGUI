#ifndef __RAY_COMPONENT_HPP__
#define __RAY_COMPONENT_HPP__

#include <raylib.h>
#include <vector>
#include <map>

using std::map;

class RayComponent{
    public:

    char name[64] = {0};
    const char *text = nullptr;

    Rectangle dimension = (Rectangle) {0, 0, 64, 64};
    Rectangle virtualDimension = (Rectangle) {0, 0, 64, 64};
    Color color1      = GRAY;
    Color color2      = GRAY;
    Color color3      = GRAY;
    Color color4      = GRAY;
    Color colorFocus1 = GRAY;
    Color colorFocus2 = GRAY;
    Color colorFocus3 = GRAY;
    Color colorFocus4 = GRAY;
    Color colorClick1 = GRAY;
    Color colorClick2 = GRAY;
    Color colorClick3 = GRAY;
    Color colorClick4 = GRAY;
    Color colorOver1  = GRAY;
    Color colorOver2  = GRAY;
    Color colorOver3  = GRAY;
    Color colorOver4  = GRAY;
    Color borderColor = DARKGRAY;
    Color textColor   = BLACK;

    int borderSize = 0;
    int roundedSegments = 6;
    float roundedSize = 0.0;
    map<const char*, RayComponent*> children;
    RayComponent* parent = nullptr;
    int fontSize = 22;
    bool hidden = false;
    // float alpha = 1.0;

    MouseButton mouseButton = MOUSE_BUTTON_LEFT;
    MouseCursor mouseCursor = MOUSE_CURSOR_DEFAULT;

    bool isMouseOver = false;
    bool isFocus = false;

    map<KeyboardKey, bool> isKeyboardDown;
    map<KeyboardKey, bool> isKeyboardUp;
    map<KeyboardKey, bool> isKeyboardPressed;
    map<KeyboardKey, bool> isKeyboardReleased;
    bool isKeyboardRequestFocus = false;

    std::vector<bool> isMouseButtonDown;
    std::vector<bool> isMouseButtonUp;
    std::vector<bool> isMouseButtonPressed;
    std::vector<bool> isMouseButtonReleased;

    bool lastMouseOver;
    bool lastFocus;
    // bool lastClicked;

    void addChild(RayComponent *component);
    void removeChild(RayComponent *component);
    void setColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void setColor(Color color);
    void setColorClick(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void setColorClick(Color color);
    void setColorFocus(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void setColorFocus(Color color);
    void setColorOver(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void setColorOver(Color color);

    bool update();
    bool draw();

    // component events
    void (*onUpdate)(RayComponent *component)                                           = nullptr;
    void (*onFocus)(RayComponent *component)                                            = nullptr;

    void (*onMouseEnter)(RayComponent *component)                                       = nullptr;
    void (*onMouseExit)(RayComponent *component)                                        = nullptr;
    void (*onMouseOver)(RayComponent *component, int x, int y)                          = nullptr;

    void (*onMouseDown)(RayComponent *component, int keyCode, int x, int y)             = nullptr;
    void (*onMousePressed)(RayComponent *component, int keyCode, int x, int y)          = nullptr;
    void (*onMouseReleased)(RayComponent *component, int keyCode, int x, int y)         = nullptr;
    void (*onMouseUp)(RayComponent *component, int keyCode, int x, int y)               = nullptr;

    void (*onKeyboardPressed)(RayComponent *component, int keyCode)                     = nullptr;
    void (*onKeyboardReleased)(RayComponent *component, int keyCode)                    = nullptr;
    void (*onKeyboardDown)(RayComponent *component, int keyCode)                        = nullptr;
    void (*onKeyboardUp)(RayComponent *component, int keyCode)                          = nullptr;

    RayComponent(const char *name);
    ~RayComponent();
};


#endif