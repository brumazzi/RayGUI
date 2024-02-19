#include <raylib.h>
#include <component.hpp>
#include <stdio.h>

void labelOverCallback(RayComponent *component, int x, int y){
    printf("%s, %d, %d\n", component->name, x, y);
}

void mouseEnterCallback(RayComponent *component){
    component->borderColor = BLACK;
    component->setColor(DARKGRAY);
}

void mouseExitCallback(RayComponent *component){
    component->borderColor = DARKGRAY;
    component->setColor(LIGHTGRAY);
}

void onKeyboardDown(RayComponent *c, int key){
    printf("%s: %d: onKeyboardDown\n", c->name, key);
}
void onKeyboardPressed(RayComponent *c, int key){
    printf("%s: %d: onKeyboardPressed\n", c->name, key);
}
void onKeyboardReleased(RayComponent *c, int key){
    printf("%s: %d: onKeyboardReleased\n", c->name, key);
}
void onKeyboardUp(RayComponent *c, int key){
    printf("%s: %d: onKeyboardUp\n", c->name, key);
}

int main(){
    const int screenWidth = 1366;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "");

    float rotation = 0.0f;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    RayComponent *component = new RayComponent("Component");
    component->dimension.width = 800;
    component->dimension.height = 400;
    component->dimension.x = 30;
    component->dimension.y = 30;
    component->roundedSize = 0.1;

    RayComponent *label = new RayComponent("Label");
    component->addChild(label);
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
    component->onKeyboardDown = onKeyboardDown;
    label->onKeyboardPressed = onKeyboardPressed;
    label->onKeyboardReleased = onKeyboardReleased;
    label->onKeyboardUp = onKeyboardUp;
    label->isKeyboardRequestFocus = true;

    component->text = "Hello world";

    // Main game loop
    while (!WindowShouldClose()){
        component->update();

        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            component->draw();
            if(label->isFocus){
                DrawText("Focus", 300,300, 22, BLACK);
            }else DrawText("No Focus", 300,300, 22, BLACK);
        }
        EndDrawing();
    }

    delete component;
    CloseWindow();
}