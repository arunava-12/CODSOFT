#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    int number = rand() % 100 + 1;
    int guess;

    cout << "Guess the secret number between 1 and 100!\n";

    while (true) {
        cout << "Enter your guess Number : ";
        cin >> guess;

        if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed it correct and the number is : " << number <<endl;
            break;
        }
    }

    return 0;
}
