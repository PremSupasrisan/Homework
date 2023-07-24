#include <iostream>
#include <string>
using namespace std;
int main()
{
	int Score ;
	cout << "Input C++ score : ";
	cin  >> Score;
	cout << "You "<<((Score >= 50 ) ? "pass with score " : "fail with score ")<<Score<<";"<<endl;
	system ("pause");
	return(0);
}