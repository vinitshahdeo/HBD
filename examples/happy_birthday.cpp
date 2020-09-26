#include<iostream>
using namespace std;
int main()
{
    string s = "SZKKB{YRIGSWZBz";
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        char c = 90+65-s[i];
        cout<<c;
    }
    return 0;
}
