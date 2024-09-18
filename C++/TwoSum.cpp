#include <iostream>
using namespace std;

int main() {

    int n, i, j, arr[1000], target;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout<< "nums = [";
    for(i = 0; i < n; i++) {

        cin >> arr[i];

        if(i != (n-1))
            cout << ",";

    }
    cout<<"], target = ";
    cin >> target;
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target)
                cout << "[" << i << "," << j << "]";
        }

        cout << endl;
    }

}