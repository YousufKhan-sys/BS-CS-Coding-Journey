#include <iostream>
using namespace std;

void findTallest(int *arr, int size, int *tallestHeight, int *tallestIndex)
{

    *tallestHeight = *arr;
    *tallestIndex = 0;

    for (int i = 1; i < size; i++)
    {

        if (*(arr + i) > *tallestHeight)
        {
            *tallestHeight = *(arr + i);
            *tallestIndex = i;
        }
    }
}

int main()
{
    int heights[6] = {165, 180, 172, 190, 175, 168};

    int tallestHeight;
    int tallestIndex;

    findTallest(heights, 6, &tallestHeight, &tallestIndex);

    cout << "Tallest person's height: " << tallestHeight << " cm" << endl;
    cout << "Identity (index in array): " << tallestIndex << endl;

    return 0;
}
