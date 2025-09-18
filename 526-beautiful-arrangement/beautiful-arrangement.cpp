class Solution {
public:
    void allPossibleArrangements(vector<int>& num, int i, int& count) {
        if (i >= num.size()) {
            count++;
            return;
        }

        for (int j = i; j < num.size(); j++) {
            if ((i + 1) % num[j] == 0 || num[j] % (i + 1) == 0) {
                swap(num[i], num[j]);
                allPossibleArrangements(num, i + 1, count);
                swap(num[i], num[j]);
            }
        }
    }
    int countArrangement(int n) {
        // create Num vector
        vector<int> num;
        for (int i = 1; i <= n; i++) {
            num.push_back(i);
        }
        int count = 0;
        allPossibleArrangements(num, 0, count);
        return count;
    }
};