#ifndef STEP_H
#define STEP_H

const int width (8); // переместить в board
const int height (8); // переместить в board

enum{white,black};

struct Step
{
    int last_w,
        last_h,
        w,
        h;
};

#endif // STEP_H
