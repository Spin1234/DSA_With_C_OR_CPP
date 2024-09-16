## Subarray Division
### Problem Description: [Click Here](https://www.hackerrank.com/challenges/the-birthday-bar/problem)

### Solution in cpp:

```cpp
int birthday(vector<int> s, int d, int m) {
    int c=0;
    int sum=0;
    for(int i=0; i<m; i++){
        sum=sum+s[i];
    }
    if(sum==d){
        c++;
    }
    for(int i=m; i<s.size(); i++){
        sum=sum+s[i]-s[i-m];
        if(sum==d){
            c++;
        }
    }
    return c;
    
}
```

