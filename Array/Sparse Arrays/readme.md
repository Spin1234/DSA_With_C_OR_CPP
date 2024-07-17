## Problem description:  [click here](https://www.hackerrank.com/challenges/sparse-arrays/problem)

### Solution:

```cpp
vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int> ans;
    int c=0;
    for(int i=0;i<queries.size();i++){
        for(int j=0;j<stringList.size();j++){
            if(queries[i].compare(stringList[j])==0){
                c++;
            }
        }
        ans.push_back(c);
        c=0;
    }
    return ans;
}
```
