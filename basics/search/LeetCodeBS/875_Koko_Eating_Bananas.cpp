// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

 

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30
// Example 3:

// Input: piles = [30,11,23,4,20], h = 6
// Output: 23
 

// Constraints:

// 1 <= piles.length <= 104
// piles.length <= h <= 109
// 1 <= piles[i] <= 109


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int size = piles.size();
        int start = 1;
        
        int max = piles[0];
        for (int i = 1; i < size; i++) {
            if (max < piles[i])
                max = piles[i];
        }
       
        int end = max;
        int K = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            long long s = 0;  // Use long long for the sum to avoid overflow
            for (int i = 0; i < size; i++) {
                s += (piles[i] + mid - 1) / mid;
            }
         
            if (s <= h) {
                K = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return K;  // Return the minimum valid eating speed
    }
};

int main() {
    int n, h;
    cout << "Enter the number of piles: ";
    cin >> n;

    vector<int> piles(n);
    cout << "Enter the number of bananas in each pile: ";
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    cout << "Enter the number of hours h: ";
    cin >> h;

    Solution solution;
    int result = solution.minEatingSpeed(piles, h);
    cout << "Minimum eating speed K: " << result << endl;
    
    return 0;
}
