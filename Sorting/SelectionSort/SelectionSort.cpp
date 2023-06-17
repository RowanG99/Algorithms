#include <iostream>
using namespace std;

void userInput(int &size, int (&arr)[10])
{
    cout << "Add " << size << " elements to the array." << endl;
    for(int i = 0; i < size; i++)
    {
        int value = 0;
        cout << "Provide the value for position: " << i << endl;
        cin >> value;
        arr[i] = value;
    }

    cout << "Unsorted Array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectSort(int &size, int (&arr)[10])
{
    int minValue = 0;
    for(int i = 0; i < size; i++)
    {
        minValue = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[minValue])
            {
                minValue = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minValue];
        arr[minValue] = temp;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int sizeOfArray = 10;

    int unsortedArray[10];

    userInput(sizeOfArray,unsortedArray);
    selectSort(sizeOfArray,unsortedArray);

    return 0;
}
