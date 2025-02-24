#include <stdio.h>

int main() {
    // Integer types
    char c;         // 1 byte
    unsigned char maximomValue = 257;
    printf("%u\n", maximomValue);
    unsigned short maximomValue2 = 65536; 
    printf("%u\n", maximomValue2);
    short s;        // 2 bytes
    int i;          // 4 bytes
    long l;         // 4 bytes or 8 bytes
    long long ll;   // 8 bytes

    // Floating point types
    float f;        // 4 bytes
    double d;       // 8 bytes
    long double ld; // 10 bytes or 16 bytes

    // Pointer types
    int* p;         // 4 bytes or 8 bytes

    // Array types
    int arr[10];    // 40 bytes (10 x 4 bytes)

    // Structure types
    struct {
        int a;      // 4 bytes
        char b;     // 1 byte
        short c;    // 2 bytes
    }myStruct;            // 7 bytes (4 + 1 + 2)

    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Size of pointer: %zu bytes\n", sizeof(int*));
    printf("Size of array: %zu bytes\n", sizeof(arr));
    printf("Size of structure: %zu bytes\n", sizeof(myStruct));

    return 0;
}