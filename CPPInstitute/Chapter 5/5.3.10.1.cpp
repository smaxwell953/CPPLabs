#include <iostream>

using namespace std;
//Lab 5.3.10.1

class FlightBooking {
public:
  FlightBooking(int id, int capacity, int reserved);
  void printStatus();
private:
  int id;
  int capacity;
  int reserved;
};

void FlightBooking::printStatus()
{
    cout.precision(0);
    cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << fixed << (float)reserved / capacity * 100 << "%) seats reserved";
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    this->capacity = capacity;
    this->reserved = reserved;
}

int main() {
  int reserved = 0,
      capacity = 0;
  std::cout << "Provide flight capacity: ";
  std::cin >> capacity;

  std::cout << "Provide number of reserved seats: ";
  std::cin >> reserved;

  FlightBooking booking(1, capacity, reserved);

  booking.printStatus();

  return 0;
}
