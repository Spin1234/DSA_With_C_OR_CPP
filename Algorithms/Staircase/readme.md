## Problem description:  [click here](https://www.hackerrank.com/challenges/staircase/problem)

### Solution:

```c
void staircase(int n) {
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            printf(" ");
        }
        for(int p=0;p<=i;p++){
            printf("#");
        }
        printf("\n");
    }
}
```
