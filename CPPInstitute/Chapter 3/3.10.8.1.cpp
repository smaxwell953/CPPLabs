#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//3.10.8.1

int main(void) {
	int maxball;
	int ballsno;

	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));

	int *ball=new int[ballsno];
    for(int b=0; b<ballsno; b++){
        int b1=RandBall(maxball);
        while (isin(b1, ballsno, b))
        b1= RandBall(maxball);
        ballsno [b]=b1;}
    for (int b=0; b<ballsno;b++)
    cout<<ballsno[b]<<"";
    cout<<endl;
    delete[]ballsno;

	return 0;
}
