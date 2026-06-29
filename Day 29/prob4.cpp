/*Write a program to Create inventory management system*/
#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    double price;
};

int main()
{
    Product inventory[100];
    int count = 0;
    int choice;

    do
    {
        cout << endl;
        cout << "********** INVENTORY MANAGEMENT SYSTEM **********" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Display Products" << endl;
        cout << "3. Search Product" << endl;
        cout << "4. Update Quantity" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Product ID: ";
            cin >> inventory[count].id;

            cout << "Enter Product Name: ";
            cin >> inventory[count].name;

            cout << "Enter Quantity: ";
            cin >> inventory[count].quantity;

            cout << "Enter Price: ";
            cin >> inventory[count].price;

            count++;

            cout << "Product Added Successfully!" << endl;
            break;

        case 2:
            if (count == 0)
            {
                cout << "No products available." << endl;
            }
            else
            {
                cout << endl;
                cout << "ID\tName\tQuantity\tPrice" << endl;

                for (int i = 0; i < count; i++)
                {
                    cout << inventory[i].id << "\t"
                         << inventory[i].name << "\t"
                         << inventory[i].quantity << "\t\t"
                         << inventory[i].price << endl;
                }
            }
            break;

        case 3:
        {
            int id;
            bool found = false;

            cout << "Enter Product ID to search: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (inventory[i].id == id)
                {
                    cout << "Product Found!" << endl;
                    cout << "ID: " << inventory[i].id << endl;
                    cout << "Name: " << inventory[i].name << endl;
                    cout << "Quantity: " << inventory[i].quantity << endl;
                    cout << "Price: " << inventory[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Product not found!" << endl;
            }

            break;
        }

        case 4:
        {
            int id;
            bool found = false;

            cout << "Enter Product ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (inventory[i].id == id)
                {
                    cout << "Enter New Quantity: ";
                    cin >> inventory[i].quantity;

                    cout << "Quantity Updated Successfully!" << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Product not found!" << endl;
            }

            break;
        }

        case 5:
            cout << "Exiting Inventory Management System..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}