#include "4NAROW2P.H"

void checkWin(){
	checkHorizontal();
}

void checkHorizontal(){
	int a;
	for(a=1;a<=42;a++){
		if(a%7<=4&&a%7!=0){
			if(wholeGrid[a]==wholeGrid[a+1]&&wholeGrid[a]==wholeGrid[a+2]&&wholeGrid[a]==wholeGrid[a+3]){
				char choice;
				gotoxy(30,2);
				if(turn==RED_COLOR){
					setcolor(RED);
					outtextxy(1,10,"RED WINS (Horizontal)");
				}else if(turn==YELLOW_COLOR){
					setcolor(YELLOW);
					outtextxy(1,10,"YELLOW WINS (Horizontal)");
				}
				winCounter=1;
				outtextxy(250,375,"PRESS N FOR NEW GAME");
				choice=getch();
				if(choice==110||choice==78){
					main();
				}else{
					exit(0);
				}
				break;
			}
		}
	}
	checkVertical();
}

void checkVertical(){
	int a;
	for(a=1;a<=21;a++){
		if(wholeGrid[a]==wholeGrid[a+7]&&wholeGrid[a]==wholeGrid[a+14]&&wholeGrid[a]==wholeGrid[a+21]){
			char choice;
			gotoxy(30,2);
			if(turn==RED_COLOR){
				setcolor(RED);
				outtextxy(1,10,"RED WINS (Vertical)");
			}else if(turn==YELLOW_COLOR){
				setcolor(YELLOW);
				outtextxy(1,10,"YELLOW WINS (Vertical)");
			}
			winCounter=1;
			outtextxy(250,375,"PRESS N FOR NEW GAME");
			choice=getch();
			if(choice==110||choice==78){
				main();
			}else{
				exit(0);
			}
			break;
		}
	}
	checkForwardDiagonal();
}

void checkForwardDiagonal(){ /**  /  */
	int a;
	for(a=25;a<=42;a++){
		if(a%7>=4||a%7==0){
			if(wholeGrid[a]==wholeGrid[a-8]&&wholeGrid[a]==wholeGrid[a-16]&&wholeGrid[a]==wholeGrid[a-24]){
				char choice;
				if(turn==RED_COLOR){
					setcolor(RED);
					outtextxy(1,10,"RED WINS (Forward Diagonal)");
				}else if(turn==YELLOW_COLOR){
					setcolor(YELLOW);
					outtextxy(1,10,"YELLOW WINS (Forward Diagonal)");
				}
				winCounter=1;
				outtextxy(250,375,"PRESS N FOR NEW GAME");
				choice=getch();
				if(choice==110||choice==78){
					main();
				}else{
					exit(0);
				}
				break;
			}
		}
	}
	checkBackwardDiagonal();
}

void checkBackwardDiagonal(){ /**  \  */
	int a;
	for(a=22;a<=42;a++){
		if(a%7<=4||a%7==0){
			if(wholeGrid[a]==wholeGrid[a-6]&&wholeGrid[a]==wholeGrid[a-12]&&wholeGrid[a]==wholeGrid[a-18]){
				char choice;
				if(turn==RED_COLOR){
					setcolor(RED);
					outtextxy(1,10,"RED WINS (Backward Diagonal)");
				}else if(turn==YELLOW_COLOR){
					setcolor(YELLOW);
					outtextxy(1,10,"YELLOW WINS (Backward Diagonal)");
				}
				winCounter=1;
				outtextxy(250,375,"PRESS N FOR NEW GAME");
				choice=getch();
				if(choice==110||choice==78){
					main();
				}else{
					exit(0);
				}
				break;
			}
		}
	}
}