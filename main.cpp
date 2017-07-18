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
        int lh,lw,h,w;
        cin>>lh>>lw>>h>>w;
        cout<<"\n";
        if(lh!=10)
        {
            if(board.play(lh,lw,h,w))
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
