#include <iostream>
using namespace std;
//Lab 7.3.7.1

int main()
{
    string path;
    Matrix matrix;

    cout << "Enter path to file for read matrix:" << endl;
    getline(cin, path);

    try{
        matrix.LoadMatrix(path);

        cout << "Matrix:" << endl << matrix.GetMatrixElement(0, 0) << " " << matrix.GetMatrixElement(0, 1) <<
            endl << matrix.GetMatrixElement(1, 0) << " " << matrix.GetMatrixElement(1, 1) << endl;

        cout << "Enter path to file for save matrix:" << endl;
        getline(cin, path);

        matrix.SaveMatrix(path);
    }
    catch (const exception& e){
        cout << e.what() << endl;
    }

    return 0;
}
