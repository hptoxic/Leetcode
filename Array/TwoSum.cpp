class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> store;
        int size = numbers.size();
        for(int i=0; i<size; i++)
        {
            if(store.find(target-numbers[i])==store.end())
                store[numbers[i]] = i+1;
            else
            {
                vector<int> result(2,0);
                result[0] = store[target-numbers[i]];
                result[1] = i+1;
                return result;
            }
        }
    }
};