#include <string>
#include <iostream>
//4.5.7.3

bool iequals(const string& a, const string& b)
{
    unsigned int sz = a.size();
    if (b.size() != sz)
        return false;
    for (unsigned int i = 0; i < sz; ++i)
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    return true;
}

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
