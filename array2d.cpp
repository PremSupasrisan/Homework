#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void display(int num[3][3], string name[3]);
float check_grade(int score);
void gpa (float grade);
int main()
{   int num[3][3];
    string name[3];
int score=0;
    for(int i=0;i<3;i++)
    {   cout<<"Student "<<i+1<<endl;
        cout<<"Enter Name ["<<i+1<<"] :";
        cin>>name[i];
        for(int j=0;j<3;j++)
        {   cout<<"Enter Score  ["<<i<<"]["<<j<<"] :" ;
            cin>>num[i][j];
        }
    }
display(num,name);
    system("pause");
    return 0;
}
void display(int num[3][3], string name[3])
{
int score=0;
cout<<"Show Scores"<<endl;
    cout<<setfill('-')<<setw(40)<<""<<endl;
    cout<<"Student\tMath\tScience\tEnglish\tGPA\n";
    cout<<setfill('-')<<setw(40)<<""<<endl;
    for(int i=0;i<3;i++)
    {    cout<<i+1<<" "<<name[i]<<"\t";
            float grade=0;
        for(int j=0;j<3;j++)
        {   
            score = num[i][j];
            cout<<num[i][j];
            grade = check_grade(score)+grade;
        }
        gpa(grade);
        cout<<endl;
    }
    cout<<setfill('-')<<setw(40)<<""<<endl;
    cout<<"Grade Call function Check_Grade()"<<endl;
}
float check_grade(int score)
{
    float num;
    if (score >= 80 && score <=100){
        cout<<"(A)";
        num = 4.0;
    }else if (score >= 75){
        cout<<"(B+)";
        num = 3.5;
    }else if (score >= 70){
        cout<<"(B)";
        num = 3.0;
    }else if (score >= 65){
        cout<<"(C+)";
        num = 2.5;
    }else if (score >= 60){
        cout<<"(C)";
        num = 2.0;
    }else if (score >= 55){
        cout<<"(D+)";
        num = 1.5;
    }else if (score >= 50){
        cout<<"(D)";
        num = 1.0;
    }else if (score >= 0){
        cout<<"(F)";
        num = 0.0;
    }else {
        cout<<"(error)";
    }
    cout<<"\t";
    return(num);
}
void gpa (float grade)
{
float gpa=0;
    gpa = (grade*3)/(3*3);
    cout << fixed << setprecision(2) <<gpa;
}