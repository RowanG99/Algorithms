#include <iostream>
using namespace std;

/*
    {5, 20, 11, 12, 6, 10, 2, 15, 1, 3};

    Outer loop: iterating over array.
    Inner loop: iterating over the unsorted portions.

    -Min value = 5
    -We compare this min value to the next value.
    -If the min value is lower than the next value, we continue till we find a value that is lower than the next value.
    -If the min value is greater than the next value, we swap them. This will start the next interation.
*/

void selectionSort(int values[], int length);

int main()
{
    int intValues[] = {5, 20, 11, 12, 6, 10, 2, 15, 1, 3};
    int length = 10;

    selectionSort(intValues, length);

    for(int i = 0; i < length; i++)
    {
        cout << "Position: " << i << " = " << intValues[i] << endl;
    }
    return 0;
}

void selectionSort(int values[], int length)
{
    for(int i = 0; i < (length - 1); i++)
    {
        int minPosition = i;
        for(int j = i + 1; j < length; j++)
        {
            if(values[j] < values[minPosition])
            {
                minPosition = j;
            }
        }
        if(minPosition != i)
        {
            int temp = values[i];
            values[i] = values[minPosition];
            values[minPosition] = temp;
        }
    }

}
