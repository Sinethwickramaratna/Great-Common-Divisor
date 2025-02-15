This C++ program calculates the Greatest Common Divisor (GCD) of two numbers using the Euclidean algorithm and recursion. Let's break it down step by step.

**Code Breakdown:**

```cpp
#include <iostream>
using namespace std;
```
- `#include <iostream>`: This line is required for input and output operations (e.g., `cin`, `cout`).
- `using namespace std;`: This allows us to use `cout` and `cin` without needing to prefix them with `std::`.

**Function to Compute GCD:**

```cpp
int GCD(int X, int Y) {
    if (Y == 0) {
        return X; // If Y is 0, X is the GCD
    }
    return GCD(Y, X % Y); // Recursive call with (Y, remainder of X divided by Y)
}
```
This function implements the Euclidean algorithm, which states that:
- The GCD(X, Y) = GCD(Y, X % Y).
The base case occurs when Y is 0, at which point X is the GCD.

**Example of How Recursion Works:**
Suppose X = 48 and Y = 18:
- GCD(48, 18) → GCD(18, 48 % 18) → GCD(18, 12)
- GCD(18, 12) → GCD(12, 18 % 12) → GCD(12, 6)
- GCD(12, 6) → GCD(6, 12 % 6) → GCD(6, 0)
- GCD(6, 0) → 6 (Base case reached)

Thus, the GCD of 48 and 18 is 6.

**Main Function:**

```cpp
int main() {
    int X, Y; // Declare variables to store user input
    cin >> X >> Y; // Take two numbers from the user

    cout << GCD(X, Y); // Call the function and print the result
    return 0; // Indicate successful program execution
}
```
- The user inputs two integers.
- The `GCD(X, Y)` function is called with the provided numbers.
- The result (the GCD) is printed.

**Example Run:**
- **Input:**
```
48 18
```
- **Output:**
```
6
```

**Why This Works Efficiently:**
The Euclidean algorithm is significantly faster than the naive approach (which checks all divisors). It reduces the problem size with each step (using `X % Y`), which results in logarithmic time complexity, O(log(min(X, Y))). This is a clean and optimized way to find the Greatest Common Divisor in C++.
