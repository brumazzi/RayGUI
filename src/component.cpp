#include <component.hpp>
#include <string.h>
#include <stdio.h>

RayComponent::RayComponent(const char *name){
    strcpy(this->name, name);
    for(int i=0; i<7; i++){
        this->isMouseButtonDown.push_back(false);
        this->isMouseButtonUp.push_back(false);
        this->isMouseButtonPressed.push_back(false);
        this->isMouseButtonReleased.push_back(false);
    }

    this->isKeyboardDown[KEY_NULL] = false; this->isKeyboardPressed[KEY_NULL] = false; this->isKeyboardReleased[KEY_NULL] = false; this->isKeyboardUp[KEY_NULL] = true;
    this->isKeyboardDown[KEY_APOSTROPHE] = false; this->isKeyboardPressed[KEY_APOSTROPHE] = false; this->isKeyboardReleased[KEY_APOSTROPHE] = false; this->isKeyboardUp[KEY_APOSTROPHE] = true;
    this->isKeyboardDown[KEY_COMMA] = false; this->isKeyboardPressed[KEY_COMMA] = false; this->isKeyboardReleased[KEY_COMMA] = false; this->isKeyboardUp[KEY_COMMA] = true;
    this->isKeyboardDown[KEY_MINUS] = false; this->isKeyboardPressed[KEY_MINUS] = false; this->isKeyboardReleased[KEY_MINUS] = false; this->isKeyboardUp[KEY_MINUS] = true;
    this->isKeyboardDown[KEY_PERIOD] = false; this->isKeyboardPressed[KEY_PERIOD] = false; this->isKeyboardReleased[KEY_PERIOD] = false; this->isKeyboardUp[KEY_PERIOD] = true;
    this->isKeyboardDown[KEY_SLASH] = false; this->isKeyboardPressed[KEY_SLASH] = false; this->isKeyboardReleased[KEY_SLASH] = false; this->isKeyboardUp[KEY_SLASH] = true;
    this->isKeyboardDown[KEY_ZERO] = false; this->isKeyboardPressed[KEY_ZERO] = false; this->isKeyboardReleased[KEY_ZERO] = false; this->isKeyboardUp[KEY_ZERO] = true;
    this->isKeyboardDown[KEY_ONE] = false; this->isKeyboardPressed[KEY_ONE] = false; this->isKeyboardReleased[KEY_ONE] = false; this->isKeyboardUp[KEY_ONE] = true;
    this->isKeyboardDown[KEY_TWO] = false; this->isKeyboardPressed[KEY_TWO] = false; this->isKeyboardReleased[KEY_TWO] = false; this->isKeyboardUp[KEY_TWO] = true;
    this->isKeyboardDown[KEY_THREE] = false; this->isKeyboardPressed[KEY_THREE] = false; this->isKeyboardReleased[KEY_THREE] = false; this->isKeyboardUp[KEY_THREE] = true;
    this->isKeyboardDown[KEY_FOUR] = false; this->isKeyboardPressed[KEY_FOUR] = false; this->isKeyboardReleased[KEY_FOUR] = false; this->isKeyboardUp[KEY_FOUR] = true;
    this->isKeyboardDown[KEY_FIVE] = false; this->isKeyboardPressed[KEY_FIVE] = false; this->isKeyboardReleased[KEY_FIVE] = false; this->isKeyboardUp[KEY_FIVE] = true;
    this->isKeyboardDown[KEY_SIX] = false; this->isKeyboardPressed[KEY_SIX] = false; this->isKeyboardReleased[KEY_SIX] = false; this->isKeyboardUp[KEY_SIX] = true;
    this->isKeyboardDown[KEY_SEVEN] = false; this->isKeyboardPressed[KEY_SEVEN] = false; this->isKeyboardReleased[KEY_SEVEN] = false; this->isKeyboardUp[KEY_SEVEN] = true;
    this->isKeyboardDown[KEY_EIGHT] = false; this->isKeyboardPressed[KEY_EIGHT] = false; this->isKeyboardReleased[KEY_EIGHT] = false; this->isKeyboardUp[KEY_EIGHT] = true;
    this->isKeyboardDown[KEY_NINE] = false; this->isKeyboardPressed[KEY_NINE] = false; this->isKeyboardReleased[KEY_NINE] = false; this->isKeyboardUp[KEY_NINE] = true;
    this->isKeyboardDown[KEY_SEMICOLON] = false; this->isKeyboardPressed[KEY_SEMICOLON] = false; this->isKeyboardReleased[KEY_SEMICOLON] = false; this->isKeyboardUp[KEY_SEMICOLON] = true;
    this->isKeyboardDown[KEY_EQUAL] = false; this->isKeyboardPressed[KEY_EQUAL] = false; this->isKeyboardReleased[KEY_EQUAL] = false; this->isKeyboardUp[KEY_EQUAL] = true;
    this->isKeyboardDown[KEY_A] = false; this->isKeyboardPressed[KEY_A] = false; this->isKeyboardReleased[KEY_A] = false; this->isKeyboardUp[KEY_A] = true;
    this->isKeyboardDown[KEY_B] = false; this->isKeyboardPressed[KEY_B] = false; this->isKeyboardReleased[KEY_B] = false; this->isKeyboardUp[KEY_B] = true;
    this->isKeyboardDown[KEY_C] = false; this->isKeyboardPressed[KEY_C] = false; this->isKeyboardReleased[KEY_C] = false; this->isKeyboardUp[KEY_C] = true;
    this->isKeyboardDown[KEY_D] = false; this->isKeyboardPressed[KEY_D] = false; this->isKeyboardReleased[KEY_D] = false; this->isKeyboardUp[KEY_D] = true;
    this->isKeyboardDown[KEY_E] = false; this->isKeyboardPressed[KEY_E] = false; this->isKeyboardReleased[KEY_E] = false; this->isKeyboardUp[KEY_E] = true;
    this->isKeyboardDown[KEY_F] = false; this->isKeyboardPressed[KEY_F] = false; this->isKeyboardReleased[KEY_F] = false; this->isKeyboardUp[KEY_F] = true;
    this->isKeyboardDown[KEY_G] = false; this->isKeyboardPressed[KEY_G] = false; this->isKeyboardReleased[KEY_G] = false; this->isKeyboardUp[KEY_G] = true;
    this->isKeyboardDown[KEY_H] = false; this->isKeyboardPressed[KEY_H] = false; this->isKeyboardReleased[KEY_H] = false; this->isKeyboardUp[KEY_H] = true;
    this->isKeyboardDown[KEY_I] = false; this->isKeyboardPressed[KEY_I] = false; this->isKeyboardReleased[KEY_I] = false; this->isKeyboardUp[KEY_I] = true;
    this->isKeyboardDown[KEY_J] = false; this->isKeyboardPressed[KEY_J] = false; this->isKeyboardReleased[KEY_J] = false; this->isKeyboardUp[KEY_J] = true;
    this->isKeyboardDown[KEY_K] = false; this->isKeyboardPressed[KEY_K] = false; this->isKeyboardReleased[KEY_K] = false; this->isKeyboardUp[KEY_K] = true;
    this->isKeyboardDown[KEY_L] = false; this->isKeyboardPressed[KEY_L] = false; this->isKeyboardReleased[KEY_L] = false; this->isKeyboardUp[KEY_L] = true;
    this->isKeyboardDown[KEY_M] = false; this->isKeyboardPressed[KEY_M] = false; this->isKeyboardReleased[KEY_M] = false; this->isKeyboardUp[KEY_M] = true;
    this->isKeyboardDown[KEY_N] = false; this->isKeyboardPressed[KEY_N] = false; this->isKeyboardReleased[KEY_N] = false; this->isKeyboardUp[KEY_N] = true;
    this->isKeyboardDown[KEY_O] = false; this->isKeyboardPressed[KEY_O] = false; this->isKeyboardReleased[KEY_O] = false; this->isKeyboardUp[KEY_O] = true;
    this->isKeyboardDown[KEY_P] = false; this->isKeyboardPressed[KEY_P] = false; this->isKeyboardReleased[KEY_P] = false; this->isKeyboardUp[KEY_P] = true;
    this->isKeyboardDown[KEY_Q] = false; this->isKeyboardPressed[KEY_Q] = false; this->isKeyboardReleased[KEY_Q] = false; this->isKeyboardUp[KEY_Q] = true;
    this->isKeyboardDown[KEY_R] = false; this->isKeyboardPressed[KEY_R] = false; this->isKeyboardReleased[KEY_R] = false; this->isKeyboardUp[KEY_R] = true;
    this->isKeyboardDown[KEY_S] = false; this->isKeyboardPressed[KEY_S] = false; this->isKeyboardReleased[KEY_S] = false; this->isKeyboardUp[KEY_S] = true;
    this->isKeyboardDown[KEY_T] = false; this->isKeyboardPressed[KEY_T] = false; this->isKeyboardReleased[KEY_T] = false; this->isKeyboardUp[KEY_T] = true;
    this->isKeyboardDown[KEY_U] = false; this->isKeyboardPressed[KEY_U] = false; this->isKeyboardReleased[KEY_U] = false; this->isKeyboardUp[KEY_U] = true;
    this->isKeyboardDown[KEY_V] = false; this->isKeyboardPressed[KEY_V] = false; this->isKeyboardReleased[KEY_V] = false; this->isKeyboardUp[KEY_V] = true;
    this->isKeyboardDown[KEY_W] = false; this->isKeyboardPressed[KEY_W] = false; this->isKeyboardReleased[KEY_W] = false; this->isKeyboardUp[KEY_W] = true;
    this->isKeyboardDown[KEY_X] = false; this->isKeyboardPressed[KEY_X] = false; this->isKeyboardReleased[KEY_X] = false; this->isKeyboardUp[KEY_X] = true;
    this->isKeyboardDown[KEY_Y] = false; this->isKeyboardPressed[KEY_Y] = false; this->isKeyboardReleased[KEY_Y] = false; this->isKeyboardUp[KEY_Y] = true;
    this->isKeyboardDown[KEY_Z] = false; this->isKeyboardPressed[KEY_Z] = false; this->isKeyboardReleased[KEY_Z] = false; this->isKeyboardUp[KEY_Z] = true;
    this->isKeyboardDown[KEY_LEFT_BRACKET] = false; this->isKeyboardPressed[KEY_LEFT_BRACKET] = false; this->isKeyboardReleased[KEY_LEFT_BRACKET] = false; this->isKeyboardUp[KEY_LEFT_BRACKET] = true;
    this->isKeyboardDown[KEY_BACKSLASH] = false; this->isKeyboardPressed[KEY_BACKSLASH] = false; this->isKeyboardReleased[KEY_BACKSLASH] = false; this->isKeyboardUp[KEY_BACKSLASH] = true;
    this->isKeyboardDown[KEY_RIGHT_BRACKET] = false; this->isKeyboardPressed[KEY_RIGHT_BRACKET] = false; this->isKeyboardReleased[KEY_RIGHT_BRACKET] = false; this->isKeyboardUp[KEY_RIGHT_BRACKET] = true;
    this->isKeyboardDown[KEY_GRAVE] = false; this->isKeyboardPressed[KEY_GRAVE] = false; this->isKeyboardReleased[KEY_GRAVE] = false; this->isKeyboardUp[KEY_GRAVE] = true;
    this->isKeyboardDown[KEY_SPACE] = false; this->isKeyboardPressed[KEY_SPACE] = false; this->isKeyboardReleased[KEY_SPACE] = false; this->isKeyboardUp[KEY_SPACE] = true;
    this->isKeyboardDown[KEY_ESCAPE] = false; this->isKeyboardPressed[KEY_ESCAPE] = false; this->isKeyboardReleased[KEY_ESCAPE] = false; this->isKeyboardUp[KEY_ESCAPE] = true;
    this->isKeyboardDown[KEY_ENTER] = false; this->isKeyboardPressed[KEY_ENTER] = false; this->isKeyboardReleased[KEY_ENTER] = false; this->isKeyboardUp[KEY_ENTER] = true;
    this->isKeyboardDown[KEY_TAB] = false; this->isKeyboardPressed[KEY_TAB] = false; this->isKeyboardReleased[KEY_TAB] = false; this->isKeyboardUp[KEY_TAB] = true;
    this->isKeyboardDown[KEY_BACKSPACE] = false; this->isKeyboardPressed[KEY_BACKSPACE] = false; this->isKeyboardReleased[KEY_BACKSPACE] = false; this->isKeyboardUp[KEY_BACKSPACE] = true;
    this->isKeyboardDown[KEY_INSERT] = false; this->isKeyboardPressed[KEY_INSERT] = false; this->isKeyboardReleased[KEY_INSERT] = false; this->isKeyboardUp[KEY_INSERT] = true;
    this->isKeyboardDown[KEY_DELETE] = false; this->isKeyboardPressed[KEY_DELETE] = false; this->isKeyboardReleased[KEY_DELETE] = false; this->isKeyboardUp[KEY_DELETE] = true;
    this->isKeyboardDown[KEY_RIGHT] = false; this->isKeyboardPressed[KEY_RIGHT] = false; this->isKeyboardReleased[KEY_RIGHT] = false; this->isKeyboardUp[KEY_RIGHT] = true;
    this->isKeyboardDown[KEY_LEFT] = false; this->isKeyboardPressed[KEY_LEFT] = false; this->isKeyboardReleased[KEY_LEFT] = false; this->isKeyboardUp[KEY_LEFT] = true;
    this->isKeyboardDown[KEY_DOWN] = false; this->isKeyboardPressed[KEY_DOWN] = false; this->isKeyboardReleased[KEY_DOWN] = false; this->isKeyboardUp[KEY_DOWN] = true;
    this->isKeyboardDown[KEY_UP] = false; this->isKeyboardPressed[KEY_UP] = false; this->isKeyboardReleased[KEY_UP] = false; this->isKeyboardUp[KEY_UP] = true;
    this->isKeyboardDown[KEY_PAGE_UP] = false; this->isKeyboardPressed[KEY_PAGE_UP] = false; this->isKeyboardReleased[KEY_PAGE_UP] = false; this->isKeyboardUp[KEY_PAGE_UP] = true;
    this->isKeyboardDown[KEY_PAGE_DOWN] = false; this->isKeyboardPressed[KEY_PAGE_DOWN] = false; this->isKeyboardReleased[KEY_PAGE_DOWN] = false; this->isKeyboardUp[KEY_PAGE_DOWN] = true;
    this->isKeyboardDown[KEY_HOME] = false; this->isKeyboardPressed[KEY_HOME] = false; this->isKeyboardReleased[KEY_HOME] = false; this->isKeyboardUp[KEY_HOME] = true;
    this->isKeyboardDown[KEY_END] = false; this->isKeyboardPressed[KEY_END] = false; this->isKeyboardReleased[KEY_END] = false; this->isKeyboardUp[KEY_END] = true;
    this->isKeyboardDown[KEY_CAPS_LOCK] = false; this->isKeyboardPressed[KEY_CAPS_LOCK] = false; this->isKeyboardReleased[KEY_CAPS_LOCK] = false; this->isKeyboardUp[KEY_CAPS_LOCK] = true;
    this->isKeyboardDown[KEY_SCROLL_LOCK] = false; this->isKeyboardPressed[KEY_SCROLL_LOCK] = false; this->isKeyboardReleased[KEY_SCROLL_LOCK] = false; this->isKeyboardUp[KEY_SCROLL_LOCK] = true;
    this->isKeyboardDown[KEY_NUM_LOCK] = false; this->isKeyboardPressed[KEY_NUM_LOCK] = false; this->isKeyboardReleased[KEY_NUM_LOCK] = false; this->isKeyboardUp[KEY_NUM_LOCK] = true;
    this->isKeyboardDown[KEY_PRINT_SCREEN] = false; this->isKeyboardPressed[KEY_PRINT_SCREEN] = false; this->isKeyboardReleased[KEY_PRINT_SCREEN] = false; this->isKeyboardUp[KEY_PRINT_SCREEN] = true;
    this->isKeyboardDown[KEY_PAUSE] = false; this->isKeyboardPressed[KEY_PAUSE] = false; this->isKeyboardReleased[KEY_PAUSE] = false; this->isKeyboardUp[KEY_PAUSE] = true;
    this->isKeyboardDown[KEY_F1] = false; this->isKeyboardPressed[KEY_F1] = false; this->isKeyboardReleased[KEY_F1] = false; this->isKeyboardUp[KEY_F1] = true;
    this->isKeyboardDown[KEY_F2] = false; this->isKeyboardPressed[KEY_F2] = false; this->isKeyboardReleased[KEY_F2] = false; this->isKeyboardUp[KEY_F2] = true;
    this->isKeyboardDown[KEY_F3] = false; this->isKeyboardPressed[KEY_F3] = false; this->isKeyboardReleased[KEY_F3] = false; this->isKeyboardUp[KEY_F3] = true;
    this->isKeyboardDown[KEY_F4] = false; this->isKeyboardPressed[KEY_F4] = false; this->isKeyboardReleased[KEY_F4] = false; this->isKeyboardUp[KEY_F4] = true;
    this->isKeyboardDown[KEY_F5] = false; this->isKeyboardPressed[KEY_F5] = false; this->isKeyboardReleased[KEY_F5] = false; this->isKeyboardUp[KEY_F5] = true;
    this->isKeyboardDown[KEY_F6] = false; this->isKeyboardPressed[KEY_F6] = false; this->isKeyboardReleased[KEY_F6] = false; this->isKeyboardUp[KEY_F6] = true;
    this->isKeyboardDown[KEY_F7] = false; this->isKeyboardPressed[KEY_F7] = false; this->isKeyboardReleased[KEY_F7] = false; this->isKeyboardUp[KEY_F7] = true;
    this->isKeyboardDown[KEY_F8] = false; this->isKeyboardPressed[KEY_F8] = false; this->isKeyboardReleased[KEY_F8] = false; this->isKeyboardUp[KEY_F8] = true;
    this->isKeyboardDown[KEY_F9] = false; this->isKeyboardPressed[KEY_F9] = false; this->isKeyboardReleased[KEY_F9] = false; this->isKeyboardUp[KEY_F9] = true;
    this->isKeyboardDown[KEY_F10] = false; this->isKeyboardPressed[KEY_F10] = false; this->isKeyboardReleased[KEY_F10] = false; this->isKeyboardUp[KEY_F10] = true;
    this->isKeyboardDown[KEY_F11] = false; this->isKeyboardPressed[KEY_F11] = false; this->isKeyboardReleased[KEY_F11] = false; this->isKeyboardUp[KEY_F11] = true;
    this->isKeyboardDown[KEY_F12] = false; this->isKeyboardPressed[KEY_F12] = false; this->isKeyboardReleased[KEY_F12] = false; this->isKeyboardUp[KEY_F12] = true;
    this->isKeyboardDown[KEY_LEFT_SHIFT] = false; this->isKeyboardPressed[KEY_LEFT_SHIFT] = false; this->isKeyboardReleased[KEY_LEFT_SHIFT] = false; this->isKeyboardUp[KEY_LEFT_SHIFT] = true;
    this->isKeyboardDown[KEY_LEFT_CONTROL] = false; this->isKeyboardPressed[KEY_LEFT_CONTROL] = false; this->isKeyboardReleased[KEY_LEFT_CONTROL] = false; this->isKeyboardUp[KEY_LEFT_CONTROL] = true;
    this->isKeyboardDown[KEY_LEFT_ALT] = false; this->isKeyboardPressed[KEY_LEFT_ALT] = false; this->isKeyboardReleased[KEY_LEFT_ALT] = false; this->isKeyboardUp[KEY_LEFT_ALT] = true;
    this->isKeyboardDown[KEY_LEFT_SUPER] = false; this->isKeyboardPressed[KEY_LEFT_SUPER] = false; this->isKeyboardReleased[KEY_LEFT_SUPER] = false; this->isKeyboardUp[KEY_LEFT_SUPER] = true;
    this->isKeyboardDown[KEY_RIGHT_SHIFT] = false; this->isKeyboardPressed[KEY_RIGHT_SHIFT] = false; this->isKeyboardReleased[KEY_RIGHT_SHIFT] = false; this->isKeyboardUp[KEY_RIGHT_SHIFT] = true;
    this->isKeyboardDown[KEY_RIGHT_CONTROL] = false; this->isKeyboardPressed[KEY_RIGHT_CONTROL] = false; this->isKeyboardReleased[KEY_RIGHT_CONTROL] = false; this->isKeyboardUp[KEY_RIGHT_CONTROL] = true;
    this->isKeyboardDown[KEY_RIGHT_ALT] = false; this->isKeyboardPressed[KEY_RIGHT_ALT] = false; this->isKeyboardReleased[KEY_RIGHT_ALT] = false; this->isKeyboardUp[KEY_RIGHT_ALT] = true;
    this->isKeyboardDown[KEY_RIGHT_SUPER] = false; this->isKeyboardPressed[KEY_RIGHT_SUPER] = false; this->isKeyboardReleased[KEY_RIGHT_SUPER] = false; this->isKeyboardUp[KEY_RIGHT_SUPER] = true;
    this->isKeyboardDown[KEY_KB_MENU] = false; this->isKeyboardPressed[KEY_KB_MENU] = false; this->isKeyboardReleased[KEY_KB_MENU] = false; this->isKeyboardUp[KEY_KB_MENU] = true;
    this->isKeyboardDown[KEY_KP_0] = false; this->isKeyboardPressed[KEY_KP_0] = false; this->isKeyboardReleased[KEY_KP_0] = false; this->isKeyboardUp[KEY_KP_0] = true;
    this->isKeyboardDown[KEY_KP_1] = false; this->isKeyboardPressed[KEY_KP_1] = false; this->isKeyboardReleased[KEY_KP_1] = false; this->isKeyboardUp[KEY_KP_1] = true;
    this->isKeyboardDown[KEY_KP_2] = false; this->isKeyboardPressed[KEY_KP_2] = false; this->isKeyboardReleased[KEY_KP_2] = false; this->isKeyboardUp[KEY_KP_2] = true;
    this->isKeyboardDown[KEY_KP_3] = false; this->isKeyboardPressed[KEY_KP_3] = false; this->isKeyboardReleased[KEY_KP_3] = false; this->isKeyboardUp[KEY_KP_3] = true;
    this->isKeyboardDown[KEY_KP_4] = false; this->isKeyboardPressed[KEY_KP_4] = false; this->isKeyboardReleased[KEY_KP_4] = false; this->isKeyboardUp[KEY_KP_4] = true;
    this->isKeyboardDown[KEY_KP_5] = false; this->isKeyboardPressed[KEY_KP_5] = false; this->isKeyboardReleased[KEY_KP_5] = false; this->isKeyboardUp[KEY_KP_5] = true;
    this->isKeyboardDown[KEY_KP_6] = false; this->isKeyboardPressed[KEY_KP_6] = false; this->isKeyboardReleased[KEY_KP_6] = false; this->isKeyboardUp[KEY_KP_6] = true;
    this->isKeyboardDown[KEY_KP_7] = false; this->isKeyboardPressed[KEY_KP_7] = false; this->isKeyboardReleased[KEY_KP_7] = false; this->isKeyboardUp[KEY_KP_7] = true;
    this->isKeyboardDown[KEY_KP_8] = false; this->isKeyboardPressed[KEY_KP_8] = false; this->isKeyboardReleased[KEY_KP_8] = false; this->isKeyboardUp[KEY_KP_8] = true;
    this->isKeyboardDown[KEY_KP_9] = false; this->isKeyboardPressed[KEY_KP_9] = false; this->isKeyboardReleased[KEY_KP_9] = false; this->isKeyboardUp[KEY_KP_9] = true;
    this->isKeyboardDown[KEY_KP_DECIMAL] = false; this->isKeyboardPressed[KEY_KP_DECIMAL] = false; this->isKeyboardReleased[KEY_KP_DECIMAL] = false; this->isKeyboardUp[KEY_KP_DECIMAL] = true;
    this->isKeyboardDown[KEY_KP_DIVIDE] = false; this->isKeyboardPressed[KEY_KP_DIVIDE] = false; this->isKeyboardReleased[KEY_KP_DIVIDE] = false; this->isKeyboardUp[KEY_KP_DIVIDE] = true;
    this->isKeyboardDown[KEY_KP_MULTIPLY] = false; this->isKeyboardPressed[KEY_KP_MULTIPLY] = false; this->isKeyboardReleased[KEY_KP_MULTIPLY] = false; this->isKeyboardUp[KEY_KP_MULTIPLY] = true;
    this->isKeyboardDown[KEY_KP_SUBTRACT] = false; this->isKeyboardPressed[KEY_KP_SUBTRACT] = false; this->isKeyboardReleased[KEY_KP_SUBTRACT] = false; this->isKeyboardUp[KEY_KP_SUBTRACT] = true;
    this->isKeyboardDown[KEY_KP_ADD] = false; this->isKeyboardPressed[KEY_KP_ADD] = false; this->isKeyboardReleased[KEY_KP_ADD] = false; this->isKeyboardUp[KEY_KP_ADD] = true;
    this->isKeyboardDown[KEY_KP_ENTER] = false; this->isKeyboardPressed[KEY_KP_ENTER] = false; this->isKeyboardReleased[KEY_KP_ENTER] = false; this->isKeyboardUp[KEY_KP_ENTER] = true;
    this->isKeyboardDown[KEY_KP_EQUAL] = false; this->isKeyboardPressed[KEY_KP_EQUAL] = false; this->isKeyboardReleased[KEY_KP_EQUAL] = false; this->isKeyboardUp[KEY_KP_EQUAL] = true;
    this->isKeyboardDown[KEY_BACK] = false; this->isKeyboardPressed[KEY_BACK] = false; this->isKeyboardReleased[KEY_BACK] = false; this->isKeyboardUp[KEY_BACK] = true;
    this->isKeyboardDown[KEY_MENU] = false; this->isKeyboardPressed[KEY_MENU] = false; this->isKeyboardReleased[KEY_MENU] = false; this->isKeyboardUp[KEY_MENU] = true;
    this->isKeyboardDown[KEY_VOLUME_UP] = false; this->isKeyboardPressed[KEY_VOLUME_UP] = false; this->isKeyboardReleased[KEY_VOLUME_UP] = false; this->isKeyboardUp[KEY_VOLUME_UP] = true;
    this->isKeyboardDown[KEY_VOLUME_DOWN] = false; this->isKeyboardPressed[KEY_VOLUME_DOWN] = false; this->isKeyboardReleased[KEY_VOLUME_DOWN] = false; this->isKeyboardUp[KEY_VOLUME_DOWN] = true;
}

