#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
char a[7][15]={'0'};
//h
for(int i=0;i<7;i++)
{
  a[i][0]='#';
}

for(int i=1;i<4;i++)
{
    a[3][i]='#';
}

for(int i=0;i<7;i++)
{
  a[i][4]='#';
}

//b

for(int i=0;i<7;i++)
{
  a[i][6]='#';
}

for(int i=0;i<7;i++)
{
    if(i==0 || i==3 || i==6)
    {
        a[i][7]='#';
        a[i][8]='#';
    }
}

for(int i=0;i<7;i++)
{
   if(i!=0 && i!=3 && i!=6)
    {
        a[i][9]='#';}
}
//d

for(int i=0;i<7;i++)
{
 a[i][11]='#';
}

for(int i=0;i<7;i++)
{
   if(i==0 || i==6)
   {a[i][12]='#';
   a[i][13]='#';
   a[i][14]='#';
   }
}

for(int i=0;i<7;i++)
{
if(i!=0 && i!=6)
 a[i][15]='#';
}
for(int i=0;i<7;i++)
{
    for(int j=0;j<16;j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
}
return 0;}
