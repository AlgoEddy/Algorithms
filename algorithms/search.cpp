#include <bits/stdc++.h>

using namespace std;

class Search {
public:
    int binarySearch(vector<int> A, int target) {
        int low = 0;
        int high = A.size();
        
        while (low <= high) {
            int mid = (low + high) / 2;

            if (A[mid] == target) {
                return mid;
            }

            if (A[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return -1;
    }
}