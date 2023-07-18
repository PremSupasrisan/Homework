#include <iostream>
#include <string>
using namespace std;

int main()
{
	int money;
	  cout << "Amount to be withdraw: ";
	  cin  >> money;
	  cout << "1000: "<<money/1000<<endl;
	  cout << " 100: "<<(money%1000)/100<<endl;
	  cout << "  50: "<<((money%1000)%100)/50<< endl;
	  cout << "  20: "<<(((money%1000)%100)%50)/20<< endl;
	system("pause");
	return(0);
}

