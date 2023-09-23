#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	cout << "Element Value Histogram\n\n";
	srand(time(NULL));
	for (int i = 0; i < 10 ; i++)
	{
		int r = 1+rand() % 30;
		cout << "	" << i << "	"<< r <<"	";
		for ( int j = 0 ; j < r ; ++j)
		{	cout << "*";
		}
		cout <<endl;
	}
	
	
	system("pause");
	return 0;
}

