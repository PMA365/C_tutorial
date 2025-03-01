#include <stdio.h>

int main() {
    // Integer types
    char c;         // 1 byte
    unsigned char maximomValue = 255;
    printf("%u\n", maximomValue);
    unsigned short maximomValue2 = 65535; 
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


    // pointers example
    printf("pointers example :");
    int var = 10;
    int *ptr = &var;  // declare and initialize a pointer

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void *)&var);
    printf("Value of ptr: %p\n", (void *)ptr);
    printf("so by default the ptr stores the address of var %d\n");
    printf("Value at address ptr: %d\n", *ptr);

    

    return 0;
}



| Data Type            | Size (Bytes) | Minimum Value                          | Maximum Value                          |
| -------------------- | ------------ | -------------------------------------- | -------------------------------------- |
|  char                | 1            |  -128                                  |  127                                   |
|  unsigned char       | 1            |  0                                     |  255                                   |
|  short               | 2            |  -32,768                               |  32,767                                |
|  unsigned short      | 2            |  0                                     |  65,535                                |
|  int                 | 4            |  -2,147,483,648                        |  2,147,483,647                         |
|  unsigned int        | 4            |  0                                     |  4,294,967,295                         |
|  long                | 4 or 8       |  -2,147,483,648  (4 bytes)             |  2,147,483,647  (4 bytes)              |
|                      |              |  -9,223,372,036,854,775,808  (8 bytes) |  9,223,372,036,854,775,807  (8 bytes)  |
|  unsigned long       | 4 or 8       |  0                                     |  4,294,967,295  (4 bytes)              |
|                      |              |  0                                     |  18,446,744,073,709,551,615  (8 bytes) |
|  long long           | 8            |  -9,223,372,036,854,775,808            |  9,223,372,036,854,775,807             |
|  unsigned long long  | 8            |  0                                     |  18,446,744,073,709,551,615            |
|  float               | 4            |  1.17549e-38                           |  3.40282e+38                           |
|  double              | 8            |  2.22507e-308                          |  1.79769e+308                          |
|  long double         | 10 or 16     |  3.3621e-4932  (10 bytes)              |  1.18973e+4932  (10 bytes)             |
|                      |              |  3.3621e-4932  (16 bytes)              |  1.18973e+4932  (16 bytes)             |
