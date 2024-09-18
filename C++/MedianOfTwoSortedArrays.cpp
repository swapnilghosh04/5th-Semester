#include <iostream>
using namespace std;

void merge (int arr[], int nums1[], int nums2[], int low, int mid, int high) {

    int l = 0, r = 0;
    int x = low;

    while (l < (mid + low - 1) && r < (high - mid)) {

        if (nums1[l] <= nums2[r]) {

            arr[x] = nums1[l];
            x++;
            l++;

        } else {

            arr[x] = nums2[r];
            x++;
            r++;

        }
    }

    while (l < (mid + low - 1)) {

        arr[x] = nums1[l];
        x++;
        l++;

    }
    while (r < (high - mid)) {

        arr[x] = nums2[r];
        x++;
        r++;

    }

}

void merge_sort (int arr[], int low, int high) {

    if (low <= high) {

        int mid = (low + high) / 2;

        merge_sort (arr, low, mid);
        merge_sort (arr, mid + 1, high);
        merge (arr, nums1, nums2, low, mid, high);

    }

}

int main () {
    
    int m, n, i, nums1[1000], nums2[1000], arr[1000];

    cout << "Enter the length of nums1[] array: ";
    cin >> m;

    cout << "Enter the length of nums2[] array: ";
    cin >> n;

    cout << "Enter the elements of nums1[] array:" << endl;
    for(i = 0; i < m; i++) {

        cout << "nums1[" << i << "] = ";
        cin >> nums1[i];

    }

    cout << "Enter the elements of nums2[] array:" << endl;
    for(i = 0; i < n; i++) {

        cout << "nums2[" << i << "] = ";
        cin >> nums2[i];

    }

    merge_sort(arr, 0, 3);
    cout << "merged array = [";
    for (i = 0; i < (m + n); i++) {

        cout << arr[i] << ","; 
    }
    cout << "] ";

}