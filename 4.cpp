//Created by : Yash Mahesh Khalkar
//4 a) Write C++ program to draw 2-D object and perform following basic transformations, Scaling
//b) Translation c) Rotation. Apply the concept of operator overloading.


#include<bits/stdc++.h> 
#include<graphics.h> 

using namespace std; 

void translatePoint ( int P[], int T[]) 
{ 
	int gd = DETECT, gm; 
	initgraph (&gd, &gm, NULL); 
	
	cout<<"Original Coordinates :"<<P[0]<<","<<P[1]; 

	putpixel (P[0], P[1], 1); 
	delay(1000);

	P[0] = P[0] + T[0]; 
	P[1] = P[1] + T[1]; 

	cout<<"\nTranslated Coordinates :"<< P[0]<<","<< P[1]; 
	
	putpixel (P[0], P[1], 3); 
	delay(1000);
	closegraph(); 
} 
void scaling(int O[],int N[]){
	int gd = DETECT, gm; 
	initgraph (&gd, &gm, NULL);
	line(O[0],O[1],O[2],O[3]);
	delay(1000);
	O[2]+=N[0];
	O[3]+=N[1];
	line(O[0],O[1],O[2],O[3]);
	delay(1000);
	closegraph(); 
}
void rotation(int R1[],int R2[]){
	int gd = DETECT, gm; 
	initgraph (&gd, &gm, NULL);
	line(R1[0],R1[1],R1[2],R1[3]);
	delay(1000);
	R1[0]+=R2[0];
	R1[1]+=R2[1];
	R1[2]+=R2[2];
	R1[3]+=R2[3];
	line(R1[0],R1[1],R1[2],R1[3]);
	delay(1000);
	closegraph(); 
}
int main() 
{ 
	int P[2] = {5, 8}; 
	int T[] = {2, 1};
	int O[4]= {50,50,100,100};
	int N[]= {50,50};
	int R1[4]={300,200,100,200};
	int R2[]= {-100,-100,100,100};
	translatePoint (P, T); 
	scaling(O,N);
	rotation(R1,R2);
	return 0; 
}
