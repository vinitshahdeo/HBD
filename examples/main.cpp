#include <iostream>

using namespace std;

int main()
{
    char message[] ="Mfuu~%Gnwymif~%?.";

    for(int i=0; i<17; i++)
    {
        cout<<char((int)(message[i])-5);
    }
    return 0;
}
