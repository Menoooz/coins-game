// Purpose: The players take turns removing coins from a pile of coins,    always removing a non-zero square number of coins. The player who removes the last coin wins.

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

bool nonZeroSquare(int num) {
    if (num <= 0) 
        return false;
    int square = sqrt(num);
    return square * square == num;
}

int main() {
    cout << "Welcome to the 'Subtract a square' game." << endl;
    
    cout << "Choose if you want to enter the number of coins or you want a random number" << endl;
    cout << "Enter '1' if you want to choose the number of coins" << endl;
    cout << "Enter '2' if you want a random number of coins" << endl;
    int choice;
    cin >> choice;

    while (true) {
        if (choice == 1) {
            int x = 0;
            int coins;
            while (x != 1) {
                cout << "Make sure the number of coins is not a square number" << endl;
                cout << "Enter the number of coins you want to start the game with: ";
                cin >> coins;
                if (nonZeroSquare(coins))
                    cout << "Not a valid number" << endl;
                else
                    x = 1;
            }
        int i = 1;
        while (coins >= 0) {
            int num;
            if (i % 2 != 0) {
                cout << "Player 1 enter your number: ";
                cin >> num;
                if (!nonZeroSquare(num))
                    cout << "Not valid, please enter a square number" << endl;
                else if (num > coins)
                    cout << "Please enter a number less than or equal " << coins << endl;
                else {
                    coins -= num;
                    if (coins == 0){
                        cout << "The winner is Player 1" << endl;
                        break;}
                    else
                        cout << "Now the number of coins is: " << coins << endl;
                    i++;
                }
            } else {
                cout << "Player 2 enter your number: ";
                cin >> num;
                if (!nonZeroSquare(num))
                    cout << "Not valid, please enter a square number" << endl;
                else if (num > coins)
                    cout << "Please enter a number less than or equal " << coins << endl;
                else {
                    coins -= num;
                    if (coins == 0){
                        cout << "The winner is Player 2" << endl;
                        break;}
                    else
                        cout << "Now the number of coins is: " << coins << endl;
                    i++;
                }
            }
        }
    
            break;
        } else if (choice == 2) {
            int x = 0;
            int randomNum;
            srand(time(NULL));
            while (x != 1) {
                randomNum = rand() % 401 + 100; // Generate random number between 100 and 500
                if (!nonZeroSquare(randomNum)) {
                    cout << "The number of coins is " << randomNum << endl;
                    x = 1;
                }
            }
        int i=1;    
        while (randomNum >= 0) {
            
            int num;
            if (i % 2 != 0) {
                cout << "Player 1 enter your number: ";
                cin >> num;
                if (!nonZeroSquare(num))
                    cout << "Not valid, please enter a square number" << endl;
                else if (num > randomNum)
                    cout << "Please enter a number less than or equal " << randomNum << endl;
                else {
                    randomNum -= num;
                    if (randomNum == 0){
                        cout << "The winner is Player 1" << endl;
                        break;}
                    else
                        cout << "Now the number of coins is: " << randomNum << endl;
                    i++;
                }
            } else {
                cout << "Player 2 enter your number: ";
                cin >> num;
                if (!nonZeroSquare(num))
                    cout << "Not valid, please enter a square number" << endl;
                else if (num > randomNum)
                    cout << "Please enter a number less than or equal " << randomNum << endl;
                else {
                    randomNum -= num;
                    if (randomNum == 0){
                        cout << "The winner is Player 2" << endl;
                        break;}
                    else
                        cout << "Now the number of coins is: " << randomNum << endl;
                    i++;
                }
            }
        }
    

    return 0;

            break;
        } else {
            cout << "Please choose '1' or '2'" << endl;
            cin >> choice;
        }
    }}
