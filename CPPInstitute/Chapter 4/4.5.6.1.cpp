#include <string>
#include <iostream>
//4.5.6.1

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    int index = sentence.find("  ");

    while(index != -1)
    {
        sentence.replace(index, 2, " ");
        index = sentence.find("  ");
    }

    cout << std::sentence << "\n";
    return 0;
}
