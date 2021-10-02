#include <iostream>
#include <string>

using namespace std;

int main()
{
    string code = "!%!?!%!#\"#%\"%\"!#!?!%!\"!\"!\"!$!!!$!\"!!!?\'!!$!!!$!!!$!#!?!%!!&!%\"%$!?!%!!!$!!!&!(!?!%!!!$!!!&!(!??&?!%!!!!%\"%!!$!!%$\"#!#!?!%!!!!!$!#!#!$!!!$!\"!\"!#!!!?&\"!!!$!#!#&!!$!!!$!#!?!%!!!!%$!#!$!!!$!!&#!?!%!!!!!#!$!#!$!!!$!!!$!#!?&\"!!!$!#!#!$!!%\"!$!#!?";

    int length = code.length();

    for (int i = 0, j = 0; i < length; i++, j++)
    {
        char ch = code[i];

        if(ch == '?')
        {
            cout << endl;
            if(j % 2 == 0)j--;
        }
        else if(j % 2 == 0)
        {
            for(int k=0 ; k<(int)(ch-32); k++)
                cout << "#";
        }
        else
        {
            for(int k=0 ; k<(int)(ch-32); k++)
                cout << " ";
        }
    }
    return 0;
}