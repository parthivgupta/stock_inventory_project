#include <iostream>
#include <cctype>
#include <string>
#include <stdlib.h>
#include "addProduct.h"
#include "deleteProduct.h"
#include "modifyProduct.h"
#include "viewProduct.h"
using namespace std;

void mainScreen()
{
    cout << "***************************************************************" << endl;
    cout << "*        WELCOME TO STOCK INVENTORY MANAGEMENT SYSTEM         *" << endl;
    cout << "***************************************************************" << endl;
    cout << endl;
    cout << "MENU" << endl;
    cout << endl;
    cout << "[1] ADD PRODUCT" << endl;
    cout << "[2] DELETE PRODUCT" << endl;
    cout << "[3] MODIFY PRODUCT" << endl;
    cout << "[4] VIEW PRODUCT" << endl;
    cout << "[5] EXIT" << endl;
}
void checkUserInput()
{
    int userInput;
    cout << endl;
    cout << "Enter the option to proceed" << endl;
    cin >> userInput;
    if (userInput == 1)
    {
        addProduct x;
        x.getData();
        // x.postCompletion();
        mainScreen();
        checkUserInput();
    }
    else if (userInput == 2)
    {
        cout << "Option " << userInput << " is selected" << endl;
    }
    else if (userInput == 3)
    {
        cout << "Option " << userInput << " is selected" << endl;
    }
    else if (userInput == 4)
    {
        cout << "Option " << userInput << " is selected" << endl;
    }
    else if (userInput == 5)
    {
        bool exitValue;
        cout << "Are you sure to exit the inventory? 1/0" << endl;
        cin >> exitValue;
        if (exitValue)
        {
            system("CLS");
            cout << "THANK YOU!!!";
        }
        else
        {
            system("CLS");
            mainScreen();
            checkUserInput();
        }
    }
    else
    {
        cout << "Enter a valid option." << endl;
        checkUserInput();
    }
}

int main()
{

    mainScreen();
    checkUserInput();
    return 0;
}