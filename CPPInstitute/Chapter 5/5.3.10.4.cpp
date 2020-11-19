#include <iostream>
//Lab 5.3.10.5

class Gym
{
private:
	int id;
	string name;
	int countMonths;
public:
	void set_id(int id);
	void set_name(string name);
	void set_countMonth(int count);
	int get_id();
	string get_name();
	int get_countMonth();
	static Gym* create(int id, string name, vector<Gym*> &vector);
	static void deleteG(int id, vector<Gym*> &vector);
	static void extend(int id, int n, vector<Gym*> &vector);
	static void cancel(int id, vector<Gym*> &vector);
};

int main()
{
	vector<Gym*> gyms;
	string command;
	int id;
	char name[100];
	int monthCount;
	while (true)
	{
		cout << "Enter command: ";
		cin >> command;
		if (command == "quit")
			break;
		cout << "Enter the id: ";
		cin >> id;
		if (command == "create")
		{
			cout << "Enter the name: ";
			cin.ignore();
			cin.getline(name, sizeof(name));
			Gym* gym = Gym::create(id, string(name), gyms);
		}
		else if (command == "extend")
		{
			cout << "Enter a count of months: ";
			cin >> monthCount;
			Gym::extend(id, monthCount, gyms);
		}
		else if (command == "cancel")
		{
			Gym::cancel(id, gyms);
		}
		else if (command == "delete")
		{
			Gym::deleteG(id, gyms);
		}
		else
		{
			cout << "Command is undefined";
		}
		int index = select(gyms, id);
		if (index != -1)
			cout << "Member " << id << " : " << name << ", subscription valid for " << gyms[index]->get_countMonth() << " months \n";
	}

	return 0;
}