RayComponent::~RayComponent(){}

void RayComponent::addChild(RayComponent *component){
    this->children[component->name] = component;
    component->parent = this;
}
void RayComponent::removeChild(RayComponent *component){
    this->children.erase(component->name);
    component->parent = NULL;
}

bool RayComponent::update(){
    if(this->hidden) return false;
    if(this->onUpdate) this->onUpdate(this);

    virtualDimension = this->dimension;
    if(this->parent){
        this->virtualDimension.x = this->dimension.x+parent->virtualDimension.x;
        this->virtualDimension.y = this->dimension.y+parent->virtualDimension.y;
        this->virtualDimension.width = this->dimension.width;
        this->virtualDimension.height = this->dimension.height;
    }
    Vector2 pos = GetMousePosition();
    bool stopUpdate = false;

    for(auto [name, component]: this->children){
        stopUpdate = component->update();
    }

    if(pos.x >= virtualDimension.x && pos.x <= virtualDimension.x + virtualDimension.width && pos.y >= virtualDimension.y && pos.y <= virtualDimension.y + virtualDimension.height){
        this->isMouseOver = true;
    }else {this->isMouseOver = false;}

    if(stopUpdate) return stopUpdate;

    for(int mouseButton=0; mouseButton<7; mouseButton++){
        if(this->isMouseButtonPressed[mouseButton] = IsMouseButtonPressed(mouseButton)){
            this->isFocus = false;
            if(this->isMouseOver){
                this->isFocus = true;
                if(this->onMousePressed) this->onMousePressed(this, mouseButton, pos.x, pos.y);
                stopUpdate = true;
            }
        }
        if(this->isMouseButtonReleased[mouseButton] = IsMouseButtonReleased(mouseButton)){
            if(this->isMouseOver){
                if(this->onMouseReleased) this->onMouseReleased(this, mouseButton, pos.x, pos.y);
                stopUpdate = true;
            }
        }
    }

    if(!this->isKeyboardRequestFocus || (this->isKeyboardRequestFocus && this->isFocus)){
        for(auto [key, value]: this->isKeyboardPressed){
            if(this->isKeyboardUp[key] = IsKeyUp(key) && isKeyboardReleased[key]){
                if(this->onKeyboardUp) this->onKeyboardUp(this, key);
            }
            if(this->isKeyboardDown[key] = IsKeyDown(key) && isKeyboardPressed[key]){
                if(this->onKeyboardDown) this->onKeyboardDown(this, key);
            }
            if(this->isKeyboardPressed[key] = IsKeyPressed(key)){
                if(this->onKeyboardPressed) this->onKeyboardPressed(this, key);
            }
            if(this->isKeyboardReleased[key] = IsKeyReleased(key)){
                if(this->onKeyboardReleased) this->onKeyboardReleased(this, key);
            }

        }
    }

    if(stopUpdate) return stopUpdate;

    // call onMouseOver
    if(this->isMouseOver && this->onMouseOver){
        this->onMouseOver(this, pos.x, pos.y);
    };

    // verify and update change Over status to call onMouseEnter and onMouseExit callback
    if(this->isMouseOver != this->lastMouseOver){
        this->lastMouseOver = this->isMouseOver;

        if(this->isMouseOver){
            if(this->onMouseEnter) this->onMouseEnter(this);
        }else{
            if(this->onMouseExit) this->onMouseExit(this);
        }
    }

    // verify and update change focus status to call onOver callback
    if(this->onFocus && this->isFocus != this->lastFocus){
        this->lastFocus = this->isFocus;
        if(this->isFocus){
            this->onFocus(this);
        }
    }

    return stopUpdate;
}

