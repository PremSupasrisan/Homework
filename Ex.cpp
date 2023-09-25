#include <iostream>
#include <iomanip>
using namespace std;
int num , quiz[10] , mid[10] , final[10] ;
void input();
void view();
void viewID();
int main()
{
	int  menu;
	do{
	cout << "===========================\n";
	cout << "	Menu			\n";
	cout << "===========================\n";
	cout << "1.Input student records\n";
	cout << "2.View all student records\n";
	cout << "3.Show a student by ID\n";
	cout << "4.Exit\n";
	cout << "Select menu : ";
	cin >> menu;
	if (menu == 1)
	{input();}
	else if (menu == 2)
	{view();}
	else if (menu == 3)
	{viewID();}
	}while(menu != 4);
	


	system("pause");
	return 0;
}


void input()
{
	cout << "Input Number of Student : ";
	cin >> num;
	for (int i = 1 ; i <= num ; i++){
		cout << "Number "<< i <<endl;
		cout << " Input Quiz :";
		cin >> quiz[i];
		cout << " Input Midterm :";
		cin >> mid[i];
		cout << " Input Final :";
		cin >> final[i];
	}
}

void view()
{
	cout << "--------------------------------\n";
	cout << "StdID	Quiz	Midterm	Final\n";
	cout << "--------------------------------\n";
	for (int i = 1; i<= num ; i++)
	{cout << i << "	" << quiz[i] << "	" << mid[i] << "	" << final[i] <<endl;}
	cout << "--------------------------------\n";
}

void viewID()
{
	int id ;
	cout << "Input ID:";
	cin >> id;
	for ( int i = 1 ; i <=num ; i++)
	{if( id == i){
	cout << "--------------------------------\n";
	cout << "StdID	Quiz	Midterm	Final\n";
	cout << "--------------------------------\n";
	cout << i << "	" << quiz[i] << "	" << mid[i] << "	" << final[i] <<endl;
	cout << "--------------------------------\n";
	
	}
	else
		cout << "Your ID is not found\n";
	}
}