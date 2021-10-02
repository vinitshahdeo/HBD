//using c++ Graphic Wish Happy Birthday

#include <conio.h>
#include <iostream.h>
#include <dos.h>
#include <stdlib.h>
#include <graphics.h>

void cake();
void Entry();
void Entry2();
void Entry3();
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

      // Entry();
      // Entry2();
      // Entry3();
       cake();

	getch();
	closegraph();
}


void cake()
{

	//cake
	setbkcolor(0);
	setcolor(15);
	setfillstyle(SOLID_FILL,8);
	rectangle(50,400,250,405);
	floodfill(51,401,15);
	setfillstyle(SOLID_FILL,4);
	rectangle(60,355,240,400);
	floodfill(61,365,15);

	setfillstyle(SOLID_FILL,4);
	rectangle(80,310,217,355);
	floodfill(81,311,15);
	setfillstyle(SOLID_FILL,4);
	rectangle(100,270,200,310);
	floodfill(101,271,15);

	setfillstyle(INTERLEAVE_FILL,9);
	circle(100,379,8);
	floodfill(100,379,15);
	setfillstyle(INTERLEAVE_FILL,9);
	circle(198,379,8);
	floodfill(198,379,15);
	setfillstyle(INTERLEAVE_FILL,9);
	circle(150,370,8);
	floodfill(150,370,15);
	setfillstyle(INTERLEAVE_FILL,5);
	circle(190,334,8);
	floodfill(190,334,15);
	setfillstyle(INTERLEAVE_FILL,5);
	circle(150,324,8);
	floodfill(150,324,15);
	setfillstyle(INTERLEAVE_FILL,5);
	circle(114,334,8);
	floodfill(114,334,15);

	setfillstyle(INTERLEAVE_FILL,11);
	circle(180,288,7);
	floodfill(180,288,15);
	setfillstyle(INTERLEAVE_FILL,11);
	circle(150,280,7);
	floodfill(150,280,15);
	setfillstyle(INTERLEAVE_FILL,11);
	circle(117,288,7);
	floodfill(117,288,15);


	setcolor(14);
	outtextxy(63,392,"\x03");
	outtextxy(72,392,"\x03");
	outtextxy(82,392,"\x03");
	outtextxy(92,392,"\x03");
	outtextxy(102,392,"\x03");
	outtextxy(112,392,"\x03");
	outtextxy(122,392,"\x03");
	outtextxy(132,392,"\x03");
	outtextxy(142,392,"\x03");
	outtextxy(152,392,"\x03");
	outtextxy(162,392,"\x03");
	outtextxy(172,392,"\x03");
	outtextxy(182,392,"\x03");
	outtextxy(192,392,"\x03");
	outtextxy(202,392,"\x03");
	outtextxy(212,392,"\x03");
	outtextxy(222,392,"\x03");
	outtextxy(232,392,"\x03");
	setcolor(15);

	setcolor(3);
	outtextxy(82,348,"\x03");
	outtextxy(92,348,"\x03");
	outtextxy(102,348,"\x03");
	outtextxy(112,348,"\x03");
	outtextxy(122,348,"\x03");
	outtextxy(132,348,"\x03");
	outtextxy(142,348,"\x03");
	outtextxy(152,348,"\x03");
	outtextxy(162,348,"\x03");
	outtextxy(172,348,"\x03");
	outtextxy(182,348,"\x03");
	outtextxy(192,348,"\x03");
	outtextxy(204,348,"\x03");
	setcolor(15);

	 setcolor(12);
	outtextxy(102,302,"\x03");
	outtextxy(112,302,"\x03");
	outtextxy(122,302,"\x03");
	outtextxy(132,302,"\x03");
	outtextxy(142,302,"\x03");
	outtextxy(152,302,"\x03");
	outtextxy(162,302,"\x03");
	outtextxy(172,302,"\x03");
	outtextxy(182,302,"\x03");
	outtextxy(192,302,"\x03");
	setcolor(15);

	//candal
	setfillstyle(INTERLEAVE_FILL,RED);
	rectangle(120,270,126,217);
	floodfill(121,227,15);
	setfillstyle(INTERLEAVE_FILL,RED);
	rectangle(150,270,156,217);
	floodfill(151,227,15);
	setfillstyle(INTERLEAVE_FILL,RED);
	rectangle(180,270,186,217);
	floodfill(181,227,15);

	line(123,210,123,217);
	line(153,210,153,217);
	line(183,210,183,217);


	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(123,199,0,360,4,10);
	floodfill(123,199,15);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(153,199,0,360,4,10);
	floodfill(152,199,15);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(183,199,0,360,4,10);
	floodfill(183,199,15);

	settextstyle(10,0,6);
	setcolor(2);
	outtextxy(14,20,"H");
	setcolor(13);
	outtextxy(60,20,"A");
	setcolor(4);
	outtextxy(110,20,"P");
	setcolor(5);
	outtextxy(155,20,"P");
	setcolor(6);
	outtextxy(196,20,"Y");

	setcolor(9);
	outtextxy(270,20,"B");
	setcolor(10);
	outtextxy(320,20,"I");
	setcolor(11);
	outtextxy(340,20,"R");
	setcolor(12);
	outtextxy(386,20,"T");
	setcolor(2);
	outtextxy(437,20,"H");
	setcolor(4);
	outtextxy(484,20,"D");
	setcolor(5);
	outtextxy(525,20,"A");
	setcolor(6);
	outtextxy(560,20,"Y");
	setcolor(15);
	settextstyle(7,0,5);
	settextstyle(2,0,5);
	outtextxy(300,230,"BIRTHDAY COME AROUND EVERY YEAR,");
	outtextxy(300,250,"BUT FRIEND LIKE");
       outtextxy(300,270,"YOU ONLY COME ONCE IN A LIFETIME");
       outtextxy(300,290," I'M SO GLAD CAME INTO MY LIFE TIME ");
       outtextxy(300,310," WISHES ON YOUR SPECIAL DAY.");
       outtextxy(340,360,"- FROM SHUBHAM TO SHUBHAM.");


}

