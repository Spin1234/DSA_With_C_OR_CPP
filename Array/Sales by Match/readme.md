## Problem description:  [click here](https://www.hackerrank.com/challenges/sock-merchant/problem)

### Solution:

```cpp
int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(), ar.end());
    int pairs=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==ar[i+1]){
            pairs++;
            i++;
        }
    }
    return pairs;
}
```
