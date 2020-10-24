#include <iostream>
using namespace std;
//3.2.12.1

int main(void) {
int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
int n = sizeof(vector) / sizeof(vector[0]);
// Insert your code here
int min = 0;
int *pvector = vector;
for (int i = 0; i < n;i++){
  if(*pvector < *(pvector + 1)){
     min = *pvector;
     pvector++;
  }else{
    pvector++;
  }
}
cout<< min;
return 0;
}
