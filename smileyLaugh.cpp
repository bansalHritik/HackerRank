#include<iostream>
#include<stdlib.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd= DETECT,gm;//gd for graphics driver gm for graphics mode
    initgraph(&gd,&gm,"");//initialize graphics mode
    int midx=  getmaxx()/2; //taking maximum horizontal length
    int midy= getmaxy()/2;  //taking maximum  length
    //for happy face
    //hfcx stands for happy face center-x and hfcy means happy face center-y
    int hfcx = midx-150,hfcy = midy;
    circle(hfcx,hfcy,100);//for face
    circle(hfcx-35,hfcy-35,10);//left eye
    circle(hfcx+35,hfcy-35,10);//right eye
    circle(hfcx,hfcy+15,4);//nose
    arc(hfcx,hfcy+15,215,315,50);//mouth
    //for sad face
    //sfcx stands for sad face center-x and sfcy means sad face center-y
    int sfcx = midx+150,sfcy = midy;
    circle(sfcx,sfcy,100);//for face
    circle(sfcx-35,sfcy-35,10);//left eye
    circle(sfcx+35,sfcy-35,10);//right eye
    circle(sfcx,sfcy+15,4);//nose
    arc(sfcx,sfcy+100,45,135,50);//mouth
    getch();
    closegraph();
    return 0;
}
