#include <iostream>
using namespace std;

int main() {
    int n;
    int max = 0, min = 22;
    cin>>n;
    int *arr = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++){
        arr[i] = 1+ rand()%20;
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Even numbers: ";
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            cout<<arr[i]<<" ";
            if (arr[i] > max)
                max = arr[i];
        }
    }
    cout<<endl<<"Max element: "<<max<<endl;
    cout<<"Odd numbers: ";
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 1){
            cout<<arr[i]<<" ";
            if (arr[i] < min)
                min = arr[i];
        }
    }
    cout<<endl<<"Min element: "<<min;
    return 0;
}
