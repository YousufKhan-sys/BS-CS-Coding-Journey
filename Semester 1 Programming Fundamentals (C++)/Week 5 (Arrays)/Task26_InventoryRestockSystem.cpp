#include <iostream>
#include <string>
using namespace std;

int main()
{
    string products[5] = {"apples", "oranges", "bananas", "bread", "milk"};
    int stock[5] = {120, 80, 60, 50, 100};
    string restock_product, choice;
    int quantity = 0;

    do
    {
        bool found = false;
        cout << "Enter product name to restock (all letters must be small): ";
        cin >> restock_product;
        for (int i = 0; i < 5; i++)
        {
            if (restock_product == products[i])
            {
                cout << "Enter the quantity to restock: ";
                do
                {
                    cin >> quantity;
                    if (quantity < 0)
                        cout << "Enter valid value for quantity: ";
                } while (quantity < 0);

                stock[i] += quantity;
                cout << products[i] << " successfully updated with " << stock[i] << " units in stock." << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Product not found in the inventory." << endl;

        cout << "Do you want to update quantity of another product? (y/n): ";
        cin >> choice;

    } while (choice == "y" || choice == "Y");

    cout << "Exiting program...." << endl
         << "Thank you!" << endl;

    return 0;
}