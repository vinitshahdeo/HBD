#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
 string toHex(int num1){
 if (num1 == 0)
 return "0";
 u_int num = num1;
 string s = "";
 while (num) {
 int temp = num % 16;
 if (temp <= 9)
 s += (48 + temp);
 else
 s += (87 + temp);
 num = num / 16;
 }
 reverse(s.begin(), s.end());
 return s;
 }
};
int main(){
 Solution ob;
 string message="Happy Birthday";
 for(int i=0;i<message.size();i++){
     cout << (ob.toHex(message[i]));
 }
 
 return 0;
}
