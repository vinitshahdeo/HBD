#include<iostream>
using namespace std;
main(){
   char str[]="G`ooxAhqsgc`x",*p;
   p=str;
   while(*p!='\0')
      ++*p++;
   cout<<str;
}
