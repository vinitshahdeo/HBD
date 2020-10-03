#include <iostream>
#include <bits/stdc++.h>


std::string  generateKey(std::string message,std::string k)
{
    int x=message.size();

    for(int i=0;;i++)
    {
        if(x==i)
        {
            i=0;
        }
        if(k.size()==message.size())
        {
            break;
        }
        k.push_back(k[i]);
    }
    return k;
}

std::string originalText(std::string encMessage,std::string key)
{
    std::string orig_Text;

    for(int i=0;i<encMessage.size();i++)
    {
        char x=(encMessage[i]-key[i]+26)%26;
        
        x+='A';

        orig_Text.push_back(x);
    }

    return orig_Text;
}

int main()
{

    std::string encMess="dihwujayppvhu";
    std::string key=generateKey(encMess,"wish");
    std::string text=originalText(encMess,key);
    std::cout<<text.substr(0,text.size()-8)<<' '<<text.substr(text.size()-8,text.size()-1)<<std::endl;

    return 0;
}