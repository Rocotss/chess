#ifndef STEP_H
#define STEP_H

const int height (8);
const int width (8);

enum{white,black};

struct Step
{
    int last_h,
        last_w,
        h,
        w;
};

#endif // STEP_H
