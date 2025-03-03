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

## <h1 align="center"> Octal and HexaDecimal </h1>

#### convert the decimal number

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
