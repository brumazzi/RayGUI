#include <label.hpp>

RayLabel::RayLabel(const char *name): RayWidget(name){
    this->setColor(BLANK);
    this->setColorClick(BLANK);
    this->setColorFocus(BLANK);
    this->setColorOver(BLANK);
}