bool RayComponent::draw(){
    if(this->hidden) return false;

    Color color1 = this->color1,
          color2 = this->color2,
          color3 = this->color3,
          color4 = this->color4;

    if(this->isFocus){
        color1 = this->colorFocus1;
        color2 = this->colorFocus2;
        color3 = this->colorFocus3;
        color4 = this->colorFocus4;
    }

    if(this->isMouseOver){
        color1 = this->colorOver1;
        color2 = this->colorOver2;
        color3 = this->colorOver3;
        color4 = this->colorOver4;
        if(this->isMouseButtonDown[this->mouseButton]){
            color1 = this->colorClick1;
            color2 = this->colorClick2;
            color3 = this->colorClick3;
            color4 = this->colorClick4;
        }
    }

    if(this->roundedSize > 0){
        DrawRectangleRounded(virtualDimension, this->roundedSize, this->roundedSegments, this->color1);
    }else{
        DrawRectangleGradientEx(virtualDimension, color1, color2, color3, color4);
    }

    if(this->borderSize > 0){
        if(this->roundedSize > 0){
            DrawRectangleRoundedLines(virtualDimension, this->roundedSize, this->roundedSegments, this->borderSize, this->borderColor);
        }else{
            DrawRectangleLinesEx(virtualDimension, this->borderSize, this->borderColor);
        }
    }

    if(*this->text){
        int textLen = strlen(this->text);
        int centerX, centerY;
        centerX = (virtualDimension.width/2)-(MeasureText(this->text, this->fontSize)/2) + virtualDimension.x;
        centerY = (virtualDimension.height/2)-(this->fontSize/2) + virtualDimension.y;
        DrawText((const char*) this->text, centerX, centerY, this->fontSize, this->textColor);
    }

    for(auto [name, component]: this->children){
        if(component->draw()) return true;
    }

    return true;
}

