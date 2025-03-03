## <h1 align="center"> Memory Assignment </h1>

Here is an example of how little-endian and big-endian memory storage works in C, represented in a visual table using Markdown:

##### Little-Endian Memory Storage :

| Memory Address | Byte Value |
| -------------- | ---------- |
| 0x1000         | 0x12       |
| 0x1001         | 0x34       |
| 0x1002         | 0x56       |
| 0x1003         | 0x78       |

In little-endian storage, the least significant byte (LSB) is stored at the lowest memory address.
Intel cpu uses this method

##### Big-Endian Memory Storage :

| Memory Address | Byte Value |
| -------------- | ---------- |
| 0x1000         | 0x78       |
| 0x1001         | 0x56       |
| 0x1002         | 0x34       |
| 0x1003         | 0x12       |

In big-endian storage, the most significant byte (MSB) is stored at the lowest memory address.

Here's an example of how a 32-bit integer 0x12345678 would be stored in memory using both little-endian and big-endian byte order:

Little-Endian :

```C
uint32_t value = 0x12345678;
char* ptr = (char*)&value;
printf("%x %x %x %x\n", ptr[0], ptr[1], ptr[2], ptr[3]);
// Output: 78 56 34 12
```

Big-Endian :

```c
uint32_t value = 0x12345678;
char* ptr = (char*)&value;
printf("%x %x %x %x\n", ptr[0], ptr[1], ptr[2], ptr[3]);
// Output: 12 34 56 78
```

Note that the byte order is dependent on the system architecture, and some systems may use a different byte order than the examples shown here.

## <h1 align="center"> Octal </h1>

### Convert the Decimal to Octal

To convert the decimal number 83 to its octal (base-8) equivalent, follow these steps:

Step 1: Divide the number by 8
Divide the decimal number by 8 and record the quotient and the remainder.

[ 83 \div 8 = 10 \quad \text{with a remainder of} \ 3 ]

Quotient: 10

##### Remainder: 3

Step 2: Divide the quotient by 8
Take the quotient from the previous step (10) and divide it by 8.

[ 10 \div 8 = 1 \quad \text{with a remainder of} \ 2 ]

Quotient: 1

##### Remainder: 2

Step 3: Divide the quotient by 8 again
Take the quotient from the previous step (1) and divide it by 8.

[ 1 \div 8 = 0 \quad \text{with a remainder of} \ 1 ]

Quotient: 0

##### Remainder: 1

Step 4: Stop when the quotient is 0

##### The process stops when the quotient becomes 0.

Step 5: Write the remainders in reverse order
The octal number is formed by writing the remainders in reverse order (from the last remainder to the first).

##### Remainders: 3, 2, 1

Reversed: 1, 2, 3

So, the octal representation of 83 is 123₈.

Final Answer:
[ 83_{10} = 123_{8} ]

## <h1 align="center"> HexaDecimal</h1>

In C, hexadecimal values are often used to represent binary data in a more human-readable form. Here's how hexadecimal values are shown in C and how they are stored in memory as binary:

---

### 1. **Representing Hexadecimal in C**

Hexadecimal values in C are prefixed with `0x` or `0X`. For example:

```c
int hexValue = 0x1A; // 0x1A is the hexadecimal representation of 26 in decimal
```

Here, `0x1A` is a hexadecimal literal. The `0x` prefix tells the compiler that the number is in hexadecimal format.

---

### 2. **Storing Hexadecimal as Binary in Memory**

When you assign a hexadecimal value to a variable, it is stored in memory as binary. For example:

```c
int num = 0x1A; // 0x1A is 0001 1010 in binary
```

In memory, the value `0x1A` (which is `26` in decimal) is stored as its binary equivalent:

```
0001 1010
```

The exact storage depends on the size of the data type. For example, if `num` is an `int` (typically 4 bytes or 32 bits), the binary representation would be:

```
0000 0000 0000 0000 0000 0000 0001 1010
```

---

### 3. **Printing Hexadecimal Values**

You can print hexadecimal values using the `%x` or `%X` format specifier in `printf`:

```c
#include <stdio.h>

int main() {
    int num = 0x1A;
    printf("Decimal: %d\n", num); // Prints 26
    printf("Hexadecimal (lowercase): %x\n", num); // Prints 1a
    printf("Hexadecimal (uppercase): %X\n", num); // Prints 1A
    return 0;
}
```

---

### 4. **Binary Representation in Memory**

To visualize how the hexadecimal value is stored in memory, you can use bitwise operations or inspect the memory directly. For example:

```c
#include <stdio.h>

void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" "); // Separate bytes
    }
    printf("\n");
}

int main() {
    int num = 0x1A;
    printf("Binary representation of 0x1A: ");
    printBinary(num);
    return 0;
}
```

Output:

```
Binary representation of 0x1A: 00000000 00000000 00000000 00011010
```

---

### Summary

- Hexadecimal values in C are prefixed with `0x` or `0X`.
- They are stored in memory as binary.
- You can print hexadecimal values using `%x` or `%X`.
- The binary representation can be visualized using bitwise operations.

Let me know if you need further clarification!

