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
	line(520,250,555,250);
	line(520,250,520,350);
	line(555,250,555,300);
	line(520,300,555,300);
	//M 
	line(565,250,565,350);
	line(565,250,582,300); 
	line(582,300,600,250);
	line(600,250,600,350);
       } 
     else 
     {
	 //A
	  setcolor(GREEN);
	line(520,250,555,250);
	line(520,250,520,350);
	line(555,250,555,350);
	line(520,300,555,300);
	//M 
	line(565,250,565,350);
	line(565,250,582,300);
	line(582,300,600,250);
	line(600,250,600,350);
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
  	  rectangle(50,100,110,350);
  	  display_hrs(hrs[1]);
   	 }
    	else
   	  {
  	 line(110,100,110,350);
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
	 line(110+incr,100,110+incr,350);
	}
if(value==2)
	{
	line(50+incr,100,110+incr,100);
	line(110+incr,100,110+incr,225); setcolor(GREEN);
	line(110+incr,225,50+incr,225);
	line(50+incr,225,50+incr,350);
	line(50+incr,350,110+incr,350);
	}
if(value==3)
	{
	line(50+incr,100,110+incr,100);
	line(110+incr,100,110+incr,350);
	line(110+incr,225,50+incr,225);
	line(50+incr,350,110+incr,350);
	}
if(value==4)
	{
	line(50+incr,100,50+incr,225);
	line(110+incr,225,50+incr,225);
	line(110+incr,100,110+incr,350);
	}
if(value==5)
	{
	line(50+incr,100,110+incr,100);
	line(50+incr,100,50+incr,225);
	line(110+incr,225,50+incr,225);
	line(110+incr,225,110+incr,350); setcolor(GREEN);
	line(50+incr,350,110+incr,350);
	}
if(value==6)
	{
	line(50+incr,100,110+incr,100);
	line(50+incr,100,50+incr,350);
	line(50+incr,350,110+incr,350);
	line(110+incr,225,110+incr,350);
	line(110+incr,225,50+incr,225);
	}
if(value==7)
	{
	line(50+incr,100,110+incr,100);
	line(110+incr,100,110+incr,350);
	}
if(value==8)
	{
	line(50+incr,100,110+incr,100);
	line(50+incr,100,50+incr,350);
	line(50+incr,350,110+incr,350); setcolor(GREEN);
	line(110+incr,100,110+incr,350);
	line(110+incr,225,50+incr,225);
	}
if(value==9)
	{
	line(50+incr,100,50+incr,225);
	line(110+incr,225,50+incr,225);
	line(50+incr,100,110+incr,100);
	line(110+incr,100,110+incr,350); setcolor(GREEN);
	}

if(value==0)
	{
	rectangle(50+incr,100,110+incr,350);

     }
}










