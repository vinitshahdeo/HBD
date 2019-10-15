//     ______________________________
//    |created by SAURAV JAISWAL🇮🇳|
//    |    Date --  15/10/2019       | 
//    |______________________________|

#include <io.h>
#include <fcntl.h>
#include <stdio.h>

#define C L"\u2592"
#define B L"\u2593"
#define A L"\u2594"
void utf16(){_setmode(fileno(stdout),_O_U16TEXT);wprintf(L"\xfeff");}

int main() {
    utf16();
    
     fputws(L"🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉",stdout);
     
     fputws(L"🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊🎊",stdout);
     

      fputws(L"\n\t              ¡ ¡*¡ ¡", stdout);
     
fputws(L"\n\t\t       \u2593\u2592\u2592\u2592\u2592\u2593", stdout);
     wprintf(L"\n\t\t     %s%s%s%s%s%s%s%s%s%s",B,C,C,C,C,C,C,C,C,B);
     
    wprintf(L"\n\t\t   %s%s%s%s%s%s%s%s%s%s%s%s%s%s",B,C,C,C,C,C,C,C,C,C,C,C,C,B);
    
    wprintf(L"\n\t\t  %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\t🗡️",B,C,C,C,C,C,C,C,C,C,C,C,C,C,C,B);
    wprintf(L"\n\t\t%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",A,A,A,A,A,A,A,A,A,A,A,A,A,A,A,A,A,A,A,A);
    
wprintf(L"\n\t        🎂 HAPPY BIRTHDAY 🎂");
    
    return 0;
}
