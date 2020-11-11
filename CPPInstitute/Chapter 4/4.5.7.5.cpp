#include <string>
#include <iostream>
//4.5.7.5

int main()
{
    std::string pattern;
    std::getline(std::cin, pattern);

    std::string sentence;
    std::getline(std::cin, sentence);

    regReplace(pattern, "D", "[0-9]");
    regReplace(pattern, "A", "\\w");
    regReplace(pattern, "?", ".");

    regex rgx(pattern);
    smatch match;

    while (regex_search(sentence, match, rgx)) {
        cout << match[0] << endl;
        nextPosition = match.position() + 1;

        if(nextPosition == sentence.length())
            break;

        sentence = sentence.substr(nextPosition);

    std::cout << std::sentence << "\n";
}
