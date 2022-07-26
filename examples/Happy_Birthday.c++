#include<iostream>
using namespace std;
int main(){
   char str[]="G`ooxAhqsgc`x",*p;
   p=str;
   while(*p!='\0')
      ++*p++;
   cout<<str;
}
