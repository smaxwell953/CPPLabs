#include <string>
#include <iostream>
//4.5.7.8

int main()
{
    std::string values;
    std::getline(std::cin, values);

    std::string template;
    std::getline(std::cin, template);

    while(commaIndex != -1) //Take all keys and values before each comma
    {
        takeFirstElementSeparatedByComma(values, commaIndex, key, value);
        commaIndex = values.find(",");
    }
    takeFirstElementSeparatedByComma(values, values.length(), key, value); //take last key and value, after all commas

    for(int i = 0; i < key.size(); ++i)
    {
        regexIndex = mytemplate.find(key[i]);
        while(regexIndex != -1)
        {
            mytemplate.replace(regexIndex, key[i].length(), value[i]);
            regexIndex = mytemplate.find(key[i]);
        }
    }

    std::cout << template << "\n";
}}
