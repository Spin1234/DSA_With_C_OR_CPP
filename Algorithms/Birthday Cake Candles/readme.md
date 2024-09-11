## Problem description: [click here](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)

### Solution(C++): 

```cpp

int birthdayCakeCandles(vector<int> candles) {
    auto max_e = max_element(candles.begin(), candles.end());
    // max_element returns an iterator to the max element address.
    
    return count(candles.begin(), candles.end(), *max_e);
}
```

>> max_element returns an iterator to the max element address.
