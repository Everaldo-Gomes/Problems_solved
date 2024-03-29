class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
        
        for (int i = 0; i < numbers.size(); i++) { 
            for (int j = i+1; j < numbers.size(); j++) {
                
                if (numbers[i] + numbers[j] == target) {    
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break;
                }

                if (numbers[i] == numbers[j]) {
                    i = j;
                }
            }
        }
        
        return ans;
    }
};

/*

time limit execeeded

 for (int i = 0; i < numbers.size(); i++) {
            for (int j = i+1; j < numbers.size(); j++) {
                
                if (numbers[j] > target) {
                    break;
                }
                
                if (numbers[i] + numbers[j] == target) {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break;
                }
            }
        }

*/
