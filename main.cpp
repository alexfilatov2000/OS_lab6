
#include <iostream>
#include<stdio.h>
#include <thread>

using namespace std;

void new_func1();

void DrawCircle()
{
    unsigned long circle[1000][1000];
    for(int i = 0; i < 1000; i++)
    {
        //process of drawing
        this_thread::sleep_for(chrono::milliseconds(100));
        for (int j = 0; j < 1000; j++) {
            circle[i][j] = i * j;
        }
    }

}

void DrawSquare()
{
    cout<<"ddd";
    unsigned long int square[1000][1000];
    for(int i = 0; i < 1000; i++)
    {
        //process of drawing
        this_thread::sleep_for(chrono::milliseconds(1));
        for (int j = 0; j < 1000; j++) {
            square[i][j] = i + j;
        }
    }
}

int main()
{
    printf("\n Inside main()\n");
    int typeOfShape;
    cout<<"typeOfShape = ";
    cin>>typeOfShape;
    
    int i = 0;

    for(;i<0xffffff;i++);
    switch(typeOfShape){
    case 1:
        DrawSquare();
        break;
    case 2:
        DrawCircle();
        break;
    }

    return 0;
}
