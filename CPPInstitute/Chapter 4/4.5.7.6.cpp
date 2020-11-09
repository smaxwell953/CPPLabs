#include <string>
#include <iostream>
//4.5.7.6

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    sentence = Star(sentence, "\\*[^_]*\\*","_[^\\*]*_");

    while(sentence.find('*') != -1){
        sentence.erase(sentence.find('*'), 1);
    }
    while(sentence.find('_') != -1){
        sentence.erase(sentence.find('_'), 1);
    }

    std::cout << sentence << "\n";
}
