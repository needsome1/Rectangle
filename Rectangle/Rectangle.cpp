

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter weight of rectangle" << endl;
    int weight;
    cin >> weight;
    cout << "Enter height of rectangle" << endl;
    int height;
    cin >> height;
    cout << "Choose symbole" << endl;
    char symbol;
    cin >> symbol;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <=weight; j++)
        {
            cout << symbol;
            
        }
        cout << endl;
    }
}

