#include <iostream>
#include "board.h"

using namespace std;

int main(int argc, char *argv[])
{
    Board board;
    int lh=0;
    do
    {
        cout<<"Input stroke:"<<endl;
        int lw,lh,w,h;
        cin>>lw>>lh>>w>>h;
        cout<<"\n";
        if(lh!=10)
        {
            if(board.play(lw,lh,w,h))
                {
                    cout<<"Stroke complete!"<<endl;
                }
                else
                {
                    cout<<"Stroke valid!"<<"\n"<<endl;
                }
        }
    }
    while(lh!=10);
    cout << "Game over!" << endl;
    return 0;
}
