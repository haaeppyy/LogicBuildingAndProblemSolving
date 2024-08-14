class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target)
    { 
        vector <int > ans;
        int start = 0;
        int size=arr.size();
    int end = size - 1;
    int mid;
    int first = -1, last = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            first = mid;
            last = mid;
            // Use linear search to find the first occurrence
            int temp = mid;
            while (temp > start && arr[temp - 1] == target) {
                first = temp - 1;
                temp--;
            }
            // Use linear search to find the last occurrence
            temp = mid;
            while (temp < end && arr[temp + 1] == target) {
                last = temp + 1;
                temp++;
            }
            break;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
        
    }
  
};