void Entry2()
{

setcolor(WHITE);

line(0,400,640,400);

rectangle(300,330,340,400);

rectangle(310,320,330,330);

setcolor(4);

line(319,280,319,398);

line(320,280,320,398);

rectangle(320,280,330,300);

outtextxy(340,280,"PRESS ANY KEY -");

getch();

for(int r=400;r<640;r++)

{

cleardevice();

setcolor(WHITE);

line(0,r,640,r);

rectangle(300,r-70,340,r);

rectangle(310,r-80,330,r-70);



setcolor(RED);

line(319,280,319,400);

line(320,280,320,400);

rectangle(320,280,330,300);



setcolor(YELLOW);

circle(325,300,2);



delay(5);

}



for(int s=400;s>340;s--)

{

cleardevice();



setcolor(RED);

line(319,s,319,s-120);

line(320,s,320,s-120);

rectangle(320,s-120,330,s-100);



setcolor(YELLOW);

circle(325,s-100,2);

delay(25);

}



}

void Entry3()
{

	for(int j=0;j<5;j++)
	{

	settextstyle(10,0,6);
	setcolor(2);
	outtextxy(14,250,"W");
	setcolor(3);
	outtextxy(110,250,"I");
	setcolor(4);
	outtextxy(140,250,"S");
	setcolor(5);
	outtextxy(185,250,"H");


	setcolor(9);
	outtextxy(270,250,"Y");
	setcolor(10);
	outtextxy(320,250,"O");
	setcolor(11);
	outtextxy(370,250,"U");
	settextstyle(11,0,8);

	setcolor(15);

	  if(j%2==0)
	  {

	settextstyle(10,0,6);
	setcolor(2);
	outtextxy(14,250,"W");
	setcolor(3);
	outtextxy(110,250,"I");
	setcolor(4);
	outtextxy(140,250,"S");
	setcolor(5);
	outtextxy(185,250,"H");


	setcolor(9);
	outtextxy(270,250,"Y");
	setcolor(10);
	outtextxy(320,250,"O");
	setcolor(11);
	outtextxy(370,250,"U");
	settextstyle(11,0,8);

	setcolor(15);


	for(int i=0;i<60;i++)
	 {


	settextstyle(10,0,6);
	setcolor(2);
	outtextxy(14,250,"W");
	setcolor(3);
	outtextxy(110,250,"I");
	setcolor(4);
	outtextxy(140,250,"S");
	setcolor(5);
	outtextxy(185,250,"H");


	setcolor(9);
	outtextxy(270,250,"Y");
	setcolor(10);
	outtextxy(320,250,"O");
	setcolor(11);
	outtextxy(370,250,"U");
	settextstyle(11,0,8);

	setcolor(15);

	  setcolor(2);
	 outtextxy(200-i,70-i,"\x03");
	 outtextxy(204,70-i,"\x03");
	 outtextxy(208+i,70+i,"\x03");
	 outtextxy(210-i,74+i,"\x03");
	 outtextxy(210-i,78-i,"\x03");
	 outtextxy(210+i,82+i,"\x03");
	 outtextxy(199+i,74-i,"\x03");
	 outtextxy(203+i,74-i,"\x03");
	 outtextxy(206-i,74-i,"\x03");



	 outtextxy(193-i,70-i,"\x03");
	 outtextxy(195,70-i,"\x03");
	 outtextxy(188+i,70+i,"\x03");
	 outtextxy(184-i,44+i,"\x03");
	 outtextxy(222-i,88-i,"\x03");
	 outtextxy(226+i,62+i,"\x03");
	 outtextxy(229+i,54-i,"\x03");
	 outtextxy(201+i,64-i,"\x03");
	 outtextxy(205-i,70-i,"\x03");

	  outtextxy(199+i+2,78-i,"\x03");
	 outtextxy(203-i,78-i+2,"\x03");
	 outtextxy(206+i+1,78-i,"\x03");

	 outtextxy(199-i,82+i,"\x03");
	 outtextxy(203+i,82+6-i,"\x03");
	 outtextxy(206+i,82-i,"\x03");


	  setcolor(RED);
	 outtextxy(300-i,70-i,"\x03");
	 outtextxy(304,70-i,"\x03");
	 outtextxy(308+i,70+i,"\x03");
	 outtextxy(310-i,74+i,"\x03");
	 outtextxy(310-i,78-i,"\x03");
	 outtextxy(310+i,82+i,"\x03");
	 outtextxy(299+i,74-i,"\x03");
	 outtextxy(303+i,74-i,"\x03");
	 outtextxy(306-i,74-i,"\x03");



	 outtextxy(293-i,70-i,"\x03");
	 outtextxy(295,70-i,"\x03");
	 outtextxy(288+i,70+i,"\x03");
	 outtextxy(284-i,44+i,"\x03");
	 outtextxy(322-i,88-i,"\x03");
	 outtextxy(326+i,62+i,"\x03");
	 outtextxy(329+i,54-i,"\x03");
	 outtextxy(301+i,64-i,"\x03");
	 outtextxy(205-i,70-i,"\x03");

	  outtextxy(299+i+2,78-i,"\x03");
	 outtextxy(303-i,78-i+2,"\x03");
	 outtextxy(306+i+1,78-i,"\x03");

	 outtextxy(299-i,82+i,"\x03");
	 outtextxy(303+i,82+6-i,"\x03");
	 outtextxy(306+i,82-i,"\x03");

	  setcolor(YELLOW);
	 outtextxy(400-i,70-i,"\x03");
	 outtextxy(404,70-i,"\x03");
	 outtextxy(408+i,70+i,"\x03");
	 outtextxy(410-i,74+i,"\x03");
	 outtextxy(410-i,78-i,"\x03");
	 outtextxy(410+i,82+i,"\x03");
	 outtextxy(399+i,74-i,"\x03");
	 outtextxy(403+i,74-i,"\x03");
	 outtextxy(406-i,74-i,"\x03");



	 outtextxy(393-i,70-i,"\x03");
	 outtextxy(395,70-i,"\x03");
	 outtextxy(388+i,70+i,"\x03");
	 outtextxy(384-i,44+i,"\x03");
	 outtextxy(422-i,88-i,"\x03");
	 outtextxy(426+i,62+i,"\x03");
	 outtextxy(429+i,54-i,"\x03");
	 outtextxy(401+i,64-i,"\x03");
	 outtextxy(205-i,70-i,"\x03");

	  outtextxy(399+i+2,78-i,"\x03");
	 outtextxy(403-i,78-i+2,"\x03");
	 outtextxy(406+i+1,78-i,"\x03");

	 outtextxy(399-i,82+i,"\x03");
	 outtextxy(403+i,82+6-i,"\x03");
	 outtextxy(406+i,82-i,"\x03");

	  setcolor(6);
	 outtextxy(500-i,80-i,"\x03");
	 outtextxy(504,80-i,"\x03");
	 outtextxy(508+i,80+i,"\x03");
	 outtextxy(510-i,84+i,"\x03");
	 outtextxy(510-i,88-i,"\x03");
	 outtextxy(510+i,92+i,"\x03");
	 outtextxy(499+i,84-i,"\x03");
	 outtextxy(503+i,84-i,"\x03");
	 outtextxy(506-i,84-i,"\x03");



	 outtextxy(493-i,80-i,"\x03");
	 outtextxy(495,80-i,"\x03");
	 outtextxy(488+i,80+i,"\x03");
	 outtextxy(484-i,54+i,"\x03");
	 outtextxy(522-i,98-i,"\x03");
	 outtextxy(526+i,72+i,"\x03");
	 outtextxy(529+i,64-i,"\x03");
	 outtextxy(501+i,74-i,"\x03");
	 outtextxy(405-i,80-i,"\x03");

	  outtextxy(499+i+2,88-i,"\x03");
	 outtextxy(503-i,88-i+2,"\x03");
	 outtextxy(506+i+1,88-i,"\x03");

	 outtextxy(499-i,82+i,"\x03");
	 outtextxy(503+i,82+6-i,"\x03");
	 outtextxy(506+i,82-i,"\x03");

	  setcolor(9);
	 outtextxy(100-i,90-i,"\x03");
	 outtextxy(104,90-i,"\x03");
	 outtextxy(108+i,90+i,"\x03");
	 outtextxy(110-i,94+i,"\x03");
	 outtextxy(110-i,98-i,"\x03");
	 outtextxy(110+i,92+i,"\x03");
	 outtextxy(199+i,94-i,"\x03");
	 outtextxy(103+i,94-i,"\x03");
	 outtextxy(106-i,94-i,"\x03");



	 outtextxy(193-i,90-i,"\x03");
	 outtextxy(195,90-i,"\x03");
	 outtextxy(188+i,90+i,"\x03");
	 outtextxy(184-i,64+i,"\x03");
	 outtextxy(122-i,98-i,"\x03");
	 outtextxy(126+i,82+i,"\x03");
	 outtextxy(129+i,74-i,"\x03");
	 outtextxy(101+i,84-i,"\x03");
	 outtextxy(105-i,90-i,"\x03");

	  outtextxy(199+i+2,98-i,"\x03");
	 outtextxy(103-i,98-i+2,"\x03");
	 outtextxy(106+i+1,98-i,"\x03");

	 outtextxy(199-i,92+i,"\x03");
	 outtextxy(103+i,92+6-i,"\x03");
	 outtextxy(106+i,92-i,"\x03");


	  setcolor(5);
	 outtextxy(100-i,190-i,"\x03");
	 outtextxy(104,190-i,"\x03");
	 outtextxy(108+i,190+i,"\x03");
	 outtextxy(110-i,194+i,"\x03");
	 outtextxy(110-i,198-i,"\x03");
	 outtextxy(110+i,192+i,"\x03");
	 outtextxy(199+i,194-i,"\x03");
	 outtextxy(103+i,194-i,"\x03");
	 outtextxy(106-i,194-i,"\x03");



	 outtextxy(193-i,190-i,"\x03");
	 outtextxy(195,190-i,"\x03");
	 outtextxy(188+i,190+i,"\x03");
	 outtextxy(184-i,164+i,"\x03");
	 outtextxy(122-i,198-i,"\x03");
	 outtextxy(126+i,182+i,"\x03");
	 outtextxy(129+i,174-i,"\x03");
	 outtextxy(101+i,184-i,"\x03");
	 outtextxy(105-i,190-i,"\x03");

	  outtextxy(199+i+2,198-i,"\x03");
	 outtextxy(103-i,198-i+2,"\x03");
	 outtextxy(106+i+1,198-i,"\x03");

	 outtextxy(199-i,192+i,"\x03");
	 outtextxy(103+i,192+6-i,"\x03");
	 outtextxy(106+i,192-i,"\x03");


	  setcolor(3);
	 outtextxy(500-i,130-i,"\x03");
	 outtextxy(504,130-i,"\x03");
	 outtextxy(508+i,130+i,"\x03");
	 outtextxy(510-i,134+i,"\x03");
	 outtextxy(510-i,138-i,"\x03");
	 outtextxy(510+i,132+i,"\x03");
	 outtextxy(499+i,134-i,"\x03");
	 outtextxy(503+i,134-i,"\x03");
	 outtextxy(506-i,134-i,"\x03");



	 outtextxy(493-i,130-i,"\x03");
	 outtextxy(495,130-i,"\x03");
	 outtextxy(488+i,130+i,"\x03");
	 outtextxy(484-i,114+i,"\x03");
	 outtextxy(522-i,138-i,"\x03");
	 outtextxy(526+i,112+i,"\x03");
	 outtextxy(529+i,124-i,"\x03");
	 outtextxy(501+i,124-i,"\x03");
	 outtextxy(405-i,130-i,"\x03");

	  outtextxy(499+i+2,138-i,"\x03");
	 outtextxy(503-i,138-i+2,"\x03");
	 outtextxy(506+i+1,138-i,"\x03");

	 outtextxy(499-i,132+i,"\x03");
	 outtextxy(503+i,132+6-i,"\x03");
	 outtextxy(506+i,132-i,"\x03");


	  setcolor(11);
	 outtextxy(400-i,190-i,"\x03");
	 outtextxy(404,190-i,"\x03");
	 outtextxy(408+i,190+i,"\x03");
	 outtextxy(410-i,194+i,"\x03");
	 outtextxy(410-i,198-i,"\x03");
	 outtextxy(410+i,192+i,"\x03");
	 outtextxy(399+i,194-i,"\x03");
	 outtextxy(403+i,194-i,"\x03");
	 outtextxy(406-i,194-i,"\x03");



	 outtextxy(493-i,190-i,"\x03");
	 outtextxy(495,190-i,"\x03");
	 outtextxy(488+i,190+i,"\x03");
	 outtextxy(484-i,164+i,"\x03");
	 outtextxy(422-i,198-i,"\x03");
	 outtextxy(426+i,162+i,"\x03");
	 outtextxy(429+i,174-i,"\x03");
	 outtextxy(401+i,174-i,"\x03");
	 outtextxy(305-i,190-i,"\x03");

	  outtextxy(399+i+2,198-i,"\x03");
	 outtextxy(403-i,198-i+2,"\x03");
	 outtextxy(406+i+1,198-i,"\x03");

	 outtextxy(399-i,192+i,"\x03");
	 outtextxy(403+i,192+6-i,"\x03");
	 outtextxy(406+i,192-i,"\x03");
	 setcolor(15);



	 delay(5);
	 cleardevice();
	   }
	  }
	 }
}

void Entry()
{

       for(int r=0;r<2500;r++)
       {

	circle(170,300,10);
	settextstyle(10,0,4);
	setcolor(10);
	outtextxy(156,290,"S");
	setcolor(15);
	 line(170,350,168,400);  // left
	 line(170,350,172,400);//right

	 line(0,400,700,400);
	 line(157,320,147,350);
	 line(177,317,188,350);
	 settextstyle(2,0,7);
	if(r==30)
	{
		outtextxy(250,295,"Today is your Birthday.");

	}
	if(r==370)
	{
	     cleardevice();
	}
	if(r==430)
	{
		outtextxy(250,295,"I Have Something For You");
	}
	if(r==800)
	{
	     cleardevice();
	}
	if(r==1400)
	{
		outtextxy(250,295,"Are You Excited? Enter Any key");
		getch();
	}
	if(r==1700)
	{
	   cleardevice();
	}
	if(r==1900)
	{
	    outtextxy(250,295,"START");
	}
	if(r==2500)
	{
	   cleardevice();
	   break;
	}

      }
      cleardevice();
}