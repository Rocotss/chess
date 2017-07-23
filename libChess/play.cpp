#include <map>
#include "board.h"
#include "play.h"

std::map<int, Board*> mapBoards;

bool play(int id, int last_w, int last_h, int w, int h)
{
    bool stroke=false;

    if(last_w<8 && last_h<8 && w<8 && h<8)
    {
        if(mapBoards.find(id)==mapBoards.end())
        {
            Board* b=new Board();
            std::pair<int, Board*> input;
            input.first=id;
            input.second=b;
            mapBoards.insert(input);
        }

        stroke=mapBoards.find(id)->second->play(last_w,last_h,w,h);
    }

    return stroke;
}
