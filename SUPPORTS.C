#include "4NAROW2P.H"

void move(){
	if(arrowCounter==1){
		if(oneColumn<=6){
			setcolor(turn);
			circle(200,lowerbound-(oneColumn*40),20);
			setfillstyle(INTERLEAVE_FILL,turn);
			floodfill(200,lowerbound-(oneColumn*40),turn);
			wholeGrid[(oneColumn-1)*7+1]=turn;
			checkWin();
			oneColumn++;
			changeTurn();
		}
	}else if(arrowCounter==2){
		if(twoColumn<=6){
			setcolor(turn);
			circle(240,lowerbound-(twoColumn*40),20);
			setfillstyle(INTERLEAVE_FILL,turn);
			floodfill(240,lowerbound-(twoColumn*40),turn);
			wholeGrid[(twoColumn-1)*7+2]=turn;
			checkWin();
			twoColumn++;
			changeTurn();
		}
	}else if(arrowCounter==3){
		if(threeColumn<=6){
			setcolor(turn);
			circle(280,lowerbound-(threeColumn*40),20);
			setfillstyle(INTERLEAVE_FILL,turn);
			floodfill(280,lowerbound-(threeColumn*40),turn);
			wholeGrid[(threeColumn-1)*7+3]=turn;
			checkWin();
			threeColumn++;
			changeTurn();
		}
	}else if(arrowCounter==4){
		if(fourColumn<=6){
			setcolor(turn);
			circle(320,lowerbound-(fourColumn*40),20);
			setfillstyle(INTERLEAVE_FILL,turn);
			floodfill(320,lowerbound-(fourColumn*40),turn);
			wholeGrid[(fourColumn-1)*7+4]=turn;
			checkWin();
			fourColumn++;
			changeTurn();
		}
	}else if(arrowCounter==5){
		if(fiveColumn<=6){
			setcolor(turn);
			circle(360,lowerbound-(fiveColumn*40),20);
			setfillstyle(INTERLEAVE_FILL,turn);
			floodfill(360,lowerbound-(fiveColumn*40),turn);
			wholeGrid[(fiveColumn-1)*7+5]=turn;
			checkWin();
			fiveColumn++;
			changeTurn();
		}
	}else if(arrowCounter==6){
		if(sixColumn<=6){
			setcolor(turn);
			circle(400,lowerbound-(sixColumn*40),20);
			setfillstyle(INTERLEAVE_FILL,turn);
			floodfill(400,lowerbound-(sixColumn*40),turn);
			wholeGrid[(sixColumn-1)*7+6]=turn;
			checkWin();
			sixColumn++;
			changeTurn();
		}
	}else if(arrowCounter==7){
		if(sevenColumn<=6){
			setcolor(turn);
			circle(440,lowerbound-(sevenColumn*40),20);
			setfillstyle(INTERLEAVE_FILL,turn);
			floodfill(440,lowerbound-(sevenColumn*40),turn);
			wholeGrid[(sevenColumn-1)*7+7]=turn;
			checkWin();
			sevenColumn++;
			changeTurn();
		}
	}
}

void changeTurn(){
	if(turn_counter==0){
		turn_counter=1;
	}else if(turn_counter==1){
		turn_counter=0;
	}
	showHeaderFooter();
	gotoxy(1,1);
}