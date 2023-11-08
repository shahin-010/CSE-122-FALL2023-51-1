#include <iostream>
using namespace std;

class Array {
private:
    int iarr[100];
    char cArr[100];
    double fArr[100];
    int iIndex = 0;
    int cIndex = 0;
    int fIndex = 0;

public:

    void insert(int index, int value) {
        if (index >= 0 && index <= iIndex){
            iarr[index] = value;
            iIndex++;
        }
    }

    void insert(int index, char value) {
        if (index >= 0 && index <= cIndex){
            cArr[index] = value;
            cIndex++;
        }
    }


    void insert(int index, double value) {
        if (index >= 0 && index <= fIndex){
            fArr[index] = value;
            fIndex++;
        }
    }


    void display() {

        for (int i = 0; i < iIndex; i++) {
            cout << iarr[i] << " ";
        }
        cout<<endl<<endl;

        for (int i = 0; i < cIndex; i++) {
            cout << cArr[i] << " ";
        }
        cout<<endl<<endl;

        for (int i = 0; i < fIndex; i++) {
            cout << fArr[i] << " ";
        }
        cout<<endl<<endl;
    }
};

int main() {
    Array arr;

    arr.insert(0, 50);
    arr.insert(1, 100);
    arr.insert(0, 'z');
    arr.insert(0, 2.5);


    arr.display();

    return 0;
}
