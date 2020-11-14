#include <iostream>
#include <string>

using namespace std;
//Lab 5.1.9.2

class Square
{
private:
    float side, area;
public:
    void set_side(float val){
        if(val > 0){
            side = val;
            area = side * side;
        }
    }
    void print(void){
        cout << "It's square with side " << side << " and area " << area;
    }
};

int main()
{
    Square s;
    s.set_side(3);
    s.print();

    cout << endl;
    return 0;
}
