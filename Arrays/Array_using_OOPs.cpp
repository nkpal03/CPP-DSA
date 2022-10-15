#include <bits/stdc++.h>
using namespace std;
// implementation of Array using OOPs
// defining global variable of name size with value 100
#define size 100

// class Array
class Array
{
private:
    int arr[size]; // allocating memory to Array with name arr
    static int counter;

public:
    void add();     // adds element to array
    void pop();     // removes the element you want from the array
    void display(); // diplays element in array
};

int Array::counter = 0;

void Array::add()
{
    cout << "Enter number to add :";
    int n;
    cin >> n;
    arr[counter] = n;
    counter++;
}

void Array::pop()
{
    cout << "Enter the number to delete:";
    int x;
    cin >> x;
    for (int i = 0; i <= counter; i++)
    {
        if (arr[i] == x)
        {
            for (int j = i; j < counter; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    counter--;
}

void Array::display()
{
    for (int i = 0; i < counter; i++)
        cout << arr[i] << " ";
}

int32_t main()
{
    Array arr; // creating object for class Stack
    int choice;
    do
    {
        cout << "1.Add element\n2.Remove element\n3.Display all elements\n99.Exit\n>>";
        cin >> choice;
        switch (choice)
        {
        case 1:
            arr.add();
            cout << "\n";
            break;
        case 2:
            arr.pop();
            cout << "\n";
            break;
        case 3:
            arr.display();
            cout << "\n";
            break;
        case 99:
            break;
        default:
            cout << "Enter a valid input." << endl;
            break;
        }
    } while (choice != 99);
    return 0;
}
