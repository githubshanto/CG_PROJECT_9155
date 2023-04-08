#include<stdio.h>
#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>

using namespace std;

int main()
{
    int digit;

    cout<<"My project list:\n1.My Name and ID\n2.crescent star symbol\n3.Car Drawing\n4.House Drawing\n5.Swords drawing\n6.Flag drawing";

    cout << "\n\n\nEnter project number: ";
    cin >> digit;


    if(digit==1)
    {


          int gd=DETECT,gm;
    initwindow(4000, 4000, "My Graphics Program");

    line(10,10,10,40);
    line(10,10,30,40);
    line(30,10,30,40);
    line(70,10,50,40);
    line(70,10,80,40);
    line(62,25,85,25);
    line(100,10,100,40);
    line(100,10,115,25);
    line(130,10,130,40);
    line(130,10,115,25);
    line(140,10,140,40);
    line(140,10,160,10);
    line(140,25,160,25);
    line(140,40,160,40);
    line(170,25,180,25);//-
    line(190,10,190,40);//n start
    line(190,10,210,40);
    line(210,10,210,40);
     // draw "U"
    line(230, 10, 230, 40);
    line(230, 40, 250, 40);
    line(250, 40, 250, 10);
   //R
   line(270, 10, 270, 40);
  arc(270,17,270,80,10);
  line(270,23,290,40);
  line(310,10,310,40);
  line(330,10,330,40);
  line(310,25,330,25);
  //Draw A
  line(350,10,335,40);
  line(350,10,365,40);
  line(343,25,361,25);

  //s
  arc(380,20,20,270,10);
  arc(380,40,180,90,9);
  //n
  line(395,10,395,40);
  line(395,10,410,40);
  line(410,10,410,40);
  //A
  line(430,10,415,40);
  line(430,10,445,40);
  line(423,25,438,25);
  //T
  line(448,10,468,10);
  line(458,10,458,40);
  //s
  arc(500,20,20,270,10);
  arc(500,40,180,90,9);
  line(520,10,520,40);
  line(540,10,540,40);
  line(520,20,540,20);
  //a
  line(560,10,550,40);
  line(560,10,570,40);
  line(553,25,563,25);
  //n
  line(577,10,577,40);
  line(577,10,595,40);
  line(595,10,595,40);
   circle(615, 25, 15);

   line(10,60,10,90);
   line(7,60,14,60);
    line(7,90,14,90);
    line(19,60,19,90);
    arc(19,75,270,90,15);
    line(40,75,50,75);

    //c
    arc(70,75,60,300,15);
arc(90,69,20,270,7);
  arc(90,82,180,90,7);

  //e
  line(105,60,105,90);
  line(105,60,120,60);
  line(105,75,120,75);
  line(105,90,120,90);

  //2
  arc(145,75,287,120,15);
  line(144,90,165,90);
  //0
  circle(180,75,15);
  circle(213,75,15);
  line(235,60,235,90);

  circle(253,75,15);
  line(270,60,270,90);
  circle(283,65,7);
  arc(284,73,270,90,13);
  line(300,60,300,90);
  line(310,60,330,60);
  line(310,60,310,73);
  ellipse(310,83,265,90,16,12);
  line(340,60,340,73);
  line(340,60,360,60);
  ellipse(340,83,265,90,16,12);













    //arc(50,50,20,270,10);
    //arc(50,70,180,90,10);

    getch();
    closegraph();
    return 0;

}

    else if(digit==6){
        int gdriver=DETECT, gmode;
        initgraph(&gdriver, &gmode, " ");

        initwindow(2000,2000);

        setcolor(RED);

        rectangle(200,100,700,300);
        line(200,100,200,94);
        line(200,94,195,94);

        line(195,94,195,700);
        line(200,300,200,700);

        line(170,700,230,700);
        line(170,700,170,720);
        line(170,720,230,720);
        line(230,700,230,720);

        setfillstyle(SOLID_FILL,BROWN);
        floodfill(196,400,RED);
        floodfill(228,710,RED);

        setfillstyle(SOLID_FILL,GREEN);
        floodfill(220,110,RED);

        circle(450,200,80);
        setfillstyle(SOLID_FILL,RED);
        floodfill(450,200,RED);

        getch(); // wait for user input
        closegraph();




    }

    else if(digit==3)
    {
        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the top of the table
    setcolor(BROWN);
    line(200,50,400,50);
   line(400,50,455,100);
   line(200,50,150,100);
   line(150,100,50,100);
   line(455,100,555,100);
   line(50,100,50,150);
   line(555,100,555,150);
   line(50,150,140,150);
   arc(170,150,0,180,30);
   line(198,150,415,150);
   arc(445,150,0,180,30);
   line(472,150,555,150);
   line(150,100,156,106);
   line(455,100,449,106);
   line(156,106,449,106);
   // line(203,55,398,55);
   circle(169,151,25);
    circle(169,152,15);

    circle(445,151,25);
    circle(445,152,15);


   setfillstyle(SOLID_FILL,RED);
   floodfill(300,149,BROWN);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(300,100,BROWN);

    setfillstyle(LTSLASH_FILL,GREEN);
   floodfill(169,152,BROWN);
   floodfill(445,152,BROWN);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(169,130,BROWN);
   floodfill(445,130,BROWN);

   arc(555,115,270,90,9);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(556,115,BROWN);

   setcolor(WHITE);
   line(559,115,610,115);
   line(559,115,610,105);
    line(559,115,610,123);



    getch();
    closegraph();
    return 0;
    }

    else if(digit==4)

        {
        int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    setcolor(BLUE);
    rectangle(200,200,470,400);
    rectangle(60,200,200,400);
    line(450,200,500,200);
    line(450,100,500,200);
    line(140,100,200,200);
   line(60,200,140,100);
   line(140,100,450,100);
   rectangle(300,300,370,400);
   rectangle(100,300,150,400);
   setfillstyle(SOLID_FILL,RED);
   floodfill(230,340,BLUE);

 setfillstyle(SOLID_FILL,GREEN);
   floodfill(350,370,BLUE);

   setfillstyle(4,GREEN);

    floodfill(350,120,BLUE);
    setfillstyle(3,GREEN);

    floodfill(140,120,BLUE);

    setfillstyle(1,BLUE);

    floodfill(140,250,BLUE);
    setfillstyle(1,GREEN);
    floodfill(140,350,BLUE);







    getch();
    closegraph();

    }
    else if(digit==5)
    {
         int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

 setcolor(WHITE);


line(200,100,200,150);
line(210,100,210,150);

line(200,150,170,150);
line(210,150,240,150);

line(170,150,170,160);
line(170,160,195,160);


line(240,160,215,160);
line(240,150,240,160);

line(195,160,205,155);
line(215,160,205,155);

line(195,160,195,300);
line(215,160,215,300);

line(195,300,205,350);
line(215,300,205,350);

circle(205,100,7);

  setfillstyle(SOLID_FILL,WHITE);

floodfill(196,300,WHITE);
floodfill(205,100,WHITE);
setfillstyle(SOLID_FILL,BROWN);
floodfill(205,150,WHITE);
circle(205,150,4);




    getch();
    closegraph();

    return 0;
    }

  else if(digit==2)
  {
        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

   setcolor(YELLOW);
   line(220,220,240,180);

   line(240,180,260,220);//2
   line(220,220,270,200);//3
   line(270,200,210,200);//4
   line(260,220,210,200);

   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(220,202,YELLOW);
   floodfill(239,204,YELLOW);
   floodfill(239,196,YELLOW);
   floodfill(255,202,YELLOW);
   floodfill(253,212,YELLOW);
   floodfill(233,212,YELLOW);


  // line(600,200,650,300);
  // line(550,300,650,230);
  // line(650,230,550,230);
   //line(550,230,650,300);




  setcolor(WHITE);

   arc(270,200,113,245,80);
   arc(200,200,62,298,80);
  setfillstyle(SOLID_FILL,YELLOW);



    floodfill(180,220,WHITE);

    getch();
    closegraph();
    return 0;
  }

}

