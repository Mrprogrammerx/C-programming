/*
 project is based on game and name of the project is Snake in the block
 by Mr Programmer X */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>

//Defination section         //hello guys this is my game //show lets start it :D
#define keyup 72
#define keydown 80
#define keyleft 75
#define keyright 77
#define keyesc 27

//Global Decleration
char username[200];
int score=0;
//fucntions
int firstscr();
int gamecode();
int aboutus();
//int enemy();
int display();
int menu();
int header();
int htp();
int entername();
int gameover();
int highscore();
//end of functions

	void main(){          //main function;
		textcolor(1);
		firstscr();
		menu();
		gamecode();
			      //end of main function;
	}

	int  gamecode(){       //gamecode function;


       // rewind(fp);
	int gd=DETECT,gm;
	int x=8,y=21,ch,i;
	int diex1=20,diey1=18,diex2=59,diey2=17,diex3=35,diey3=20,diex4=45,diey4=18;
	int diex5=51,diey5=19,diex6=79,diey6=21,diex7=20,diey7
	=22,diex8=30,diey8=23,diex9=32,diey9=25,diex10=27,diey10=19,diex11=68,diey11=18,diex12=70,diey12=25;
      //	int score=0;

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");


while(1){

	FILE *fp1;
   //	fp=fopen("score.dat","a+");
	fp1=fopen("highscore.dat","a+");
	if(fp1==NULL){
		printf("file doesnt exist");
	}


	  clrscr();

	  setbkcolor(1);                      //coloring change :D
       /*	  if(score<=100)
		setbkcolor(1);
	  if(score<=200 && score>=100)
		setbkcolor(3);
	  if(score<=400 && score>=200)
		setbkcolor(4);
	  if(score<=600 && score>=400)
		setbkcolor(5);
	  if(score<=800 && score>=600)
		setbkcolor(6);
	  if(score<=1000 && score>=800)
		setbkcolor(7);
	  if(score<=1200 && score>=1000)
		setbkcolor(8);
	  if(score<=1400 && score>=1200)
		setbkcolor(9);
	  if(score<=1600 && score>=1400)
		setbkcolor(10);
	  if(score<=1800 && score>=1600)
		setbkcolor(11);
	  if(score>2000)
		setbkcolor(0); */                      //end of coloring change
	  display();
	  header();    		      //calling header();
       //	  htp();                      //calling htp();
	  gotoxy(57,4);
	  printf("score= %d",score);                   //scoring board;
	  gotoxy(x,y);
	  printf("");               //player object;
	  rectangle(0,399,637,252);
	 // enemy();
	  //block

	 // rectangle(600,390,620,370);
	 // rectangle(520,360,540,340);

	//  gotoxy(40,20);
	//  printf("лл");
				   //start of box  || enemy
	gotoxy(diex1,diey1);
		printf("лл");
	gotoxy(diex2,diey2);
		printf("лл");
	gotoxy(diex3,diey3);
		printf("лл");
	gotoxy(diex4,diey4);
		printf("лл");
	gotoxy(diex5,diey5);
		printf("лл");
	gotoxy(diex6,diey6);
		printf("лл");
	gotoxy(diex7,diey7);
		printf("лл");
	gotoxy(diex8,diey8);
		printf("лл");
	gotoxy(diex9,diey9);
		printf("лл");
	gotoxy(diex10,diey10);
		printf("лл");
	gotoxy(diex11,diey11);
		printf("лл");
	gotoxy(diex12,diey12);
		printf("лл");          //end of box || enemy;


       //	gotoxy(20,20);
       //	printf("лл");
     // xminus++;

       /*	  if(xminus==75){
		xminus=2;
		score++;
	  } */
	      if(diex1<=3){          //setting position of box if they come
		score++;             //to value '0' in x-axis
		diex1=80;
	      }
	      if(diex2<=3){
		score++;
		diex2=80;
	      }
	      if(diex3<=3){
		score++;
		diex3=80;
	      }
	      if(diex4<=3){
		score++;
		diex4=80;
	      }
	      if(diex5<=3){
		score++;
		diex5=80;
	      }
	      if(diex6<=3){
		score++;
		diex6=80;
	      }
	      if(diex7<=3){
		score++;
		diex7=80;
	      }
	      if(diex8<=3){
		score++;
		diex8=80;
	      }
	      if(diex9<=3){
		score++;
		diex9=80;
	      }
	      if(diex10<=3){
		score++;
		diex10=80;
	      }
	      if(diex11<=3){
		score++;
		diex11=80;
	      }
	      if(diex12<=3){
		score++;
		diex12=80;
		}
		      //ending of setting values;



	while(!kbhit()){        //if continues looping if keystoke
		  display();    //while player dont press any key from keyboard
		  header();     //this condition runs for infinity;
		  gotoxy(57,4);
	  printf("score= %d",score);
	  gotoxy(x,y);
	  printf("");                //code is on the desp. link//lets run
	  rectangle(0,399,637,252);       //thhamls for watching
	gotoxy(diex1,diey1);            //isn't found;
		printf("лл");
	gotoxy(diex2,diey2);
		printf("лл");
	gotoxy(diex3,diey3);
		printf("лл");
	gotoxy(diex4,diey4);
		printf("лл");
	gotoxy(diex5,diey5);
		printf("лл");
	gotoxy(diex6,diey6);
		printf("лл");
	gotoxy(diex7,diey7);
		printf("лл");
	gotoxy(diex8,diey8);
		printf("лл");
	gotoxy(diex9,diey9);
		printf("лл");
	gotoxy(diex10,diey10);
		printf("лл");
	gotoxy(diex11,diey11);
		printf("лл");
	gotoxy(diex12,diey12);
		printf("лл");
		diex1--;                 //decreasing the value of x-axis
		diex2--;                 //which is (diex1 to diex11).
		diex3--;
		diex4--;
		diex5--;
		diex6--;
		diex7--;
		diex8--;
		diex9--;
		diex10--;
		diex11--;
		diex12--;

	 if(diex1<=3){                    //adding the score
		score++;                  //when the box || enemy values goes to 0;
		diex1=80;
	      }
	      if(diex2<=3){
		score++;
		diex2=80;
	      }
	      if(diex3<=3){
		score++;
		diex3=80;
	      }
	      if(diex4<=3){
		score++;
		diex4=80;
	      }
	      if(diex5<=3){
		score++;
		diex5=80;
	      }
	      if(diex6<=3){
		score++;
		diex6=80;
	      }
	      if(diex7<=3){
		score++;
		diex7=80;
	      }
	      if(diex8<=3){
		score++;
		diex8=80;
	      }
	      if(diex9<=3){
		score++;
		diex9=80;
	      }
	      if(diex10<=3){
		score++;
		diex10=80;
	      }
	      if(diex11<=3){
		score++;
		diex11=80;
	      }
	      if(diex12<=3){
		score++;
		diex12=80;
		}
		    delay(100);

//main condition of code when player object and box(enemy) meet each other then
//game'll be over;

if(x==diex1-3 && y==diey1 || x==diex2-3 && y==diey2 ||x==diex3-3 && y==diey3 ||x==diex4-3 && y==diey4|| x==diex5-3 && y==diey5 || x==diex6-3 && y==diey6 ||x==diex7-3 && y==diey7 ||x==diex8-3 && y==diey8 || x==diex9-3 && y==diey9 || x==diex10-3 && y==diey10 ||x==diex11-3 && y==diey11 ||x==diex12-3 &&y==diey12 || x==diex1-2 && y==diey1 || x==diex2-2 && y==diey2 ||x==diex3-2 && y==diey3 ||x==diex4-2 && y==diey4|| x==diex5-2 && y==diey5 || x==diex6-2 && y==diey6 ||x==diex7-2 && y==diey7 ||x==diex8-2 && y==diey8 || x==diex9-2 && y==diey9 || x==diex10-2 && y==diey10 ||x==diex11-2 && y==diey11 ||x==diex12-2 &&y==diey12 || x==diex1-1 && y==diey1 || x==diex2-1 && y==diey2 ||x==diex3-1 && y==diey3 ||x==diex4-1 && y==diey4|| x==diex5-1 && y==diey5 || x==diex6-1 && y==diey6 ||x==diex7-1 && y==diey7 ||x==diex8-1 && y==diey8 || x==diex9-1 && y==diey9 || x==diex10-1 && y==diey10 ||x==diex11-1 && y==diey11 ||x==diex12-1 &&y==diey12 ){
   //	fprintf(fp,"%d\n",score);
	fprintf(fp1,"%d\n",score);
	sound();
	delay(100);
	nosound();
	gameover();

}
	clrscr();


	      }      //end of  !kbhit

	  ch=getch();

				 //movement of object;

	if(ch== keyup){      //up
y--;
if(y<17){
y=17;
}
}

	else if(ch== keydown){    //down
y++;
if(y>25){
y=25;
}
}

	else if(ch== keyleft){     //left
x--;
if(x<10){
x=5;
}
}

	else if(ch== keyright){   //right
x++;
if(x>80-3){
x=1;
}
}
	else if(ch== 'w'){     //right
y--;
if(y<17){
y=17;
}
}

	else if(ch== 's'){  //down
y++;
if(y>25){
y=25;
}
}

	else if(ch== 'a'){ //left
x--;
if(x<=3){
x=5;
}
}

	else if(ch== 'd'){ //right
x++;
if(x>80-3){
x=1;
}
}
	else if(ch== keyesc){ //exit the game
	exit(1);

}
    /*	if(x==20-7 && y==20){ //   '-7' is written because object is made with 7character.
		gameover();        // 1st try for box(enemy);
	}*/


if(x==diex1-7 && y==diey1 || x==diex2-7 && y==diey2 ||x==diex3-7 && y==diey3 ||x==diex4-7 && y==diey4|| x==diex5-7 && y==diey5 || x==diex6-7 && y==diey6 ||x==diex7-7 && y==diey7 ||x==diex8-7 && y==diey8 || x==diex9-7 && y==diey9 || x==diex10-7 && y==diey10 ||x==diex11-7 && y==diey11 ||x==diex12-7 && y==diey12  || x==diex1-2 && y==diey1 || x==diex2-2 && y==diey2 ||x==diex3-2 && y==diey3 ||x==diex4-2 && y==diey4|| x==diex5-2 && y==diey5 || x==diex6-2 && y==diey6 ||x==diex7-2 && y==diey7 ||x==diex8-2 && y==diey8 || x==diex9-2 && y==diey9 || x==diex10-2 && y==diey10 ||x==diex11-2 && y==diey11 ||x==diex12-2 &&y==diey12 || x==diex1-1 && y==diey1 || x==diex2-1 && y==diey2 ||x==diex3-1 && y==diey3 ||x==diex4-1 && y==diey4|| x==diex5-1 && y==diey5 || x==diex6-1 && y==diey6 ||x==diex7-1 && y==diey7 ||x==diex8-1 && y==diey8 || x==diex9-1 && y==diey9 || x==diex10-1 && y==diey10 ||x==diex11-1 && y==diey11 ||x==diex12-1 &&y==diey12 ){
       //	fprintf(fp,"%d\n",score);
	fprintf(fp1,"%d\n",score);
	sound();
	delay(100);
	nosound();
	gameover();

}
//fclose(fp);
fclose(fp1);

	diex1--;
	diex2--;
	diex3--;
	diex4--;
	diex5--;
	diex6--;
	diex7--;
	diex8--;
	diex9--;
	diex10--;
	diex11--;
	diex12--;
   // delay(400);

} //end while
//closegraph();
//return 0;
} //end of gamecode fuction

