#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minDays(int* bloomDay, int bloomDaySize, int m, int k) {
    int start = bloomDay[0];
    int end = bloomDay[0];
    long ans = -1;

    // Finding the minimum and maximum bloom days
    for (int s = 1; s < bloomDaySize; s++) {
        if (start > bloomDay[s])
            start = bloomDay[s];
        if (end < bloomDay[s])
            end = bloomDay[s];
    }

    // If it's impossible to make m bouquets
    if (bloomDaySize < (long)m * (long)k) {
        return -1;
    } else {
        while (start <= end) {
            long long numberBouquets = 0;
            int flower = 0;
            long mid = start + (end - start) / 2;

            // Counting the number of bouquets that can be made by day 'mid'
            for (int i = 0; i < bloomDaySize; i++) {
                if (bloomDay[i] <= mid) {
                    flower++;
                    if (flower == k)//check karega if flower count req ke equal hai{
                        numberBouquets++;
                        flower = 0;
                    }
                } else {
                    flower = 0;//if ek bhi flower count discountinue hoga toh var reset to 0 kyuki adj he chaiyhe
                }
            }

            // Adjusting search range based on the number of bouquets(adj he flower must used)
            if (numberBouquets >= m) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
}

int main() {
    int n, m, k;
    cout << "Enter the number of days: ";
    cin >> n;
    int bloomDay[n];
    
    cout << "Enter the bloom days: ";
    for (int i = 0; i < n; i++) {
        cin >> bloomDay[i];
    }
    
    cout << "Enter the number of bouquets (m): ";
    cin >> m;
    
    cout << "Enter the number of flowers per bouquet (k): ";
    cin >> k;
    
    int result = minDays(bloomDay, n, m, k);
    
    if (result == -1) {
        cout << "It is not possible to make " << m << " bouquets with " << k << " flowers each.\n";
    } else {
        cout << "The minimum number of days required is: " << result << "\n";
    }
    
    return 0;
}
