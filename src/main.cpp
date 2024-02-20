#include <raylib.h>
#include <widget.hpp>
#include <button.hpp>
#include <stdio.h>

void labelOverCallback(RayWidget *widget, int x, int y){
    printf("%s, %d, %d\n", widget->name, x, y);
}

void mouseEnterCallback(RayWidget *widget){
    widget->borderColor = BLACK;
    widget->setColor(DARKGRAY);
}

void mouseExitCallback(RayWidget *widget){
    widget->borderColor = DARKGRAY;
    widget->setColor(LIGHTGRAY);
}

void onKeyboardDown(RayWidget *c, int key){
    printf("%s: %d: onKeyboardDown\n", c->name, key);
}
void onKeyboardPressed(RayWidget *c, int key){
    printf("%s: %d: onKeyboardPressed\n", c->name, key);
}
void onKeyboardReleased(RayWidget *c, int key){
    printf("%s: %d: onKeyboardReleased\n", c->name, key);
}
void onKeyboardUp(RayWidget *c, int key){
    printf("%s: %d: onKeyboardUp\n", c->name, key);
}

int main(){
    const int screenWidth = 1366;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "");

    float rotation = 0.0f;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    RayWidget *widget = new RayWidget("Widget");
    widget->dimension.width = 800;
    widget->dimension.height = 400;
    widget->dimension.x = 30;
    widget->dimension.y = 30;
    widget->roundedSize = 0.1;

    RayButton *label = new RayButton("Label");
    widget->addChild(label);
    label->setColor(LIGHTGRAY);
    label->text = "My Label";
    label->dimension.width = 200;
    label->dimension.x = 25;
    label->dimension.y = 300;
    label->borderSize = 4;
    // label->onMouseOver = labelOverCallback;
    // label->onMouseEnter = mouseEnterCallback;
    // label->onMouseExit = mouseExitCallback;

    label->onKeyboardDown = onKeyboardDown;
    widget->onKeyboardDown = onKeyboardDown;
    label->onKeyboardPressed = onKeyboardPressed;
    label->onKeyboardReleased = onKeyboardReleased;
    label->onKeyboardUp = onKeyboardUp;
    label->isKeyboardRequestFocus = true;

    widget->text = "Hello world";

    // Main game loop
    while (!WindowShouldClose()){
        widget->update();

        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            widget->draw();
            if(label->isFocus){
                DrawText(widget->name, 300,300, 22, BLACK);
            }else DrawText(label->name, 300,300, 22, BLACK);
        }
        EndDrawing();
    }

    delete widget;
    CloseWindow();
}