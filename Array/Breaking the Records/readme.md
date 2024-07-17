## Problem description:  [click here](https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem)

### Solution:

```cpp
vector<int> breakingRecords(vector<int> scores) {
    int maxc=0, minc=0;
    int max = scores[0];
    int min = scores[0];
    for(int i=0; i<scores.size(); i++){

        if(scores[i]>max){
            max = scores[i];
            maxc++;
        }
        if(scores[i]<min){
            min = scores[i];
            minc++;
        }
    }
    vector<int> ans;
    ans.push_back(maxc);
    ans.push_back(minc);
    
    return ans;
}
```
