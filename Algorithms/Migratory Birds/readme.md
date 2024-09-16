## Problem Description: [Click Here](https://www.hackerrank.com/challenges/migratory-birds/problem)

### Solution in cpp:

```cpp
int migratoryBirds(vector<int> arr) {
    map<int, int>mp;
    int max=INT_MIN;
    int mi;
    for(size_t i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        if(it.second>max){
            max=it.second;
            mi=it.first;
        }
    }
    return mi;
}
```
