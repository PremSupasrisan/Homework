#include <iostream>
#include <string>
using namespace std;
int main()
{
    int lines/*input*/,num/*output*/,star;
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
                for (star = 1; star <= num; star++)
                {cout << "*";}
                cout <<endl;
            }	break;
        }
        else if(menu =='2')
        {
            cout << "Input number of line : ";
            cin  >> lines;
            for ( num = 1; num <= lines; num++)
            {
                for (star = 1; star <= lines - num; star++)
                {cout << " ";}
                for(star = 1; star <= num ; star++)
                {cout <<"*";}
                cout << endl;
            }	break;
        }
        else if(menu =='3')
        {
            cout << "Input number of line : ";
            cin  >> lines;
            for (num = 1; num <= lines; num++)
            {
                for(star = 1; star<= lines - num; star++)
                {cout << " ";}
                for(star = 1; star <=(num*2)-1; star++)
                {cout << "*";}
                cout << endl;
            }	break;
        }
            
	}while (menu != '4'); 
    
    
    system("pause");
    return(0);
}