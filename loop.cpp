#include <iostream>
#include <string>
using namespace std;
int main()
{
    int lines,num,quan;
    char menu;
    
    cout << "Select Menu\n";
    cout << "*********************\n";
    cout << "1. Align Left\n";
    cout << "2. Align Right\n";
    cout << "3. Center\n";
    cout << "4. Exit\n";
    cout << "*********************\n";
    cout << "Select Menu No. : ";
    cin >> menu;
    
    do{
        if (menu =='1')
        {
            cout << "Input number of line : ";
            cin  >> lines;
            for ( num = 1; num <= lines; num++)
            {
                for (quan = 1; quan <= num; quan++)
                {cout << "*";}
                cout <<endl;
            }break;
        }
        else if(menu =='2')
        {
            cout << "Input number of line : ";
            cin  >> lines;
            for ( num = 1; num <= lines; num++)
            {
                for (quan = 1; quan <= lines - num; quan++)
                {cout << " ";}
                for(quan = 1; quan <= num ; quan++)
                {cout <<"*";}
                cout << endl;
            }break;
        }
        else if(menu =='3')
        {
            cout << "Input number of line : ";
            cin  >> lines;
            for (num = 1; num <= lines; num++)
            {
                for(quan = 1; quan<= lines - num; quan++)
                {cout << " ";}
                for(quan = 1; quan <=(num*2)-1; quan++)
                {cout << "*";}
                cout << endl;
            }break;
        }
            
    }while (menu == '4'); 
    
    
    system("pause");
    return(0);
}