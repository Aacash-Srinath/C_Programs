/*
Write a C++ Program to define a Map that stores (Name ,Score) key-value pairs. 
Do the following operations in the map. 

1) Insert  10 key-value pairs. 
2) Display  particular person’s score when name is given. 
3) Remove the particular key-pair when name  is given. 
*/

#include <iostream>
#include <map>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string, float> student;
    string name;
    float score;

    // Reading Name-Score Pairs From User
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter Name :: ";
        cin >> name;

        cout << "Enter Score :: ";
        cin >> score;

        student.insert(pair <string, float> (name, score));
    }

    // Using Name To Search For Entered Marks
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        cout << "\n\nEnter Name To Check Marks :: ";
        cin >> name;
        cout << name << " :: " << student[name];

        cout << "\n\nDo You Want To Check Again? (y/n) :: ";
        cin >> choice;
    }

    // Deleting The Name-Score Pair Of Given Name
    choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        cout << "\n\nEnter Name To Delete Records :: ";
        cin >> name;
        
        student.erase(name);

        cout << "\n\nDo You Want To Delete Another Record? (y/n) :: ";
        cin >> choice;
    }

    map <string, float> :: iterator ptr;

    for (ptr = student.begin(); ptr != student.end(); ptr++)
    {
        cout << "\t" << ptr->first << " :: " << ptr->second << "\n";
    }

    return 0;
}