#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int **records, *gradenums_arr, courses, gradenums, grade, gradesum;
    double *average_arr, average_sum, overall;
    cout << "Enter number of courses: ";
    cin >> courses;

    records = new int * [courses];
    gradenums_arr = new int  [courses];
    average_arr = new double [courses];

    for(int r = 0; r < courses; r++) {
        records[r] = new int[r + 1];
        cout << "Enter number of grades: ";
        cin >> gradenums;
        cout << " ";

        gradenums_arr[r] = gradenums;
        gradesum = 0;

        for(int c = 0; c < gradenums; c++) {
            cout << "Enter grade: ";
            cin >> grade;
            cout << " ";
            records[r][c] = grade;
            gradesum += grade;
        }
        average_arr[r] = ( ((double)gradesum) / ((double)gradenums) );
        average_sum += average_arr[r];
        overall = average_sum / courses;
    }
        cout << endl;

    // print the array
    for(int r = 0; r < courses; r++) {
        cout << "Course " << r + 1 << ": final " << fixed << setprecision(2) << average_arr[r] << ", grades: ";

        for(int c = 0; c < gradenums_arr[r]; c++) {
            cout << records[r][c] << " ";
        }
        cout << endl;
    }
        cout << "Overall final " << overall << endl;
	return 0;
}
