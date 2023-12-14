//Created by : Yash Mahesh Khalkar
//6 c) Write OpenGL program to draw Sun Rise and Sunset.



#include<iostream>
#include<graphics.h>
using namespace std;
int main(){
	int gd =DETECT,gm,dx=0/130,dy=130/130,x=250,y=70,l=130,a=200;
	initgraph(&gd,&gm,NULL);
	for(int i =0;i<l;i++){
		line(50,50,450,50);
		line(450,50,450,400);
		line(450,400,50,400);
		line(50,400,50,50);
		line(50,250,450,250);
		line(50,250,150,150);
		line(150,150,250,250);
		line(250,250,350,150);
		line(350,150,450,250);
		circle(x,a,20);
		delay(10);
		cleardevice();
		x+=dx;
		a-=dy;
	}
	for(int i =0;i<l;i++){
		line(50,50,450,50);
		line(450,50,450,400);
		line(450,400,50,400);
		line(50,400,50,50);
		line(50,250,450,250);
		line(50,250,150,150);
		line(150,150,250,250);
		line(250,250,350,150);
		line(350,150,450,250);
		circle(x,y,20);
		delay(10);
		cleardevice();
		x+=dx;
		y+=dy;
	}
    delay(2000);
    closegraph();
	return 0;
}
