#include <iostream>
#include <string>
using namespace std;
int main()
{   
	string Name;
	int Salary, Sale ;
	float Commission;
	cout << "Enter Name   : ";
	cin  >> Name;
	cout << "Enter Salary : ";
	cin  >> Salary;
	cout << "Enter Sale   : ";
	cin  >> Sale;
	cout << "Enter Comission Percent : ";
	cin >> Commission;
	cout <<"--------Output--------\n";
	cout << "Your Name : "<< Name <<endl;
	cout<<"Total Revenue "<< Salary + (Sale*(Commission/100))<<" Bath "<<endl;
	system("pause");
    return (0);
}
