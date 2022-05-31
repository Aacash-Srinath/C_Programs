/*
5.	Write a C++ program to define a set to store set of Integers. 
Display the following Menu to the user, read the user choice 
and perform the operation accordingly. Implement the menu operations 
using a Switch-Case Statement. 

1.	Insert element into the set
2.	Delete element from the set
3.	Display the size of the set
4.	Find an element in the set
5.	Display the set using Iterator
*/

#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    set <int> num_set;

    int ele, i, choice;

    cout << "\n====================Set Operations====================\n\n";
    cout << "1. Insert Element\n";
    cout << "2. Delete Element\n";
    cout << "3. Display Size of Set\n";
    cout << "4. Find Element\n";
    cout << "5. Display Set\n";
    cout << "6. Exit Program\n";

    cout << "\nEnter Choice :: ";
    cin >> choice;

    while (choice)
    {
        switch (choice)
        {
            case (1):
            {
                cout << "\n==========Insertion Of Element==========\n";
                cout << "\nEnter Element :: ";
                cin >> ele;

                num_set.insert(ele);
                break;
            }

            case (2):
            {
                cout << "\n==========Deletion Of Element==========\n";
                cout << "\nEnter Element To Be Deleted :: ";
                cin >> ele;
                num_set.erase(ele);
                break;
            }

            case (3):
            {
                cout << "\n==========Displaying Size Of Set==========\n";
                if (num_set.size())
                {
                    cout << "\nSize Of The Set Is :: " << num_set.size();
                    break;
                }

                else
                {
                    cout << "\nThere Is No Element In The Set";
                    break;
                }
            }

            case (4):
            {
                cout << "\n==========Finding Element In Set==========\n";
                cout << "\nEnter Element To Find :: ";
                cin >> ele;

                int Index = 1, ctr = -1;
                for (auto u : num_set) 
                {
                    if (u == ele)
                    {
                        cout << "\nElement Found At Index :: " << Index-1;
                        ctr = 1;
                    }
                    Index++;
                }

                if (ctr == -1)
                {
                    cout << "\nElement Not Present In The Set";
                }

                break;
            }

            case (5):
            {
                cout << "\n==========Displaying The Set==========\n";
                set <int> :: iterator itr;

                if (*num_set.begin())
                {
                    cout << "\nElements In The Set Are :: ";
                    for (itr = num_set.begin(); itr != num_set.end(); itr++)
                    {
                        cout << "\t" << *itr << "\t";
                    }
                }

                else
                {
                    cout << "\nThere Are No Elements Present In The Set";
                }
                cout << "\n";
                break;
            }

            case (6):
            {
                cout << "\n==========Exiting The Program==========\n\n";
                exit(1);
            }

            default:
            {
                cout << "\n\nWrong Input Entered!!";
                break;
            }
        }

        cout << "\n\n====================Set Operations====================\n\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Display Size of Set\n";
        cout << "4. Find Element\n";
        cout << "5. Display Set\n";
        cout << "6. Exit Program\n";

        cout << "\nEnter Choice :: ";
        cin >> choice;
    }

    return 0;
}