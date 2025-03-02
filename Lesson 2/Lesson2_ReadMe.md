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
