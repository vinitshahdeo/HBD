/* 
input format :
dd/mm 

*/
/*sample input :
02/10
*/

#include <iostream>
#include <ctime>
#include <cstring>
#define CTIME ctime(&Time) // IST
using namespace std;

int main() {
    string nameOfMonths[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int day, month, year;
    char x;
    string wish = "Happy birthday\nHope you enjoy your day with full of happiness.\nMay all your dreams come true.\nStay blessed!";
    wish.append(R"(
               🕯🕯🕯 
              ▅▅▅▅▅▅▅
             ░░░░░░░░░
            ▓▓▓▓▓▓▓▓▓▓   
            )");
    wish.append("\n");
    time_t Time = time(0) + 19800;
    tm* LT = localtime_r(&Time);
    cin >> day >> x >> month >> x >> year;
    string waitFor = "Wait until " + nameOfMonths[month-1] + " " + to_string(day) + ", ";
    waitFor.append((LT->tm_mon<month-1)? to_string(LT->tm_year + 1900) : (LT->tm_mon==month-1 && LT->tm_mday<day) ? to_string(LT->tm_year + 1900) : to_string(LT->tm_year + 1901));
    waitFor.append("\n");
    cout<<((LT->tm_mon == month-1 && LT->tm_mday == day)? wish : waitFor);
    cout<<"Current time(IST):\n"<<CTIME<<endl;
    // Feel free to report bugs! :)
    return 0;
}
