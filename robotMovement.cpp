#include <iostream>
#include <stdio.h>

int main() {
	int dX, dY;
	dX=0;
	dY=0;
	
	int Xcoord, Ycoord;
	Xcoord=0;
	Ycoord=0;
 while(dX!=5){
 	
 	printf("\n Current position: %d, %d \n \n", Xcoord, Ycoord);
 	std::cin >> dX;
 	if(dX==8){
 		Xcoord++;
	 }
	 if(dX==2){
	 	Xcoord--;
	 }
	 if(dX==4){
	 	Ycoord--;
	 }
	if(dX==6){
		Ycoord++;
	}
 	
 	
 }
 return 0;
}
