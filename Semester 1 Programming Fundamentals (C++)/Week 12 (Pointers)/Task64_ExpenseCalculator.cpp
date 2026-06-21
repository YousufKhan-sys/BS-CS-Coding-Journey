#include <iostream>
using namespace std;

void calculateExpense(int *arr, int size, int *total, double *average)
{
    *total = 0;

    for (int i = 0; i < size; i++)
    {
        *total += *(arr + i);
    }

    *average = (double)(*total) / size;
}

int main()
{
    int expenses[5] = {1200, 800, 600, 900, 1500};
    int total;
    double avg;

    calculateExpense(expenses, 5, &total, &avg);

    cout << "Total Expenditure: " << total << endl;
    cout << "Average Spending per Person: " << avg << endl;

    return 0;
}
