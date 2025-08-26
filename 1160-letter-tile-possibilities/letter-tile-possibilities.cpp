class Solution {
public:
    unordered_map<char , int>mapping;
    int backTrack(string tiles){
        int result = 0;

       for(auto &p : mapping){
            char c = p.first;
            if(mapping[c] > 0){
                mapping[c]--;
                result += 1 + backTrack(tiles);
                mapping[c]++;
            }
       }
       return result;
    }
    int numTilePossibilities(string tiles) {
        for(char tile : tiles){
            mapping[tile]++;
        }
        return backTrack(tiles);
    }
};