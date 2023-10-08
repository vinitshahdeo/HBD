#include<bits/stdc++.h>

using namespace std;

int main(){
    string str="Gzoox Asqxotcz";
    int val=1;

    for(char &c:str){
        if(isalpha(c))
        c=c+val;
    }
    cout<<str<<endl;
    return 0;
}