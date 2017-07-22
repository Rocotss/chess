#include <iostream>
#include "play.h"

using namespace std;

int main(int argc, char *argv[])
{
    int id=1;
    int lw,lh,w,h;
    do
    {
        cout<<"Input stroke:"<<endl;
        cin>>lw>>lh>>w>>h;
        cout<<"\n";
        if(lw!=10)
        {
            if(play(id,lw,lh,w,h))
            {
                cout<<"Stroke complete!"<<endl;
            }
            else
            {
                cout<<"Stroke valid!"<<"\n"<<endl;
            }
        }
    }
    while(lw!=10);
    cout << "Game over!" << endl;
    return 0;
}
