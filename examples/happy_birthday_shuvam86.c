#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<dos.h>
int i,j,k,l;
char ha[20][20] = {'H','A','P','P','Y',' ','B','I','R','T','H','D','A','Y'}, you[100];
void main()
{
int coun = 1, n;
char r[200], r1[200];
clrscr();
printf("Enter your friend's name to wish ");
gets(you);
clrscr();
do
{
printf("  \n\n\t\t\tBirthday Wishes Platform");
printf("\n\n\t\t\t 1.Box Wishes");
printf("\n\t\t\t 2.Hide and Seek Wishes");
printf("\n\t\t\t 3.Journey to Wish");
printf("\n\t\t\t 4.Smiley Wishes");
printf("\n\t\t\t 5.FLASH NEWS");
printf("\n\t\t\t Press any key other than 1-5 to exit");
printf("\nToday is Your Birthday so Choose what you like to choose %s:",coun==1?"First":coun==2?"Second":coun==3?"Third":coun==4?"Fourth":coun==5?"Fifth":coun==6?"Sixth":"");
scanf("%d",&n);
coun++;
if(n>7||n<=0)
exit(0);
switch(n)
{
case 1:
show1();
break;
case 2:
show2();
break;
case 3:
show3();
break;
case 4:
show4();
break;
case 5:
show5();
break;
default:
exit(0);
}
}while(n>0||n<=7);
getche();
}
show1()
{
for(i=5;i>0;i--)
{
clrscr();
printf("\n\n\n\n\t\t\tBox will Appears within %ds",i);
sleep(1);
}
clrscr();
printf("\t");
for(i=0;i<1;i++)
{
for(j=0;j<14;j++)
{
printf("%4c",ha[i][j]);
}
}
printf("\n\t\t\t");
for(i=0;i<1;i++)
{
for(j=0;j<14;j++)
{
sleep(1);
if(j==5)
{
sleep(2);
printf("\n\t\t\t  HAPPY BIRTHDAY FRIEND\n\t\t\t\t %s", you);
continue;
}
printf("\n%10c\t\t\t\t\t\t\t%c",ha[i][j],ha[i][j]);
}
}
printf("\n\t\tGOD BLESS YOU & ALL YOUR DESIRES COMES TRUE");
sleep(4);
clrscr();
return 0;
}
show2()
{
clrscr();
for(i=5;i>0;i--)
{
clrscr();
printf("\n\n\n\n\t\t\tHide & Seek Starts in %ds",i);
sleep(1);
}
clrscr();
sleep(1);
printf("\n HH   HH");
printf("\n HHHHHHH");
printf("\n HH   HH");
sleep(1);
clrscr();
printf("\n%20s","AAAAAAA");
printf("\n%20s","AA   AA");
printf("\n%20s","AAAAAAA");
printf("\n%20s","AA   AA");
sleep(1);
clrscr();
printf("\n");
printf("\n%50s","PPPPPPP");
printf("\n%50s","PP     PP");
printf("\n%50s","PP     PP");
printf("\n%50s","PPPPPPPPP");
printf("\n%50s","PP       ");
printf("\n%50s","PP       ");
sleep(1);
clrscr();
printf("\n\n");
printf("\n%30s","PPPPPPP");
printf("\n%30s","PP     PP");
printf("\n%30s","PP     PP");
printf("\n%30s","PPPPPPPPP");
printf("\n%30s","PP       ");
printf("\n%30s","PP       ");
sleep(1);
clrscr();
printf("\n\n\n\n\n\n\n");
printf("\n\t\tYY     YY");
printf("\n\t\t YY   YY");
printf("\n\t\t  YY YY ");
printf("\n\t\t    Y   ");
printf("\n\t\t    Y   ");
sleep(1);
clrscr();
printf("\n\n\n");
printf("\n%60s","BBBBBBBBBB");
printf("\n%60s","BB      BB");
printf("\n%60s","BB      BB");
printf("\n%60s","BBBBBBBBBB");
printf("\n%60s","BB      BB");
printf("\n%60s","BB      BB");
printf("\n%60s","BBBBBBBBBB");
sleep(1);
clrscr();
printf("\n\n\n\n\n\n\n\n");
printf("\n%30s","   IIIIII");
printf("\n%30s","     II  ");
printf("\n%30s","     II  ");
printf("\n%30s","     II  ");
printf("\n%30s","   IIIIII");
sleep(1);
clrscr();
printf("\n\n");
printf("\n%20s","  RRRRRRR");
printf("\n%20s","  RR     RR");
printf("\n%20s","  RR     RR");
printf("\n%20s","  RRRRRRRRR");
printf("\n%20s","  RR RR    ");
printf("\n%20s","  RR   RR  ");
printf("\n%20s","  RR     RR");
sleep(1);
clrscr();
printf("\nTTTTTTTT");
printf("\n   TT   ");
printf("\n   TT   ");
printf("\n   TT   ");
sleep(1);
clrscr();
printf("\n");
printf("\n%10s"," HH   HH");
printf("\n%10s"," HHHHHHH");
printf("\n%10s"," HH   HH");
sleep(1);
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\n");
printf("\n%35s"," DDDDDDD");
printf("\n%35s","   DD    DD");
printf("\n%35s","   DD    DD");
printf("\n%35s","   DD    DD");
printf("\n%35s"," DDDDDDD");
sleep(1);
clrscr();
printf("\n");
printf("\n%80s","AAAAAAA");
printf("\n%80s","AA   AA");
printf("\n%80s","AAAAAAA");
printf("\n%80s","AA   AA");
sleep(1);
clrscr();
printf("\n\n\n\n\n\n\n");
printf("\n%10s","YY     YY");
printf("\n%10s"," YY   YY");
printf("\n%10s","  YY YY ");
printf("\n%10s","    Y   ");
printf("\n%10s","    Y   ");
sleep(1);
clrscr();
sleep(3);
clrscr();
printf("\n\n\n\n\n\n\n");
printf("\n%20s HAPPY BIRTHDAY %s", "", you);
printf("\n\n\n\n\n\n\n\n");
printf("%30s","My Hearty wishes to you Friend...  ");
sleep(4);
clrscr();
return 0;
}
show3()
{
for(i=5;i>0;i--)
{
clrscr();
printf("\n\n\n\n\t\t\tJourney Begins in %ds",i);
sleep(1);
}
clrscr();
printf("\n\t\t\t\tJourney to Wish a FRIEND");
printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTenkasi");
printf("                                                                          %c",25);
sleep(1);
printf("\t                                                                          %c",25);
sleep(1);
printf("\t                                                                    %s","ALANGULAM");
sleep(2);
printf("\t                                                                          %c",25);
sleep(1);
printf("\t                                                                          %c",186);
sleep(1);
printf("\t                                                                          %c",186);
sleep(1);
printf("\t                                                                          %c",186);
sleep(1);
printf("\t                                                                    %cR %c Y %c G",178,177,176);
sleep(3);
printf("\t                                                                        %c ",188);
sleep(1);
printf("\t                                                  TIRUNELVELI WELCOMES YOU");
sleep(2);
printf("\t                                                                       %c",25);
sleep(1);
printf("\t                                                                       %c",186);
sleep(1);
printf("\t                                                                       %c",186);
sleep(1);
printf("\t                                                                       %c",186);
sleep(1);
printf("\t                                                            %c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,185);
sleep(2);
printf("\t                                                             PALYAMKOTTAI");
sleep(2);
printf("\t                                                          %c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205);
printf("\t                %c%c%cDR.SACOE%c%c%c%c%c%c%c%c%cKURUMBUR%c%c%c%c%c%c%c%cALWAR%c%c%c%c%c%cSeidunganallur",206,205,205,254,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
sleep(2);
clrscr();
printf("\t\t\t\tEEE DEPARTMENT");
sleep(1);
printf("\n\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
sleep(1);
printf("\n\t\t\t%c               %c\n\t\t\t%c               %c\n\t\t\t%c               %c\n\t\t\t%c               %c\n\t\t\t%cHAPPY BIRTHDAY %c\n\t\t\t%c     %s   %c\n\t\t\t%c               %c\n\t\t\t%c               %c",179,179,179,179,179,179,179,179,179,179,179,you,179,179,179,179,179);
sleep(1);
printf("\n\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,47);
sleep(4);
clrscr();
return 0;
}
show4()
{
clrscr();
for(i=5;i>0;i--)
{
clrscr();
printf("\n\n\n\n\t\t\tSmileys Appears in %ds",i);
sleep(1);
}
clrscr();
for(i=0;i<=381;i++)
printf(" %c%c",1,2);
k=0;

for(i=0;i<15;i++)
{
printf(" %c",ha[k][i]);
sleep(1);
}sleep(1);printf("%s",you);sleep(1);
printf(" \n\t\tEVERY MOMENT IN YOUR LIFE WOULD BE FILLED WITH HAPPINESS ");
for(i=0;i<=319;i++)
printf("%c %c",1,2);
sleep(2);
clrscr();
return 0;
}
show5()
{
clrscr();
for(i=0;i<5;i++)
printf("\n");
printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
printf("\n%c               %c   	May Everyday Bring Something New and Exciting For You.  %c               %c  May This Birthday Turn Out To Be As Amazing As You.  \n%c               %c    \n%c      PHOTO    %c    .\"\n%c  LOADING...   %c\n%c               %c\n%c               %c",179,179,179,179,179,179,179,179,179,179,179,179,179,179,179,179);
printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
for(i=0;i<6;i++)
printf("\n");
for(i=0;i<78;i++)
printf("%c",196);
for(i=0;i<4;i++)
{
if(i==0)
{
printf("\t\t\t\t");
call();
for(j=0;j<4;j++)
{
for(k=0;k<11;k++)
{
printf("\b");
}
sleep(1);
call(j);
}
}
for(k=0;k<11;k++)
printf("\b");
if(i==1)
 printf("\t\t\tHAPPY BIRTHDAY %s",you);
sleep(1);
sleep(1);
if(i==2)
printf("\n\t\t\t         by");
sleep(1);
if(i==3)
printf("\n\t\t       Best Friend");
}
sleep(6);
clrscr();

return 0;
}
call(int j)
{
 if(j==0)
printf("     FLASH  NEWS");
 if(j==1)
 printf("     FRESH  NEWS");
 if(j==2)
 printf("     NEWS UPDATE");
return 0;
}
