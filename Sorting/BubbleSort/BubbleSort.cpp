#include <iostream>
using namespace std;

/*
    {5, 20, 11, 12, 6, 10, 2, 15, 1, 3};

    Outer: perform length no. of those passes.
    Inner: perform each pass through the array where we'll swap elements that are next to each other.

    -Interate through an array, compare two values next to each other, if value on left is larger than value on right, swap them. This process will occur until ordered.
*/

void bubbleSort(int values[], int length);

int main()
{
    int intValues[] = {5, 20, 11, 12, 6, 10, 2, 15, 1, 3};
    int length = 10;

    bubbleSort(intValues, length);

    for(int i = 0; i < length; i++)
    {
        cout << "Position: " << i << " = " << intValues[i] << endl;
    }

    return 0;
}

void bubbleSort(int values[], int length)
{
//    for(int i = 0; i < length; i++)
//    {
//        for(int j = 0; j < length - 1; j++)
//        {
//            if(values[j] > values[j+1])
//            {
//                int temp = values[j];
//                values[j] = values[j+1];
//                values[j+1] = temp;
//            }
//        }
//    }

    bool swapped;
    int i = 0;
    do
    {
        swapped = false;
        for(int j = 0; j < length - 1 - i; j++)
        {
            if(values[j] > values[j+1])
            {
                int temp = values[j];
                values[j] = values[j+1];
                values[j+1] = temp;
                swapped = true;
            }
        }
        i++;
    }while(swapped);
}
