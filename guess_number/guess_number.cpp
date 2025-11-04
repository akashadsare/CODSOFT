#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    int target = dis(gen);
    int guess;
    
    cout << "Guess the number (1-100): ";
    
    while (cin >> guess) {
        if (guess == target) {
            cout << "Correct! You won!" << endl;
            break;
        }
        cout << (guess > target ? "Too high! " : "Too low! ") << "Try again: ";
    }
    
    return 0;
}