void RayComponent::setColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a){
    this->color1 = (Color) {r,g,b,a};
    this->color2 = (Color) {r,g,b,a};
    this->color3 = (Color) {r,g,b,a};
    this->color4 = (Color) {r,g,b,a};
}

void RayComponent::setColor(Color color){
    this->color1 = color;
    this->color2 = color;
    this->color3 = color;
    this->color4 = color;
}
void RayComponent::setColorClick(unsigned char r, unsigned char g, unsigned char b, unsigned char a){
    this->color1 = (Color) {r,g,b,a};
    this->color2 = (Color) {r,g,b,a};
    this->color3 = (Color) {r,g,b,a};
    this->color4 = (Color) {r,g,b,a};
}
void RayComponent::setColorClick(Color color){
    this->color1 = color;
    this->color2 = color;
    this->color3 = color;
    this->color4 = color;
}
void RayComponent::setColorFocus(unsigned char r, unsigned char g, unsigned char b, unsigned char a){
    this->color1 = (Color) {r,g,b,a};
    this->color2 = (Color) {r,g,b,a};
    this->color3 = (Color) {r,g,b,a};
    this->color4 = (Color) {r,g,b,a};
}
void RayComponent::setColorFocus(Color color){
    this->color1 = color;
    this->color2 = color;
    this->color3 = color;
    this->color4 = color;
}
void RayComponent::setColorOver(unsigned char r, unsigned char g, unsigned char b, unsigned char a){
    this->color1 = (Color) {r,g,b,a};
    this->color2 = (Color) {r,g,b,a};
    this->color3 = (Color) {r,g,b,a};
    this->color4 = (Color) {r,g,b,a};
}
void RayComponent::setColorOver(Color color){
    this->color1 = color;
    this->color2 = color;
    this->color3 = color;
    this->color4 = color;
}