## Problem description: [click here](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)

### Solution(C++): 

```cpp

int birthdayCakeCandles(vector<int> candles) {
    auto max_e = max_element(candles.begin(), candles.end());
    // max_element returns an iterator to the max element address.
    
    return count(candles.begin(), candles.end(), *max_e);
}
```

In C++, use std::max_element(candles.begin(), candles.end()) to get an iterator to the maximum element, then dereference it to get the value.

In C++, use std::count(candles.begin(), candles.end(), max_height) to count the number of occurrences of the maximum height.
