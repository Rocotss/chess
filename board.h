#ifndef BOARD_H
#define BOARD_H

#include "step.h"
#include "figure.h"

class Board
{
private:
    Figure* board_p[height][width];

    enum{pawn=1, elephant, horse, rook, queen, king};

public:
    Board();

    bool play(int last_h, int last_w, int h, int w);
};

#endif // BOARD_H
