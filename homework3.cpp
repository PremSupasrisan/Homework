#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int quizz1,quizz2,quizz3,mid,final;
    float total1,total2;
    cout << "==========QUIZZES================\n";
    cout << "Enter first quizz (10):";
    cin  >> quizz1;
    cout << "Enter second quizz(10):";
    cin  >> quizz2;
    cout << "Enter third quizz (10):";
    cin  >> quizz3;
    cout << "==========MID-TERM==============\n";
    cout << "Enter mid term (40): ";
    cin  >> mid;
    cout << "==========FINAL=================\n";
    cout << "Enter final (50):";
    cin  >> final;
    total1 = (float)(quizz1 + quizz2 +quizz3)/3;
    cout << "Quizz Total:"<<total1<<endl;
    cout << "Mid term:"<<mid<<endl;
    cout << "Final:"<<final<<endl;
    total2 = (float)total1+mid+final;
    cout <<"Total:"<<total2<<endl;
    cout <<"Your score is"<<((total2 >= 50) ? "PASS" : "FAIL")<<endl;
	system("pause");
    return 0;
}