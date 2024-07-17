## Problem description:  [click here](https://www.hackerrank.com/challenges/compare-the-triplets/problem)

### Solution:

```cpp
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int aC=0, bC=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]>b[i]){
            aC++;
        }
        else if(a[i]<b[i]){
            bC++;
        }
        else if(a[i]==b[i]){
            continue;
        }
    }
    vector<int>ans;
    ans.push_back(aC);
    ans.push_back(bC);
    
    return ans;
}
```