---

#### character constant

In C, you can put a single character between two single quotes. This is called a character constant.

```c
char c = 'a';
```

Here, 'a' is a character constant that represents the character a.

ou can put any single character between the single quotes, including:

- Letters (e.g., 'a', 'Z')
- Digits (e.g., '0', '9')
- Special characters (e.g., '!', '@', '$')
- Whitespace characters (e.g., ' ', '\t', '\n')
  Note that you can only put a single character between the single quotes.

```c
char c = '\n'; // represents a newline character
char c = '\t'; // represents a tab character
```

---

## ASCI

| Symbol | Binary   |
| ------ | -------- |
| 0      | 00110000 |
| 1      | 00110001 |
| a      | 01100001 |
| A      | 01000001 |
| !      | 00100001 |
| @      | 01000000 |
| #      | 00100011 |
| $      | 00100100 |
| %      | 00100101 |
| ^      | 00100010 |
| &      | 00100006 |
| \*     | 00100011 |
| (      | 00100010 |
| )      | 00100011 |
| \n     | 00001010 |
| \t     | 00001001 |
|        | 00100000 |
| 2      | 00110010 |
| 3      | 00110011 |
| 4      | 00110100 |
| 5      | 00110101 |
| 6      | 00110110 |
| 7      | 00110111 |
| 8      | 00111000 |
| 9      | 00111001 |
| b      | 01100010 |
| B      | 01000010 |
| c      | 01100011 |
| C      | 01000011 |
| d      | 01100100 |
| D      | 01000100 |
| e      | 01100101 |
| E      | 01000101 |
| f      | 01100110 |
| F      | 01000110 |

Note:

```c
char a,b,c;
a = 10;
b = 'A';// 65 in decimal
c = a+b;
printf("%d\n",c);// output 75 it addition them in binary and then converts the binary to decimal
// 00001010
//+
// 01000001
// =
// 01001011 (75)
```

so there are 5 model of saying numbers in c language :

- Decimal : char a = 10;
- Binary : char a = 0b1010;
- Octal : char a = 012;
- Hexadecimal : char a = 0x10;
- Character : char a = 'a';
- String : char a[] = "hello";

The C dont have Character type at all.
not like the other languages like python, java, c++, c# etc.
The C only have 2 type of numeric data types :
Integer[char,unsigned char,int,unsigned int,short,unsigned short,long,unsigned long,long long,unsigned long long] and Float[float,double,long double]:

Review :

```bash
C Language Types
├── Basic Types
│   ├── char
│   ├── int
│   │   ├── short int
│   │   ├── long int
│   │   └── long long int
│   ├── float
│   ├── double
│   └── void
├── Derived Types
│   ├── Arrays
│   ├── Pointers
│   ├── Functions
│   └── Structures
│       └── Unions
└── User-Defined Types
    ├── typedef
    └── enum
```

```bash
Data Types
├── Primitive
│   ├── Integer
│   │   ├── byte
│   │   │   ├── Size: 1 byte (8 bits)
│   │   │   ├── Min: -128
│   │   │   └── Max: 127
│   │   ├── short
│   │   │   ├── Size: 2 bytes (16 bits)
│   │   │   ├── Min: -32,768
│   │   │   └── Max: 32,767
│   │   ├── int
│   │   │   ├── Size: 4 bytes (32 bits)
│   │   │   ├── Min: -2,147,483,648
│   │   │   └── Max: 2,147,483,647
│   │   └── long
│   │       ├── Size: 8 bytes (64 bits)
│   │       ├── Min: -9,223,372,036,854,775,808
│   │       └── Max: 9,223,372,036,854,775,807
│   ├── Floating-Point
│   │   ├── float
│   │   │   ├── Size: 4 bytes (32 bits)
│   │   │   ├── Min: ~1.4E-45
│   │   │   └── Max: ~3.4E+38
│   │   └── double
│   │       ├── Size: 8 bytes (64 bits)
│   │       ├── Min: ~4.9E-324
│   │       └── Max: ~1.8E+308
│   ├── Character
│   │   └── char
│   │       ├── Size: 2 bytes (16 bits)
│   │       ├── Min: '\u0000' (0)
│   │       └── Max: '\uffff' (65,535)
│   └── Boolean
│       └── bool
│           ├── Size: 1 bit (typically stored as 1 byte for efficiency)
│           ├── Min: false
│           └── Max: true
└── Non-Primitive
    ├── String
    │   ├── Size: Variable (depends on the number of characters)
    │   ├── Min: "" (empty string)
    │   └── Max: 2^31 - 1 characters (theoretical limit)
    ├── Array
    │   ├── Size: Variable (depends on the number of elements and their type)
    │   ├── Min: [] (empty array)
    │   └── Max: 2^31 - 1 elements (theoretical limit)
    ├── Class
    │   ├── Size: Variable (depends on the fields and methods)
    │   ├── Min: N/A (depends on the class definition)
    │   └── Max: N/A (depends on the class definition)
    └── Interface
        ├── Size: N/A (no memory allocation for interfaces themselves)
        ├── Min: N/A
        └── Max: N/A
```