//loading screen

	int firstscr(){
		int gd=DETECT,gm;
		int x=0,i;
		char ch='M';
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	setbkcolor(1);

	settextstyle(1,HORIZ_DIR,3);
	outtextxy(200,140,"Welcome To Game");
      //	settextstyle(3,VERT_DIR,3);
      //	outtextxy(200,400,"BCA Project Work By");
      //	outtextxy(240,425,"Mr programmer X");

	gotoxy(35,12);
	printf("loading...");

	for(i=1;i<=15;i++){
		gotoxy(25+x,15);
		delay(500);
		if(i==2) ch='r';
		if(i==3) ch=' ';
		if(i==4) ch='P';
		if(i==5) ch='r';
		if(i==6) ch='o';
		if(i==7) ch='g';
		if(i==8) ch='r';
		if(i==9) ch='a';
		if(i==10) ch='m';
		if(i==11) ch='m';
		if(i==12) ch='e';
		if(i==13) ch='r';
		if(i==14) ch=' ';
		if(i==15) ch='X';
	printf("%c",ch);
	x=x+2;


     //	gotoxy(52,13);
     //	printf("%d0%",i);
}
	gotoxy(35,17);
		printf("Completed");
	delay(200);
		printf("!");
	delay(200);
		printf("!");
	delay(500);
		printf("!");

	cleardevice();
	clrscr();
return 0;

}  //close of loading screen function

	int entername(){ //file handling- username inputing and saving in .dat file
		FILE *fp1;
	       //	fp=fopen("game.dat","a+");
		fp1=fopen("highscore.dat","a+");
		if(fp1==NULL){
		printf("cant open the file");
	}
	gotoxy(25,13);
		printf("enter your name-  ");
		scanf("%s",username);

  //	fprintf(fp,"%s\n",username);
	fprintf(fp1,"%s ",username);

    //	fclose(fp);
	fclose(fp1);
	clrscr();
	return 0;
}//close of file handling

	int menu(){   //main function
		int cho;

	rectangle(200,100,550,400);

	gotoxy(35,9);
		printf("CHOOSE IN THE MENU:-");
	gotoxy(35,11);
		printf("1. Play the game\n");
	gotoxy(35,12);
		printf("2. highscore\n");
	gotoxy(35,13);
		printf("3. how to play\n");
	gotoxy(35,14);
		printf("4. About us\n");
	gotoxy(35,15);
		printf("5. exit");
	gotoxy(35,18);
		printf("choose- ");

	scanf("%d",&cho);
	clrscr();
switch(cho){    //switch statement started

	case 1:
		entername();
		clrscr();
		gamecode();
	break;

	case 2:
		highscore();
	break;

	case 3:
		clrscr();
		htp();
		getch();
		clrscr();
	return menu();
       //	break;

	case 4:
		aboutus();
	break;

	case 5:
		exit(1);

       default:
		clrscr();
		gotoxy(30,15);
			printf("enter the number only from 1-5");
		gotoxy(30,17);
			printf(" press any key to continue");
		getch();
		clrscr();
	       //	return menu();
	exit(1);

}
return 0;
}   //end of switch
	int aboutus(){
		clrscr();

		gotoxy(25,10);
			printf("-> .............................");
		gotoxy(25,12);
			printf("-> This game project for leraning  ");
		gotoxy(25,14);
			printf("-> based on how to build game  ");
		gotoxy(37,16);
			 printf("Mr programmer X");

		getch();
		clrscr();
		menu();
	return 0;

	}

	int header(){       //header means name of user in play screen

		gotoxy(57,3);
			printf("player name- %s", username);

	return 0;
	}   //end of header

	int htp(){   //how to play screen
		gotoxy(12,4);
			printf("-> Just save your head from box");
		gotoxy(12,6);
			printf("-> Press 'w' or 'up arrow key' to move up\n");
		gotoxy(12,8);
			printf("-> Press 's' or 'down arrow key' to move down\n");
		gotoxy(12,10);
			printf("-> Press 'a' or 'left arrow key' to move left\n");
		gotoxy(12,12);
			printf("-> Press 'd' or 'right arrow key' to move right\n");
		gotoxy(12,14);
			printf("-> Press 'esc' for exit the game");
	return 0;

	}  //end of htp

	int gameover(){

		setbkcolor(1);
		cleardevice();

		settextstyle(3,HORIZ_DIR,3);
		outtextxy(170,200,"GAME OVER DUDE");

		delay(1000);
		clrscr();

		score=0;

		menu();

	return 0;

	}

	int highscore(){
		char ch[1000];
		int scr;
		FILE *fp;

		fp=fopen("highscore.dat","r");


		if(fp==NULL){
			printf("not found");
		}

		gotoxy(7,2);
			printf("highscore\n");
		gotoxy(1,5);
		printf("player name");
		gotoxy(20,5);
		printf("score");
		printf("\n");
		while( fscanf(fp,"%s%d",ch,&scr)!=EOF)

		printf("%s\t\t%d\n",ch,scr);


		getch();
		fclose(fp);
		clrscr();
		menu();
	return 0;
	}


      int display(){

		settextstyle(0,HORIZ_DIR,3);
		outtextxy(150,100,"I");

      //	textcolor(5);
	 gotoxy(28,2);
		printf("    лллл  лллл");
	 gotoxy(28,3);
		printf("  лл    лл    лл ");
	 gotoxy(28,4);
		printf("  лл          лл ");
	 gotoxy(28,5);
		printf("  лл          лл ");
	 gotoxy(28,6);
		printf("   лл        лл  ");
	 gotoxy(28,7);
		printf("    лл      лл   ");
	 gotoxy(28,8);
		printf("     лл    лл    ");
	 gotoxy(28,9);
		printf("      лл  лл     ");
	 gotoxy(28,10);
		printf("        лл       ");

	outtextxy(80,180,"C Programming");


      return 0;
      }

//int enemy(){
//while(1){


//level 1
/*void lvl1(){
	int i;
for(i=0;i<100;i++){
	//road
	line(0,446,getmaxx(),436);
	//stone
	rectangle(getmaxx()-i,436,650-i,431);
}*/