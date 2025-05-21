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
    string username;
    string password;
    string fullName;
    string email;
    bool isAdmin;
    string walletId;
    double balance;

    // Simple password hash function, currently unused
    string hashPassword(const string& pwd) const {
        string hash = "";
        for(int i = 0; i < pwd.length(); i++) {
            hash += pwd[i] + 1; // Simple shift by 1
        }
        return hash;
        
    }

    // Generate simple wallet ID
    string generateWalletId() const {
        string id = "W";
        for(int i = 0; i < 6; i++) {
            id += '0' + (rand() % 10);
        }
        return id;
    }

public:
    User(const string& uname, const string& pwd, 
         const string& name, const string& mail, const double& balnc ,bool admin = false) {
        username = uname;
        password = pwd;
        fullName = name;
        email = mail;
        isAdmin = admin;
        balance = balnc;
        walletId = generateWalletId();
    }

    // Getters
    string getUsername() const { return username; }
    string getFullName() const { return fullName; }
    string getPassword() const { return password; }
    string getEmail() const { return email; }
    bool getIsAdmin() const { return isAdmin; }
    string getWalletId() const { return walletId; }
    double getBalance() const { return balance; }

    // Password verification
    bool verifyPassword(const string& pwd) const {
        return password == pwd;
    }

    // Change password
    void changePassword(const string& newPwd) {
        password = newPwd;
    }

    // Wallet operations
    bool transferPoints(double amount) {
        if (amount <= 0) return false;
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }

    void addPoints(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    
    void printUserInfo() {
    	cout << "=====USER INFO=====\n";
    	cout << "username: " +  username + "\n";
    	cout << "fullname: " + fullName + "\n";
    	cout << "email: " + email + "\n";
    	cout << "balance: " << balance << "\n";
	}
};

// System Manager class
class SystemManager {
private:
    User* users[100]; // Array of user pointers
    int userCount;
    double masterBalance;


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
