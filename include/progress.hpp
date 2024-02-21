#include <widget.hpp>
#include <raylib.h>

#define PROGRESS_VERTICAL true
#define PROGRESS_HORIZONTAL false

class RayProgress: public RayWidget{
    public:
    Color colorProgress1 = WHITE;
    Color colorProgress2 = WHITE;
    Color colorProgress3 = WHITE;
    Color colorProgress4 = WHITE;
    bool direction = PROGRESS_HORIZONTAL;
    bool showPercent = false;
    float value = 0.0;

    void _draw() override;
    void _update() override;
    RayProgress(const char *name);

    void setColorProgress(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void setColorProgress(Color color);

    void (*onChange)(RayProgress *progress, float value);

    private:
    char valueText[8];
};