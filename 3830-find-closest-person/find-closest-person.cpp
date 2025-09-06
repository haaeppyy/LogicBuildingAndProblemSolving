class Solution {
public:
    int findClosest(int x, int y, int z) {
        int stepPersonOne = abs(z - x);
        int stepPersonTwo = abs(z - y);
        if( stepPersonOne == stepPersonTwo) return 0;
        
        return stepPersonOne < stepPersonTwo ? 1 : 2;    
    }
};