#include <iostream>
using namespace std;

void swapValues(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrangeBooks(int *arr, int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (*(arr + j) < *(arr + i))
            {
                swapValues(arr + i, arr + j);
            }
        }
    }
}

int main()
{
    int books[6] = {35, 20, 50, 10, 45, 25};

    cout << "Before arranging:\n";
    for (int i = 0; i < 6; i++)
        cout << books[i] << " ";
    cout << endl;

    arrangeBooks(books, 6);

    cout << "\nAfter arranging in ascending order:\n";
    for (int i = 0; i < 6; i++)
        cout << books[i] << " ";
    cout << endl;

    return 0;
}