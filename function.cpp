#include <iostream>
using namespace std;
void calCircle()
{
	float radius , area , circumfernce;
	cout << "Input radius : ";
	cin >> radius;
	area = 3.14*radius*radius;
	circumfernce = 2*3.14f*radius;
	cout << endl;
	cout << "Area of circle : " << area << endl;
	cout << "Circumference of circle : " << circumfernce << endl;
	cout << "Diameter of circle : " << (2*radius) << endl;
}

void calRec()
{
	float area , high , length;
	cout << "Input high";
	cin >> high;
	cout << "Input lenght";
	cin >> length;
	area = high * length;
	cout << endl;
	cout << "Area of rectangle : " << area <<endl;
	
}

int main()
{
	char menu ;
	do{
	cout << "Program Calculate of Area." << endl;
	cout << "****************************" << endl;
	cout << "1. Circle\n";
	cout << "2. Rectangle\n";
	cout << "3. Exit\n";
	cout << "Choose menu ";
	cin >> menu;
	if (menu == '1') calCircle();
	else if(menu =='2') calRec();
	else if(menu == '3') cout<< "Exit." <<endl;
	else cout<<"Wrong menu \n";
	}while(menu !='3');
	system("pause");
	return(0);
}