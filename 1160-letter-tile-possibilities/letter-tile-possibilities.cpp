class Solution {
public:
    unordered_set<string> seen;
    
    void backtrack(string &tiles, vector<bool> &used, string current) {
        if (!current.empty()) {
            seen.insert(current);
        }
        for (int i = 0; i < tiles.size(); i++) {
            if (used[i]) continue;
            used[i] = true;
            backtrack(tiles, used, current + tiles[i]);
            used[i] = false;
        }
    }
    
    int numTilePossibilities(string tiles) {
        vector<bool> used(tiles.size(), false);
        backtrack(tiles, used, "");
        return seen.size();
    }
};
