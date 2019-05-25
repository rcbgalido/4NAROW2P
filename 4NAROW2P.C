/**7x6*/
#include "4NAROW2P.H"

char wholeGrid[45];
int turn, turn_counter, arrowCounter, winCounter;
int oneColumn, twoColumn, threeColumn, fourColumn;
int fiveColumn, sixColumn, sevenColumn;
int GraphDriver, GraphMode;
const char PathToDriver[20] = "C:\\TURBOC3\\BGI";

void main(){
	int a, arrowLocationX;
	clrscr();
	programInitialize();
	GraphDriver=DETECT;
	initgraph(&GraphDriver,&GraphMode,PathToDriver);
	for(a=1;a<=42;a++){
		wholeGrid[a]=a;
	}
	arrowLocationX=1;
	showHeaderFooter();
	setcolor(BLUE);
	circle(160+(arrowLocationX*40),100,5);
	setfillstyle(HATCH_FILL,BLUE);
	floodfill(160+(arrowLocationX*40),100,BLUE);
	while(1){
		if(kbhit()){
			char direction=getch();
			if(direction==27){ //esc key
				exit(0);
			}else if(direction==0x4d){ //right key
				if(winCounter==0){
					if(arrowLocationX+1!=8){
						setcolor(BLACK);
						circle(160+(arrowLocationX*40),100,5);
						setfillstyle(HATCH_FILL,BLACK);
						floodfill(160+(arrowLocationX*40),100,BLACK);
						++arrowLocationX;
						setcolor(BLUE);
						circle(160+(arrowLocationX*40),100,5);
						setfillstyle(HATCH_FILL,BLUE);
						floodfill(160+(arrowLocationX*40),100,BLUE);
						arrowCounter++;
					}
				}
			}else if(direction==0x50){ //down key
				if(winCounter==0){
					move();
					showHeaderFooter();
					gotoxy(1,1);
					if(checkTie()==1){
						char choice;
						setcolor(YELLOW);
						outtextxy(1,10,"PLAYER-PLAYER TIE");
						outtextxy(250,375,"TYPE N FOR NEW GAME");
						choice=getch();
						if(choice==110||choice==78){
							main();
						}else{
							exit(0);
						}
					}
				}
			}else if(direction==0x4b){ //left key
				if(winCounter==0){
					if(arrowLocationX-1!=0){
						setcolor(BLACK);
						circle(160+(arrowLocationX*40),100,5);
						setfillstyle(HATCH_FILL,BLACK);
						floodfill(160+(arrowLocationX*40),100,BLACK);
						--arrowLocationX;
						setcolor(BLUE);
						circle(160+(arrowLocationX*40),100,5);
						setfillstyle(HATCH_FILL,BLUE);
						floodfill(160+(arrowLocationX*40),100,BLUE);
						arrowCounter--;
					}
				}
			}
		}
	}
	getch();
	restorecrtmode();
}

