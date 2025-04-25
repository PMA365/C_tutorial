## <h1 align="center"> Memory Assignment </h1>

Assignment is about How the data will stored in memmory:
Octal Hexadecimal Symbol and Binary

Here is an example of how little-endian and big-endian memory storage works in C, represented in a visual table using Markdown:

```C
short a;
a = 25;
// 0 0 0 0 0 0 0 0, 0 0 0 1 1 0 0 1

```

In Little Endian the most right part of binary stored in first room of memory
then the others will be stored in the next rooms one by one

##### Little-Endian Memory Storage :

| Memory Address | Byte Value |
| -------------- | ---------- |
| 0x1000         | 0x19       |
| 0x1001         | 0x00       |

In Big Endian the most Left part of binary stored in first room of memory
then the others will be stored in the next rooms one by one

##### Big-Endian Memory Storage :

| Memory Address | Byte Value |
| -------------- | ---------- |
| 0x1000         | 0x00       |
| 0x1001         | 0x19       |

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

In C we show it :

```C
char a;

a = 0123

char b;

b = 0377
```

We put a 0(zero) at start of the number to tell the compiler its Octal number.

| Octal Number | Decimal Equivalent | Explanation                                                                                                                             |
| ------------ | ------------------ | --------------------------------------------------------------------------------------------------------------------------------------- |
| 0377         | 255                | In octal, the highest digit is 7. The number 0377 represents the maximum value that can be stored in 3 octal digits (3 bits per digit). |

In octal, each digit can have 8 values (0-7). The highest number that can be represented with 3 octal digits is 377, which is equivalent to 255 in decimal. This is because:

Because the value for each bit has 8 difrent values:
0 - 7 we call it Octal.

```bash
binary = 11 111 111
octal  = 3   7   7
3 × 8^2 = 192
7 × 8^1 = 56
7 × 8^0 = 7
```

Total: 192 + 56 + 7 = 255
In many systems, including Unix file permissions, octal numbers are used to represent values that can be stored in 3 bits. The range of values is 000 to 377, with 377 being the maximum value.

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

You can put any single character between the single quotes, including:

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

