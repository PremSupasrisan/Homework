#include <iostream>
#include <string>
#include <time.h>
using namespace std;
void checkNum(int r, int guess); 

int main() {
    int guess, r, t = 0;
    cout << "###Welcome to guessing number game###\n";
    srand(time(NULL));
    r = 1 + rand() % 10;
    cout << "Secret number has been chosen\n";
    do {
        cout << "Guess the number (1 to 10): ";
        cin >> guess;
		t++;
        checkNum(r, guess);
    } while (r != guess);

    cout << "You made " << t << " guesses\n";

    system("pause");
    return 0;
}

void checkNum(int r, int guess  ) { 
    if (guess < r)
        cout << "The secret number is higher\n";
    else if (guess > r)
        cout << "The secret number is lower\n";
    else
        cout << "Congratulations!\nThe secret number is " << r << endl;
}