#include<stdio.h>
#include<graphics.h>
#include<string.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm," ");
    while(1)
    {
    char hrs[10] , min[10], sec[10], pmam[10];
    time_t t;   
    time(&t);
    struct tm *sd_time;
    sd_time = localtime (&t);
    //calculating time and pm or am
    strftime (hrs, 150,"%I", sd_time);
    strftime (pmam, 150,"%p",sd_time);
    int minute = sd_time->tm_min;
    int seconds=sd_time->tm_sec;
    //decide and print pm and am
    if(strcmp(pmam,"AM"))
     {  
         //P
          setcolor(GREEN);
	line(524,250,551,250);//1
	line(520,254,520,296);//2
	line(520,304,520,346);//3
	line(555,254,555,296);//6
	 line(524,300,551,300);//7
	//M 
	line(565,254,565,296);//2
	line(565,304,565,346);//3
	 line(600,254,600,296);//6
	  line(600,304,600,346);//5
	  line(567,250,580,250);//left
	  line(584,250,598,250);//right
	  line(582,252,582,298);//middle
       } 
     else 
     {
	 //A
	  setcolor(GREEN);
	line(524,250,551,250);//1
	line(520,254,520,296);//2
	line(520,304,520,346);//3
	 line(555,254,555,296);//6
	  line(555,304,555,346);//5
	 line(524,300,551,300);//7
	//M 
	 setcolor(GREEN);
	line(565,254,565,296);//2
	line(565,304,565,346);//3
	 line(600,254,600,296);//6
	  line(600,304,600,346);//5
	  line(567,250,580,250);//left
	  line(584,250,598,250);//right
	  line(582,252,582,298);//middle
      }
      //frame for display
      setcolor(GREEN);
     rectangle(30,30,630,400);
     // display colons between hour , minut and seconds
    rectangle(194,199,196,202);
    rectangle(354,199,356,202);
      rectangle(194,251,196,253);
    rectangle(354,251,356,253);
    //calling functin to display hours
      if(hrs[0]==48)
  	  {
  	   setcolor(GREEN);
  	  line(54,100,106,100);//1
	line(50,104,50,221);//2
	line(50,229,50,346);//3
	line(54,350,106,350);//4
	 line(110,229,110,346);//5
	 line(110,104,110,221);//6
  	  display_hrs(hrs[1]);
   	 }
    	else
   	  {
  	  line(110,104,110,221);//6
	 line(110,229,110,346);//5
  	  display_hrs(hrs[1]);
   	 }
   	 //calling function to display minute and time
   	display_min(minute);
        display_sec(seconds);
      delay(1000);
      cleardevice();
     }   
}
//function to display hours
void  display_hrs(char h)
{
int new_h = h-48, incrh=70;
display_value(new_h,incrh);
}
//function to display minutes
void display_min(int m)
{
int incr1=160,incr2=230;
display_value(m/10,incr1);
display_value(m%10,incr2);
}
//function to display seconds
void display_sec(int s)
{
int incr1=320,incr2=390;
display_value(s/10,incr1);
display_value(s%10,incr2);
}
//function to display values
void display_value(int value,int incr)
{
 if(value==1)
	{
	 setcolor(GREEN);
	 line(110+incr,104,110+incr,221);//6
	 line(110+incr,229,110+incr,346);//5
	}
if(value==2)
	{
	 setcolor(GREEN);
	line(54+incr,100,106+incr,100);//1
	line(110+incr,104,110+incr,221);//6
	line(54+incr,225,106+incr,225);//7
	line(50+incr,229,50+incr,346);//3
	line(54+incr,350,106+incr,350);//4
	}
if(value==3)
	{
	setcolor(GREEN);
	line(54+incr,100,106+incr,100);//1
	line(110+incr,104,110+incr,221);//6
	 line(110+incr,229,110+incr,346);//5
	line(54+incr,225,106+incr,225);//7
	line(54+incr,350,106+incr,350);//4
	}
if(value==4)
	{
	 setcolor(GREEN);
	line(50+incr,104,50+incr,221);//2
	line(54+incr,225,106+incr,225);//7
	line(110+incr,104,110+incr,221);//6
	 line(110+incr,229,110+incr,346);//5
	}
if(value==5)
	{
	setcolor(GREEN);
	line(54+incr,100,106+incr,100);//1
	line(50+incr,104,50+incr,221);//2
	line(54+incr,225,106+incr,225);//7
	 line(110+incr,229,110+incr,346);//5 
	line(54+incr,350,106+incr,350);//4
	}
if(value==6)
	{
	setcolor(GREEN);
	line(54+incr,100,106+incr,100);//1
	line(50+incr,104,50+incr,221);//2
	line(50+incr,229,50+incr,346);//3
	line(54+incr,350,106+incr,350);//4
	 line(110+incr,229,110+incr,346);//5
	 line(54+incr,225,106+incr,225);//7
	}
if(value==7)
	{
	 setcolor(GREEN);
	line(54+incr,100,106+incr,100);//1
	line(110+incr,104,110+incr,221);//6
	 line(110+incr,229,110+incr,346);//5
	}
if(value==8)
	{
	 setcolor(GREEN);
	line(54+incr,100,106+incr,100);//1
	line(50+incr,104,50+incr,221);//2
	line(50+incr,229,50+incr,346);//3
	line(54+incr,350,106+incr,350);//4
	 line(110+incr,229,110+incr,346);//5
	 line(110+incr,104,110+incr,221);//6
	 line(54+incr,225,106+incr,225);//7
	}
if(value==9)
	{
	 setcolor(GREEN);
	line(54+incr,100,106+incr,100);//1
	line(50+incr,104,50+incr,221);//2
	 line(54+incr,225,106+incr,225);//7
	line(110+incr,104,110+incr,221);//6
	 line(110+incr,229,110+incr,346);//5
	}

if(value==0)
	{
	 setcolor(GREEN);
	line(54+incr,100,106+incr,100);//1
	line(50+incr,104,50+incr,221);//2
	line(50+incr,229,50+incr,346);//3
	line(54+incr,350,106+incr,350);//4
	 line(110+incr,229,110+incr,346);//5
	 line(110+incr,104,110+incr,221);//6
     }
}










