#include <iostream>
#include <string>
using namespace std;
int main()
{
    char char1,char2,char3;
    int val1,val2,val3;
    
    cout << "Run : ทดสอบด้วยการป้อน A B C  \n";
    cout << "Enter Character (A,B,C) : ";
    cin  >> char1;
    cout << "Enter Character (A,B,C) : ";
    cin  >> char2;
    cout << "Enter Character (A,B,C) : ";
    cin  >> char3;
    
    if (char1 == 'A') val1 = 10;
    else if (char1 == 'B') val1 = 20;
    else if (char1 == 'C') val1 = 30;
    
    if (char2 == 'A') val2 = 10;
    else if (char2 == 'B') val2 = 20;
    else if (char2 == 'C') val2 = 30;
    
    if (char3 == 'A') val3 = 10;
    else if (char3 == 'B') val3 = 20;
    else if (char3 == 'C') val3 = 30;
    
    cout << char1 << " = " << val1 << " , " << char2 << " , " << val2 << " , "  << char3  << " = " << val3<<endl;
    cout << char1 << " + " << char2 << " + " << char3 << " = " << val1 << " + "  << val2  << " + " << val3 << " = " << val1 + val2 + val3<<endl;
    
    system("pause");
    return(0);
}
