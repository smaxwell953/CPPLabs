#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "abcdefghijklmnopqrstuvwxyz", str2, temp;
    int arr[str1.length()] = {};
    getline(cin, str2);
    bool pangram = true;
    temp = str2;

    for(int i=0; i < str1.length(); ++i) {
        if(str2.find(str1[i]) == string::npos)
        {
            str2 = temp;
            if(arr[i] == 0)
            pangram = false;
        }
        else{
            arr[i]++;
            str2 = str2.substr(str2.find(str1[i]) + 1);
            i--;
            continue;
        }
    }

    if(pangram)
        cout << "Pangram" << endl;
    else
        cout << "Not pangram" << endl;

    for(int i = 0; i < str1.length(); ++i)
        cout << str1[i] << "-" << arr[i] << endl;

    return 0;
}
