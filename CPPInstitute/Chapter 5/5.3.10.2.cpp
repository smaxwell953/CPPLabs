#include <iostream>

class FlightBooking {
public:
  FlightBooking(int id, int capacity, int reserved);
  void printStatus();
  bool reserveSeats(int number_ob_seats);
  bool canceReservations(int number_ob_seats);
private:
  int id;
  int capacity;
  int reserved;
};

void FlightBooking::printStatus(){
    float percentage=float(reserved)/float(capacity)*100;
    std::cout<<"Flight ["<<id<<"] : ["<<reserved<<"]/["<<capacity<<"] (["<<percentage<<"]%) seats taken";
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    if(reserved < 0)
        this->reserved = 0;
    if(reserved * 100 / capacity > 105)
        this->reserved = 105 * capacity / 100;
    else
        this->reserved = reserved;
    this->capacity = capacity;
}

bool FlightBooking::reserveSeats(int number_ob_seats)
{
    if((reserved + number_ob_seats) * 100 / capacity > 105)
        return false;
    reserved += number_ob_seats;
    return true;
}

bool FlightBooking::canceReservations(int number_ob_seats);
{
    if(reserved < number_ob_seats)
        return false;

    reserved -= number_ob_seats;
    return true;
}

int main() {
  int reserved = 0,
      capacity = 0;
  std::cout << "Provide flight capacity: ";
  std::cin >> capacity;

  std::cout << "Provide number of reserved seats: ";
  std::cin >> reserved;

  FlightBooking booking(1, capacity, reserved);

  std::string command = "";
  while (command != "quit")
  {
    booking.printStatus();
    std::cout << "What would you like to do?: "
    std::cin.getline(command);

  }

  return 0;
}
