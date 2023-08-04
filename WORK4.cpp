#include <iostream>
#include <string>
using namespace std;
int main()
{
	int age;
	float height,weight,bmi;
	string gender;
	 cout << "    Age : ";
	 cin  >> age;
	 cout << " Gender : ";
	 cin  >> gender;
	 cout << " Height : ";
	 cin  >> height;
	 cout << " Weight : ";
	 cin  >> weight;
	 bmi = weight /((height/100)*(height/100));
	 
	if (bmi < 18.5) cout<<" BMI = "<<bmi<<" kg/m2"<<" (Underweight)\n";
		else if ((bmi >= 18.5)&&(bmi < 25)) cout <<" BMI = "<<bmi<<" kg/m2"<<" (Normal)\n";
		else if ((bmi >= 25)&&(bmi < 30)) cout <<" BMI = "<<bmi<<" kg/m2"<<" (Overweight)\n";
	else cout<<" BMI = "<<bmi<<" kg/m2"<<" (Obesity)\n";

	
	
	
	system("pause");
	return(0);
}