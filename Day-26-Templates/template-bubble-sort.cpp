// C++ program to implement 
// Bubble sort 
// using template function

#include <iostream>
using namespace std;

// A template function to implement bubble sort 
// we can use this for any dat type that supports 
// comparison operator < and swap works for it.

template <class T> void bubbleSort(T a[], int n)
{
    for (int i =0; i < n -1; i++)
        for(int j = n -1; i< j; j--)
            if(a[j] < a[j-1])
                swap(a[j], a[j-1]);
}

// main code 
int main()
{
    int a[5] = {9,80,85,3,6};
    int n = sizeof(a) / sizeof(a[0]);

    //calls template function 
    bubbleSort<int> (a,n);

    cout << " Sorted array : ";
    for(int i =0; i< n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;    
}

