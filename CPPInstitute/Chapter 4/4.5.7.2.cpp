#include <string>
#include <iostream>
//4.5.7.2

int main()
{
    std::string from;
    std::getline(std::cin, from);

    std::string to;
    std::getline(std::cin, to);

    std::string sentence;
    std::getline(std::cin, sentence);

    while(sentence.find(from) != string::npos){
        sentence = sentence.replace(sentence.find(from), from.length(), to);
    }

    std::cout << sentence << "\n";
    return 0;
}
