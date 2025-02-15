#include <iostream> // Include the standard input-output library
using namespace std;

// Function to compute the Greatest Common Divisor (GCD) using the Euclidean algorithm
int GCD(int X, int Y) {
    if (Y == 0) { 
        return X; // Base case: If Y becomes 0, X is the GCD
    }
    return GCD(Y, X % Y); // Recursive call with Y and the remainder of X divided by Y
}

int main() {
    int X, Y; // Variables to store input numbers
    cin >> X >> Y; // Take two integer inputs from the user

    cout << GCD(X, Y); // Print the computed GCD
    return 0; // Indicate successful program execution
}
