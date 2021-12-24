
using namespace std;
#include <iostream>
#include <vector>

vector<int> twoSum(vector<int>& nums, int target) {
    bool found = false;
    vector<int> target_indices;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                target_indices.push_back(i);
                target_indices.push_back(j);
                found = true;
                break;
            }
        }
    }
    if (found == false) {
        cout << "not exists" << endl;
    }
    return target_indices;
}

int main() {

    vector<int> nums = { 2,11,7,15 };
    int target = 18;

    vector<int> target_indices = twoSum(nums,target);

    auto it = target_indices.begin();
    for (; it != target_indices.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}

