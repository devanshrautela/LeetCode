// C++ Solution
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;

        // Insert array elements in a map as a key. There are no duplicate in unordered map, so for same elemts, corresponding value will be increased.
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }

         //Create another unordered map for storing the occurrences (freq) of array elemnts
        unordered_map<int, int> mp;

        for(auto it = m.begin(); it != m.end(); it++){
            // Adding the number of occurrences of array elements in new map (mp)
            mp[it->second]++;
        }

        for(auto x = mp.begin(); x != mp.end(); x++){
            // If two or more array elements have same frequency, return false
            if((x->second) > 1){
                return false;
            }
        }
        return true;
    }
};

// Runtime: 0 ms, faster than 100% of C++ online submissions
