#include<iostream>
#include<string>
#include <thread>
#include <chrono>

std::string s="Happy Birthday";
std:: string dot="Hi!\nYes you\nI have a secret message for you\nLet me first retrieve it\n..........................\nEncrypting Message\n.....................\n";
const std::string bcodes="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int main()
{
    for(char &c: dot)
    {
        if(c!='\n')
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        else
            std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout<<c;
    }

    std::cout<<std::endl;

    int x=0,
        b[]={3,15,63},
        i=0;

    for(char &c:s)
    {
        std::cout<<bcodes[(c>>2*(i+1))|x];
        x=(c&b[i])<<(((i++)*3+4)%5);
        if(2*(i+1)==8)
        {
            std::cout<<bcodes[x];
            x=0;
            i=0;
        }

    }
    if(x!=0)
        std::cout<<bcodes[x];
    x=(b[i]%5)-i;
    while(x<2)
    {
        if(x==-1)
            x++;
        std::cout<<"=";
        x++;
    }
    std::cout<<std::endl;
    return 0;
}
