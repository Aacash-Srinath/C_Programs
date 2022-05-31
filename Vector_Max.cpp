/*
Write a C++ Function template to find the maximum element in an Array.
Include main function to call the function with different types of input like int, float and double. 
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

template <typename T>
T max_ele(T arr[], int length)
{
    T max_val = (T) 0;

    for(int i = 0; i < length; i++)
    {
        if(max_val < arr[i])
        {
            max_val = arr[i];
        }
    }

    cout << "\nMaximum Value Of Given Array Is :: " << max_val << "\n\n";

    return 0;
}

int main()
{
    int num_array[] = {12,45,21,34,95,656,3,54,81,65,1,84,99,2,3,78};

    int len = sizeof(num_array) / sizeof(int);

    max_ele(num_array, len);

    return 0;
}