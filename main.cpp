#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

// User class
class User {
private:

public:
};

// System Manager class
class SystemManager {
private:
public:
};

// Show main menu
void showMainMenu() {
    cout << "\n=== ACCOUNT AND REWARDS WALLET MANAGEMENT SYSTEM ===\n";
    cout << "1. Login\n";
    cout << "2. Register new account\n";
    cout << "3. Exit\n";
    cout << "Choose function (1-3): ";
}

// Show user menu
void showUserMenu() {
    cout << "\n=== USER MENU ===\n";
    cout << "1. View Account Information\n";
    cout << "2. Change Password\n";
    cout << "3. View Wallet Balance\n";
    cout << "4. Transfer Points\n";
    cout << "0. Logout\n";
    cout << "Choose function (0-4): ";
}

void showAdminmenu() {
	cout << "\n=== ADMIN MENU ===\n";
    cout << "1. View All Account Information\n";
    cout << "2. Register New Account\n";
    cout << "3. Edit Account Infomation\n";
    cout << "0. Logout\n";
    cout << "Choose function (0-3): ";
}



int main() {
    SystemManager system;
    int choice;
    bool running = true;
    
    while (running) {
        showMainMenu();
        
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            break;
        }
        
        
        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                running = false;
                cout << "Thank you for using the program!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    
    return 0;
} 
