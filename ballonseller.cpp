#include<stdio.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initwindow(GetSystemMetrics(SM_CXSCREEN)-15,GetSystemMetrics(SM_CYSCREEN)-50);
    int facex = getmaxx()/2;
    int facey = getmaxy()/3;
    int centerx = getmaxx()/2;
    int centery = getmaxy()/2;
    int rad = 50;
    int chgt = 150;
    int thaiLen = 60;
    int leg_length = 70;
    //for face drawing
    circle(facex,facey,rad);
        //for eyes
        circle(facex-20,facey-20,4);
        circle(facex+20,facey-20,4);
        line(facex,facey-3,facex,facey+3);
        arc(facex,facey,240,300,25);
        line(facex-5,facey+rad+5,facex-5,facey+rad+chgt);
        line(facex+5,facey+rad+5,facex+5,facey+rad+chgt);
        //for chest(left)
        line(facex-80,facey+rad,facex+80,facey+rad);//upper chest line
        line(facex-60,facey+rad+chgt,facex+60,facey+rad+chgt);//lower chest line
        line(facex-80,facey+rad,facex-60,facey+rad+chgt);//left
        line(facex+80,facey+rad,facex+60,facey+rad+chgt);//right
        //for lower part
        line(facex-60,facey+rad+chgt,facex-70,facey+rad+chgt+thaiLen);//left thai
        line(facex-70,facey+rad+chgt+thaiLen,facex-65,facey+rad+chgt+thaiLen+leg_length);//left leg


        line(facex-40,facey+rad+chgt+thaiLen,facex-35,facey+rad+chgt+thaiLen+leg_length);//left leg


        line(facex-40,facey+rad+chgt+thaiLen,facex,facey+rad+chgt+thaiLen-20);

        line(facex+60,facey+rad+chgt,facex+70,facey+rad+chgt+thaiLen);//right thai

        line(facex+70,facey+rad+chgt+thaiLen,facex+65,facey+rad+chgt+thaiLen+leg_length);//right leg

        line(facex+40,facey+rad+chgt+thaiLen,facex+35,facey+rad+chgt+thaiLen+leg_length);//right leg


        line(facex+40,facey+rad+chgt+thaiLen,facex,facey+rad+chgt+thaiLen-20);

        fillellipse(facex-50,facey+rad+chgt+thaiLen+leg_length+3,25,15);

        fillellipse(facex+50,facey+rad+chgt+thaiLen+leg_length+3,25,15);

        line(facex-80,facey+rad,facex-120,facey+rad+70);

        line(facex-75,facey+rad+40,facex-120,facey+rad+110);

        line(facex-120,facey+rad+110,facex-170,facey+rad+30);

        line(facex-120,facey+rad+70,facex-170,facey+rad+10);

        fillellipse(facex-170,facey+rad+20,10,10);

        line(facex+80,facey+rad,facex+120,facey+rad+70);

        line(facex+75,facey+rad+40,facex+120,facey+rad+110);

        line(facex+120,facey+rad+110,facex+170,facey+rad+30);

        line(facex+120,facey+rad+70,facex+170,facey+rad+10);

        fillellipse(facex+170,facey+rad+20,10,10);

        line(facex+170,facey+rad+20,facex+130,facey+rad+20-130);

        line(facex+170,facey+rad+20,facex+170,facey+rad+20-150);

        line(facex+170,facey+rad+20,facex+220,facey+rad+20-190);
        line(facex+170,facey+rad+20,facex+310,facey+rad+20-170);
        setfillstyle(1,BLUE);
        fillellipse(facex+130,facey+rad+20-130-35,20,35);
        fillellipse(facex+170,facey+rad+20-150-35,20,35);
        fillellipse(facex+220,facey+rad+20-180-35,20,35);
        fillellipse(facex+310,facey+rad+20-170-35,20,35);
    getch();
    return 0 ;
}
