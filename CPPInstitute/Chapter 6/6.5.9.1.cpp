#include <iostream>
#include <string>
//Lab 6.5.9.1

class Engine
{
    public:
        Engine(string capacity = "1.0") {this->capacity = capacity;}
        void Print()
        {
            cout << "Engine: " << capacity << endl;
        }
    private:
        string capacity;
};

class Wheel
{
    public:
        Wheel(int diameter = 16) {this->diameter = diameter;}
        void Print()
        {
            cout << "Wheel: " << diameter <<"inches" << endl;
        }
    private:
        int diameter;
};

int main()
{
    Car car;
    car.Print();
    return 0;
}
