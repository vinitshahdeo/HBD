#include <iostream>
using namespace std;

int main()
{
    cout << "DRAWING BIRTHDAY CAKE USING C++\n"
         << endl;
    cout << "     *        *        *\n    ***      ***      ***" << endl;
    for (int x = 0; x < 3; x++)
    {
        cout << "    |-|      |-|      |-|" << endl;
    }
    cout << "____|-|______|-|______|-|___" << endl;
    cout << "|==========================|" << endl;
    for (int x = 0; x < 2; x++)
    {
        cout << "|      HAPPY BIRTHDAY      |\n|~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    }
    cout << "|__________________________|\n \n 🎶🎶🎶🎶🎶🎶🎶";
}