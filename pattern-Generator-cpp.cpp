#include<iostream>
using namespace std;

int main() {
    int choice, n;

    do {
        cout << "\n===== Pattern Generator =====\n";
        cout << "1. Square Pattern\n";
        cout << "2. Triangle Pattern\n";
        cout << "3. Floyd's Triangle\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 3) {
            cout << "Enter n: ";
            cin >> n;
        }

        // 🔹 Square Pattern
        if(choice == 1) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }

        // 🔹 Triangle Pattern
        else if(choice == 2) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }

        // 🔹 Floyd’s Triangle
        else if(choice == 3) {
            int num = 1;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j <= i; j++) {
                    cout << num << " ";
                    num++;
                }
                cout << endl;
            }
        }

        else if(choice == 4) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}