| Symbol | Binary   | Symbol | Binary   |
| ------ | -------- | ------ | -------- |
| 0      | 00110000 | a      | 01100001 |
|        |          | A      | 01000001 |
| !      | 00100001 | b      | 01100010 |
| @      | 01000000 | B      | 01000010 |
| #      | 00100011 | c      | 01100011 |
| $      | 00100100 | C      | 01000011 |
| %      | 00100101 | d      | 01100100 |
| ^      | 00100010 | D      | 01000100 |
| &      | 00100006 | e      | 01100101 |
| \*     | 00100011 | E      | 01000101 |
| (      | 00100010 | f      | 01100110 |
| )      | 00100011 | F      | 01000110 |
| \n     | 00001010 |
| \t     | 00001001 |
|        | 00100000 |
| 1      | 00110001 |
| 2      | 00110010 |
| 3      | 00110011 |
| 4      | 00110100 |
| 5      | 00110101 |
| 6      | 00110110 |
| 7      | 00110111 |
| 8      | 00111000 |
| 9      | 00111001 |

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
Types
|-- Primitive Types
|   |-- Integer Types
|   |   |-- int (4 bytes, -2147483648 to 2147483647)
|   |   |-- short (2 bytes, -32768 to 32767)
|   |   |-- long (4 bytes, -2147483648 to 2147483647)
|   |   |-- long long (8 bytes, -9223372036854775808 to 9223372036854775807)
|   |   |-- char (1 byte, -128 to 127)
|   |   |-- unsigned int (4 bytes, 0 to 4294967295)
|   |   |-- unsigned short (2 bytes, 0 to 65535)
|   |   |-- unsigned long (4 bytes, 0 to 4294967295)
|   |   |-- unsigned long long (8 bytes, 0 to 18446744073709551615)
|   |   |-- unsigned char (1 byte, 0 to 255)
|   |-- Floating-Point Types
|   |   |-- float (4 bytes, 1.175494351e-38 to 3.402823466e+38)
|   |   |-- double (8 bytes, 2.2250738585072014e-308 to 1.7976931348623157e+308)
|   |   |-- long double (10 bytes, 3.36210314311209350626e-4932 to 1.18973149535723176502e+4932)
|   |-- Void Type
|   |   |-- void (no bytes)
|   |-- Boolean Type
|   |   |-- _Bool (1 byte, 0 to 1)
|-- Derived Types
|   |-- Array Types
|   |   |-- int[] (4 bytes per element)
|   |   |-- char[] (1 byte per element)
|   |   |-- ...
|   |-- Pointer Types
|   |   |-- int* (4 bytes on 32-bit systems, 8 bytes on 64-bit systems)
|   |   |-- char* (4 bytes on 32-bit systems, 8 bytes on 64-bit systems)
|   |   |-- ...
|   |-- Structure Types
|   |   |-- struct (variable size, depends on members)
|   |   |-- ...
|   |-- Union Types
|   |   |-- union (variable size, depends on members)
|   |   |-- ...
|   |-- Function Types
|   |   |-- int() (no bytes, just a function signature)
|   |   |-- void() (no bytes, just a function signature)
|   |-- Abstract Data Types (ADTs)
|   |   |-- Function Pointers
|   |   |   |-- int (*)(int, int)
|   |   |   |-- void (*)(void)
|   |   |   |-- ...
|-- User-Defined Types
|   |-- Enumeration Types
|   |   |-- enum (4 bytes on 32-bit systems, 8 bytes on 64-bit systems)
|   |   |-- ...
|   |-- Typedef Types
|   |   |-- typedef (no bytes, just an alias)
|   |-- Interface-like Types
|   |   |-- Function Pointer Types
|   |   |   |-- int (*)(int, int)
|   |   |   |-- void (*)(void)
|   |   |   |-- ...
```

---

<h2 align="center"> How Negative numbers stored in the Memory In C language </h1>

What is Two's Complement?
Two's Complement is a method of representing signed integers in binary. It works by inverting the bits of the absolute value of the number and then adding 1.

Example: Storing -5 in Memory
Let's take the example of storing the decimal number -5 in memory.

Step 1: Convert 5 to Binary

5 in binary: 00000101

Step 2: Invert the Bits

Inverted bits: 11111010

Step 3: Add 1
Add 1: 11111011

The resulting binary number 11111011 is the Two's Complement representation of -5.

##### Visualizing Negative Numbers in Memory:

Here's a simple visualization of how negative numbers are stored in memory:

| Memory Address   |                           |
| 11111011         | // -5 in Two's Complement |
| 00000101         | // 5 in binary            |
| 11111111         | // -1 in Two's Complement |
| 00000000         | // 0 in binary            |

In this example, we can see that the negative numbers -5 and -1 are stored in memory using their Two's Complement representations.

<h2 align="center"> Why 2's Complement is Needed for Subtraction in Computers </h1>

When you subtract one number from another, you need to borrow from the next higher bit, just like in decimal arithmetic. However, in binary arithmetic, there's no concept of "borrowing" from a higher bit. That's where 2's Complement comes in.

Let's say we want to subtract 5 from 3. In decimal arithmetic, this would be:

3 - 5 = -2

In binary arithmetic, we can represent 3 and 5 as:

3: 00000011
5: 00000101
If we try to subtract 5 from 3 using binary arithmetic, we get:
3 + (-5) :
00000011 + 10000101 = 10001000 (-8 in decimal)

But this is not the correct result.

sp we Convert the subtrahend (5) to its 2's Complement:

1. first we make the 1's complement of the the smallet absolute number:
   hers is 3:
   00000011 (3) 11111100 (1's Complement)

2. we add 1 to it :
   11111100 + 1 (add 1)
   -> 11111101 (2's Complement)

now we add this to our 5:
11111101 + 00000101 = 00000010

- 11111011
  = 11111100 ()

// prettier-ignore
Note In digital electronics, there is no such thing as a "binary subtraction" circuit. Instead, subtraction is performed using an adder circuit with a full inverter.

+---------------+ +------------------+  
 | Minuend (A) | | Subtrahend (~B) |
+---------------+ +------------------+
| |
| |
| |
| |
v v
+-------------------+
| NOT Gate |
| (~B) |
+-------------------+  
 |
|
v

+-------------------------------------+
| Full Adder |
| (A + ~B) |
+--------------------------------------+
|
|
v
+---------------+
| Result (A-B) |
+---------------+

how negative numbers stored in memory in c program :
for example : -5 in two's complement:
00000101 Ones Complement =>
11111010 +1
=> 11111011 two's complement in 32 bit system processor all other empty spaces of memory
will fill with -1 representing its negative number.
+-----------------------------------------------+
| Address | Byte | Binary | Decimal |
+-----------------------------------------------+
| 0x1000 | 0xFB | 11111011 | -5 (LSB) |
| 0x1001 | 0xFF | 11111111 | -1 |
| 0x1002 | 0xFF | 11111111 | -1 |
| 0x1003 | 0xFF | 11111111 | -1 (MSB) |
+-----------------------------------------------+

0x1001, 0x1002, and 0x1003: The remaining bytes of the value
which represents the value [-1] in two's complement notation.
