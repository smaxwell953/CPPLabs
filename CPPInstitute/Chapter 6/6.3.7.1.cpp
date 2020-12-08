#include <iostream>
#include <string>

//Lab 6.3.7.1
using namespace std;

class IPAddress
{
    protected:
            string ip;
    public:
        IPAddress(const IPAddress &ip)
        {
            this->ip = ip.ip;
        };
        IPAddress(string ip)
        {
            this->ip = ip;
        };
        void virtual Print()
        {
            cout << this->ip << endl;
        }
};

class CheckedIPAddress : IPAddress
{
    public:
        CheckedIPAddress(string ip) : IPAddress(ip)
        {
            correct = check(ip);
        }
        CheckedIPAddress(const CheckedIPAddress &ip) : IPAddress(ip)
        {
            this->correct = ip.correct;
        }
        void Print()
        {
            cout << this->ip << (correct ? " - Correct" : " - Not Correct") << endl;
        }
    private:
        bool correct;

        bool String2Int(const string& str, int& result) {
            string::const_iterator i = str.begin();

            if (i == str.end())
                return false;

            bool negative = false;

            if (*i == '-')
            {
                negative = true;
                ++i;

                if (i == str.end())
                    return false;
            }

            result = 0;

            for (; i != str.end(); ++i)
            {
                if (*i < '0' || *i > '9')
                    return false;

                result *= 10;
                result += *i - '0';
            }

            if (negative)
            {
                result = -result;
            }

            return true;
        }
};

int main()
{
	string sIP, sCIP, sCIP2;

	cin >> sIP;
	cin >> sCIP;
	cin >> sCIP2;

	IPAddress ip = IPAddress(sIP);
	CheckedIPAddress cip = CheckedIPAddress(sCIP);
	CheckedIPAddress cip2 = CheckedIPAddress(sCIP2);

    cout << endl;
	ip.Print();
	cip.Print();
	cip2.Print();


	return 0;
}
