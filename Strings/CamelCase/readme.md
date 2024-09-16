## Problem Description: [Click Here](https://www.hackerrank.com/challenges/camelcase/problem)

### Solution in cpp:

```cpp

int camelcase(string s) {
    int c=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            c++;
        }
    }
    return c+1;
}
```
