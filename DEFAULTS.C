#include "4NAROW2P.H"

void programInitialize(){
	turn_counter=0; arrowCounter=1; winCounter=0;
	oneColumn=1; twoColumn=1; threeColumn=1; fourColumn=1;
	fiveColumn=1; sixColumn=1; sevenColumn=1;
}

void showHeaderFooter(){
	int a, x, y;
	if(turn_counter==0){
		turn=RED_COLOR;
	}else if(turn_counter==1){
		turn=YELLOW_COLOR;
	}
	setcolor(YELLOW);
	outtextxy(1,1,"FOUR-IN-A-ROW");
	if(turn==RED_COLOR){
		setcolor(BLACK); //used like a backspace
		outtextxy(180,80,"TURN: YELLOW");
		setcolor(RED);
		outtextxy(180,80,"TURN: RED");
	}else if(turn==YELLOW_COLOR){
		setcolor(BLACK); //used like a backspace
		outtextxy(180,80,"TURN: RED");
		setcolor(YELLOW);
		outtextxy(180,80,"TURN: YELLOW");
	}
	gotoxy(29,6);
	setcolor(BLUE);
	for(a=1;a<=8;a++){
		line(140+(40*a),120,140+(40*a),lowerbound-20); //vertical
		line(180,(lowerbound+60)-(40*a),460,(lowerbound+60)-(40*a)); //horizontal
	}
	line(180,(lowerbound+60)-40,220,lowerbound-20);
	line(460,(lowerbound+60)-40,420,lowerbound-20);
	setcolor(BLUE);
	for(y=1;y<=6;y++){
		for(x=200;x<=440;x=x+40){
			circle(x,lowerbound-(y*40),20);
		}
	}
}
