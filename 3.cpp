//Created by : Yash Mahesh Khalkar
//3 a) Write C++ program to draw the following pattern. Use DDA line and Bresenham‘s circle
//drawing algorithm. Apply the concept of encapsulation.


#include<graphics.h>
using namespace std;
class Draw{
	int x1=200,x2=300,x3=100,y1=100,y2=300,y3=300,h,r,p,xc,yc;
	public:
		void display(){
			cal();
			line(x1,y1,x2,y2);
			line(x2,y2,x3,y3);
			line(x3,y3,x1,y1);
			circle(xc,yc,r);
			circle(xc,yc,p);
		}
		void cal(){
			h=300-100;
			p = (h*2/3);
			r = (h/3);
			xc=200;
			yc=100+p;
		}
		
};
int main(){
	Draw d;
	int gd =DETECT,gm;
	initgraph(&gd,&gm,NULL);
	d.display();
	delay(1000);
	closegraph();
    return 0;
}
