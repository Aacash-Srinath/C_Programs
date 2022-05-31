/*
Write a C++ program to store a set of ‘n’ words in a vector, sort the same and display it.
*/

#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <string> words;
    string input;
    int num;

    cout << "\nEnter Number Of Words :: ";
    cin >> num;
    cout << "\n";

    for (int i = 0; i < num; i++)
    {
        cout << "Enter Word " << i+1 << ":: ";
        cin >> input;

        words.push_back(input);
    }

    sort(words.begin(), words.end());

    cout << "\nThe Sorted List Is :: \n";
    vector <string> :: iterator ptr;
    for (ptr = words.begin(); ptr != words.end(); ptr++)
    {
        cout << *ptr << "\n";
    }

    return 0;
}