## Problem description:  ![](https://www.hackerrank.com/challenges/array-left-rotation/problem)

### Solution:

cpp
`
vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> ans;
    for(int i=d;i<arr.size();i++){
        ans.push_back(arr[i]);
    }
    for(int i=0; i<d; i++){
        ans.push_back(arr[i]);
    }
    return ans;
}
`
