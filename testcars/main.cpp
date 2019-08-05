#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
	system("cls");
	initwindow(800,500);
	int i = 0;
	for(i=0;i<500;i=i+10){
		cleardevice();	    
	    setcolor(WHITE);
		//=======Load==============
		line(0,391,790,391);//load name	
		//=======wheel=============
		circle(110+i,374,17);//back		
		circle(240+i,374,17);//front
		
		delay(100);
		cleardevice();
	}		
	getch();
	return 0;
}
