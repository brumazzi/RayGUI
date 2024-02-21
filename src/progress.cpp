#include <progress.hpp>
#include <stdio.h>
#include <string.h>

RayProgress::RayProgress(const char *name): RayWidget(name){
    this->borderSize = 3;
    this->dimension.width = 128;
    this->dimension.height = 32;
    this->textColor = BLACK;
    this->setColor(WHITE);
    this->setColorFocus(WHITE);
    this->setColorClick(WHITE);
    this->setColorOver(WHITE);
    this->setColorProgress(BLUE);
}

void RayProgress::_update(){
    if(this->value < 0.0) this->value = 0.0;
    else if (this->value > 1.0) this->value = 1.0;

    sprintf(this->valueText, "%d %%", (int) (this->value*100.0));
}
void RayProgress::_draw(){
    Rectangle rect = this->virtualDimension;

    if(!this->direction){
        rect.width = this->virtualDimension.width * this->value;
    }else{
        rect.height = this->virtualDimension.height * this->value;
    }
    if(this->roundedSize > 0){
        DrawRectangleRounded(rect, this->roundedSize, this->roundedSegments, this->colorProgress1);
    }else{
        DrawRectangleGradientEx(rect, this->colorProgress1, this->colorProgress2, this->colorProgress3, this->colorProgress4);
    }

    if(!this->showPercent){
        int textLen = strlen(this->valueText);
        int centerX, centerY;
        centerX = (virtualDimension.width/2)-(MeasureText(this->valueText, this->fontSize)/2) + virtualDimension.x;
        centerY = (virtualDimension.height/2)-(this->fontSize/2) + virtualDimension.y;
        DrawText((const char*) this->valueText, centerX, centerY, this->fontSize, this->textColor);
    }
}

void RayProgress::setColorProgress(unsigned char r, unsigned char g, unsigned char b, unsigned char a){
    this->colorProgress1 = (Color) {r,g,b,a};
    this->colorProgress2 = (Color) {r,g,b,a};
    this->colorProgress3 = (Color) {r,g,b,a};
    this->colorProgress4 = (Color) {r,g,b,a};
}
void RayProgress::setColorProgress(Color color){
    this->colorProgress1 = color;
    this->colorProgress2 = color;
    this->colorProgress3 = color;
    this->colorProgress4 = color;
}