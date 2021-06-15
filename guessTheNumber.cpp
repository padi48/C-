#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    int num, guess, tries;
    cout << "This is my first Guess the number game in C++!\n";
    num = rand() % 100 + 1;
    cout << "Guess the number between 0 and 100!\n";

    do
    {
        cin >> guess;

        if (guess > num) {
            cout << "Too high!\n";
            tries++;
        } else if (guess < num) {
            cout << "Too low!\n";
            tries++;
        } else {
            cout << "Congrats, you've guessed " << num << " just in " << tries << " tries!";
        }
    } while (guess != num);

    return 0;
}
