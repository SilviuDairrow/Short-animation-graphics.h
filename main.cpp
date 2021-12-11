#include <graphics.h>
#include <bits/stdc++.h>
#include <tgmath.h>
#include <math.h>
using namespace std;

int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int x=45;
    int maxX = getmaxx();
    int maxY = getmaxy();
    cout << maxX << " " << maxY << "\n";
    for(int i=0; i<=maxX; ++i)
    {
    ///Drum
    setcolor(15);
    line(0, 370, maxX, 370);
    ///arc(320,370,0,180,320);


    ///Soare obosit
    setcolor(YELLOW);
    circle(i/2+i/3,80,45);///sin((maxY-i-125)/23)*45

    ///Rex gaming
    setcolor(WHITE);
    bar(525,250,535,370);
    rectangle(480,200,580,250);
    outtextxy(490,220, "REX GAMING");

    ///Bussy
    setcolor(BLUE);
    bar(100+i,300,200+i,350);
    setcolor(GREEN);
    circle(120+i,360,10);
    circle(180+i,360,10);

    ///Avion
    setcolor(i%16+1);

    //fata
    line(450-i*3+1,100,500-i*3+1,100);
    line(450-i*3+1,100,440-i*3+1,105);
    line(450-i*3+1,110,500-i*3+1,110);
    line(450-i*3+1,110,440-i*3+1,105);

    //aripasus
    line(500-i*3+1,100,520-i*3+1,30);
    line(520-i*3+1,30,520-i*3+1,100);

    //aripajos
    line(500-i*3+1,110,520-i*3+1,180);
    line(520-i*3+1,180,520-i*3+1,110);

    //mijloc
    line(520-i*3+1,100,570-i*3+1,100);
    line(520-i*3+1,110,570-i*3+1,110);

    //aripasus2
    line(570-i*3+1,100,580-i*3+1,70);
    line(580-i*3+1,70,580-i*3+1,100);

    //aripajos2
    line(570-i*3+1,110,580-i*3+1,140);
    line(580-i*3+1,140,580-i*3+1,110);

    //coada
    line(580-i*3+1,100,585-i*3+1,100);
    line(580-i*3+1,110,585-i*3+1,110);
    line(585-i*3+1,110,585-i*3+1,100);

    ///Animation
    if(i==0)
    {
        setcolor(WHITE);
        outtextxy(200,400,"Apasa orice buton pentru a continua.");
        getch();
    }

    delay(23);
    cleardevice();
    }

    getch();
    closegraph();
}
