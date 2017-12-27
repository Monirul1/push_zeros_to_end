#include <iostream>
using namespace std;

void fillArray(int arr[], int numOfElements);
void printArray(int arr[], int n);
void pushZerosToEnd(int arr[], int n);

int main ()
{
    int arr[100], numOfElements;
    
    cout << "How many elements you want to insert? ";
    cin >> numOfElements;
    cout << "Enter your elements (with a space): ";
    fillArray(arr, numOfElements);
    cout << "Elements after zeros puses to last: ";
    pushZerosToEnd(arr, numOfElements);
    
    return 0;
}

void fillArray(int arr[], int numOfElements)
{
    for (int i = 0; i < numOfElements; ++i)
        cin >> arr[i];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl ;
}

void pushZerosToEnd(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j < n-1; ++j)
                arr[j] = arr[j+1];
            arr[n-1] = 0;
        }
    }
    printArray(arr, n);
}

/* ----SAMPLE RUN---
 How many elements you want to insert? 6
 Enter your elements (with a space): 0 1 2 3 0 4
 Elements after zeros puses to last: 1 2 3 4 0 0
 Program ended with exit code: 0
 */


