/*
@Nitish-Awasthi
*/
#include <bits/stdc++.h>
using namespace std;
string convert_ASCII(string hex){
   string ascii = "";
   for (size_t i = 0; i < hex.length(); i += 2){
      string part = hex.substr(i, 2);
      char ch = stoul(part, nullptr, 16);
      ascii += ch;
   }
   return ascii;
}
int main(){
   cout << convert_ASCII("4861707079204269727468646179") << endl;
   return 0;
}
