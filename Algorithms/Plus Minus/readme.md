## Problem description: [click here](https://www.hackerrank.com/challenges/plus-minus/problem)

### Solution(C++):

```cpp
void plusMinus(vector<int> arr) {
    int p=0;
    int ne=0;
    int z=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            p++;
        }
        if(arr[i]<0){
            ne++;
        }
        if(arr[i]==0){
            z++;
        }
    }
    cout<<setprecision(6)<<(float)p/n<<endl;
    cout<<setprecision(6)<<(float)ne/n<<endl;
    cout<<setprecision(6)<<(float)z/n<<endl;
}
```
