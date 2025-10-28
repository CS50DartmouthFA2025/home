Exercise 1: Bit Checker

Objective: Write a function that checks if a specific bit is set in an integer.


int isBitSet(int num, int position) {
    // TODO: Implement a function that returns 1 if the bit is set, 0 otherwise
}

// Test cases
int main() {
    printf("%d\n", isBitSet(5, 2));  // Should return 1
    printf("%d\n", isBitSet(5, 1));  // Should return 0
    return 0;
}

Exercise 2: Bit Setter

Objective: Create a function to set a specific bit in an integer.


int setBit(int num, int position) {
    // TODO: Implement a function that sets the bit at the given position
}

// Test cases
int main() {
    printf("%d\n", setBit(5, 1));  // Should return 7
    return 0;
}

Exercise 3: Bit Clearer

Objective: Write a function to clear a specific bit in an integer.


int clearBit(int num, int position) {
    // TODO: Implement a function that clears the bit at the given position
}

// Test cases
int main() {
    printf("%d\n", clearBit(7, 1));  // Should return 5
    return 0;
}

Exercise 4: Bit Toggle

Objective: Create a function to toggle a specific bit in an integer.


int toggleBit(int num, int position) {
    // TODO: Implement a function that flips the bit at the given position
}

// Test cases
int main() {
    printf("%d\n", toggleBit(5, 1));  // Should return 7
    printf("%d\n", toggleBit(7, 1));  // Should return 5
    return 0;
}


Exercise 5: Bit Count

Objective: Write a function to count the number of set bits (1s) in an integer.


int countSetBits(int num) {
    // TODO: Implement a function that returns the number of 1 bits in the number
    // Hint: Use bitwise operations to count
}

// Test cases
int main() {
    printf("%d\n", countSetBits(5));   // Should return 2
    printf("%d\n", countSetBits(15));  // Should return 4
    return 0;
}

Exercise 6: Power of 2 Checker

Objective: Determine if a number is a power of 2 using bitwise operations.


int isPowerOfTwo(int num) {
    // TODO: Implement a function that returns 1 if the number is a power of 2, 0 otherwise
    // Hint: A power of 2 has only one bit set
}

// Test cases
int main() {
    printf("%d\n", isPowerOfTwo(8));   // Should return 1
    printf("%d\n", isPowerOfTwo(7));   // Should return 0
    return 0;
}
