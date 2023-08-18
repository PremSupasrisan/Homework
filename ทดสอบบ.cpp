#include <iostream>
#include <string>
using namespace std;
int main() 
{
    char menu;
    float salary,sale,comm,total;
    
    
    
    cout << "1. Input Salary\n";
    cout << "2. Input Sale\n";
    cout << "3. Report\n";
    cout << "4. Exit\n";
    do{
    cout << "Enter menu : ";
    cin >> menu;
        if (menu =='1')
        {   cout << "Input Salary : ";
            cin >> salary;
        }
        else if (menu =='2')
        {   cout << "Input Sale : ";
            cin >> sale;
            if (sale <= 10000)
            {   comm = sale*(5.0/100);}
            else if (sale >10000 && sale<=20000)
            {comm = sale*(10.0/100);}
            else if (sale > 20000)
            {comm = sale*(15.0/100);}
            
        }
        else if (menu =='3')
        {   total = salary + comm;
            cout<<"---------------------\n";
            cout <<"Salary    = "<<salary<<endl;
            cout <<"Sale      = "<<sale<<endl;
            cout <<"Commision = "<<comm<<endl;
            cout <<"Total     = "<<total<<endl;
            cout<<"--------------------\n";
        }
        else if (menu =='4')
        {   cout <<"---Exit--\n";
            
        }
            
        
    }while(menu !='4');
    
    
    
    
        
    
    
    
    system("pause");
    return 0;
}