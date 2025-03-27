#include<iostream>
#include<string>

using namespace std;

int main()
{
    int size = 6;
    int arr[size];
    cout << "Test" << endl;
    try{
        for(int i = 0; i < 10, i++;){
            if(i >= size){
                cout << "Throwing out of range exception" << endl;
                throw out_of_range("array index out of range");
                cout << "Throwing failure" << endl;
            }
            
        arr[i] = i;
        cout << arr[i] << endl;
        }
    }
    catch(out_of_range e)
    {
        cout << "Exception caught:" << e.what() << endl;
    }
}