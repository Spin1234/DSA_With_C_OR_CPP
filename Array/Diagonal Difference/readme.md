## Problem description:  [click here](https://www.hackerrank.com/challenges/diagonal-difference/problem)

### Solution:

```c
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int lr=0, rl=0;
    int n=arr_rows;
    for(int i=0;i<n;i++){
        lr=lr+arr[i][i];
        rl=rl+arr[i][n-i-1];
    }
    int diff=lr-rl;
    return abs(diff);
}
```
