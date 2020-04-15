#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    std::cout << std::fixed;
    
    float var1 = 2.3;
    std::cout << std::setprecision(1) << var1 << '\n';
    
    float var2 = 2.3;
    std::cout << std::setprecision(2) << var2 << '\n';
    
    float var3 = 2.123456;
    std::cout << std::setprecision(6) << var3 << '\n';
    
    float var4 = 2.123456;
    std::cout << std::setprecision(2) << var4 << '\n';
    
    int var5 = 2.123456;
    std::cout << var5;
    
    return 0;
}