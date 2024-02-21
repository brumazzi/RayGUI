#include <raylib.h>
#include <widget.hpp>
#include <button.hpp>
#include <label.hpp>
#include <progress.hpp>
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
void onMousePressedInc(RayWidget *c, int key, int x, int y){
    RayProgress *p = (RayProgress*) c->parent->children["progress"];
    p->value += 0.1;
}
void onMousePressedDec(RayWidget *c, int key, int x, int y){
    RayProgress *p = (RayProgress*) c->parent->children["progress"];
    p->value -= 0.1;
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
    widget->text = "Hello world";

    RayButton *button = new RayButton("INC");
    widget->addChild(button);
    button->setColor(LIGHTGRAY);
    button->text = "INC";
    button->dimension.width = 200;
    button->dimension.x = 230;
    button->dimension.y = 300;
    button->borderSize = 4;

    RayButton *button2 = new RayButton("DEC");
    widget->addChild(button2);
    button2->setColor(LIGHTGRAY);
    button2->text = "DEC";
    button2->dimension.width = 200;
    button2->dimension.x = 25;
    button2->dimension.y = 300;
    button2->borderSize = 4;

    RayProgress *progress = new RayProgress("progress");
    widget->addChild(progress);
    progress->value = 0.4;

    // button->onMouseOver = buttonOverCallback;
    // button->onMouseEnter = mouseEnterCallback;
    // button->onMouseExit = mouseExitCallback;
    // button->onKeyboardDown = onKeyboardDown;
    // widget->onKeyboardDown = onKeyboardDown;
    button->onMousePressed = onMousePressedInc;
    button2->onMousePressed = onMousePressedDec;
    // button->onKeyboardReleased = onKeyboardReleased;
    // button->onKeyboardUp = onKeyboardUp;
    // button->isKeyboardRequestFocus = true;


    // Main game loop
    while (!WindowShouldClose()){
        widget->update();

        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            widget->draw();
        }
        EndDrawing();
    }

    delete widget;
    delete button;
    delete button2;
    delete progress;
    CloseWindow();
}