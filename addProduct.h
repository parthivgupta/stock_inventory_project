#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class addProduct
{
    string productName, manufacturingDate, productID, type;
    int quantity;
    double price;

public:
    void getData()
    {
        system("CLS");
        cout << "Enter the product type: " << endl;
        cin >> type;
        cout << "Enter the product name: " << endl;
        cin >> productName;

        cout << "Enter the product quantity: " << endl;
        cin >> quantity;

        cout << "Enter the product price: " << endl;
        cin >> price;

        cout << "Enter the product manufacturing date: " << endl;
        cin >> manufacturingDate;

        cout << "Enter the product ID: " << endl;
        cin >> productID;

        system("CLS");
        cout << "---- Data stored Successfully. ----" << endl;

        // cout << "***********************************" << endl;
        cout << endl;
    }

    // void postCompletion()
    // {
    //     cout << "****************************************" << endl;
    //     cout << "Go to home screen? 1/0" << endl;

    //     bool postCompletion;
    //     cin >> postCompletion;
    //     if (postCompletion)
    //     {

    //         mainScreen();
    //     }
    //     else
    //     {
    //         cout << "Thank You! Exiting the inventory" << endl;
    //     }
    // }
};
