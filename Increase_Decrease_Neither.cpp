// Write a program that reads three numbers and prints “increasing” if they are in
// increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its
// predecessor. The sequence 3 4 4 would not be considered increasing.
// Name: Zuhayer Tashin
// Instructor: Tong Yi
// Subject: CSCI-135

#include <iostream>
using namespace std;

int main(){
    int num_1; // Declared the first number variable
    cout << "Enter the First Number: ";
    cin >> num_1; // User input for the first number

    int num_2; // Declared the second number variable
    cout << "Enter the Second Number: ";
    cin >> num_2; // User input for the second number

    int num_3; // Declared the third number variable
    cout << "Enter the Third Number: ";
    cin >> num_3; // User input for the third number

    if(num_1 > num_2 && num_2 > num_3){ // By decreasing order

        cout << "Decreasing" << endl;

    } else if(num_1 < num_2 && num_2 < num_3){ // By increasing order

        cout << "Increasing" << endl;

    } else{ // By No order
        cout << "Neither" << endl;
    }

    return 0;

}