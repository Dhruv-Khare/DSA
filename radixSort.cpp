#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &nums, int n, int exp) {
    vector<int> c(10, 0); 
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        int digit = (nums[i] / exp) % 10;
        c[digit]++;
    }

    for (int i = 1; i < 10; i++) {
        c[i] += c[i - 1];
    }

    for (int j = n - 1; j >= 0; j--) {
        int digit = (nums[j] / exp) % 10;
        b[c[digit] - 1] = nums[j];
        c[digit]--;
    }

    for (int i = 0; i < n; i++) {
        nums[i] = b[i];
    }
}

vector<int> sortArray(vector<int>& nums) {
    int n = nums.size();
    int max_num = *max_element(nums.begin(), nums.end());

    for (int exp = 1; max_num / exp > 0; exp *= 10) {
        countingSort(nums, n, exp);
    }
    return nums;
}

void traverse(const vector<int> &res) {
    int n = res.size();
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
}

int main() {
    vector<int> nums = {5, 3, 2, 1};
    vector<int> res = sortArray(nums);
    traverse(res);
    return 0;
}
