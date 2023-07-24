//......... WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ...............//
//______-____ C++ PROGRAM TO CREATE TABLE FAN ANIMATION ________-_________//

#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
void main()
{

int gd=DETECT,gm,i,m;
initgraph(&gd,&gm,"C:\\TC\\BGI");

setbkcolor(15);
setcolor(4);
rectangle(10,10,630,470);
setcolor(9);
rectangle(5,5,635,475);

while(kbhit()==0)
{
for(i=80; i>=0;i-=20)
{
setcolor(8);
circle(320,240,65);
circle(320,240,67);

setfillstyle(SOLID_FILL,13);
bar(310,307,330,360);

setfillstyle(SOLID_FILL,6);
bar(290,360,350,375);

setcolor(2);
setfillstyle(SOLID_FILL,10);
pieslice(320,240,i,i+40,60);
pieslice(320,240,i+120,i+160,60);
pieslice(320,240,i+240,i+280,60);

setcolor(4);
circle(320,240,10);
setfillstyle(SOLID_FILL,12);
floodfill(320,240,4);

delay(100);

setcolor(0);
setfillstyle(SOLID_FILL,0);
pieslice(320,240,i,i+40,60);
pieslice(320,240,i+120,i+160,60);
pieslice(320,240,i+240,i+280,60);

setcolor(4);
circle(320,240,10);
setfillstyle(SOLID_FILL,12);
floodfill(320,240,4);

setcolor(4);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(150,400,"CREATED BY ROHIT TECH STUDY");
}
}
closegraph();
}

//**********---- I HOPE YOU LIKE THIS PROGRAMMING  ----------************//

/*---------- LIKE _________ SHARE ________ SUBSCRIBE ------------------*/



