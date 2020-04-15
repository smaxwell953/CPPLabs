#include <iostream>
using namespace std;
//2.3.19.6

int main(void) {
    int n,s,c;

    cout << "Enter a value greater than 2 and less than 9: ";
    cin >> n;

    if(n > 2 && n < 9)
    //Top
    {
        for(int i=0; i<(n-1); i++)
        {
            cout << " ";
            s++;
        }
        cout << "*";
        cout << " " << endl;
        
    //Between top and base
    for (int i = 0; i < n -2; i++)
    {
        for(int i=0; i<(n-1); i++)
        {
            cout << " ";
            s++;
        }
        cout << "*";
        
        for(int i=0; i<(n-1); i++)
        {
            cout << " ";
            s++;
        }
        cout << "*";
        cout << " " << endl;
    }
    //Base
    {
        for(int i=0; i < ((n*2)-1); i++){
        cout << "*";
    }
    }
    }
    else
    {
        cout << "Invalid input.";
        return 0;
    }
}