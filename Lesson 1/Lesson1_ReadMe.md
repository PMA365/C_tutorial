## 🔖 Note :

#### In C for declaration you need allocation first

##### so you need to allocate memory first for declaring variables

---

#### Integer types :

| Type      | Size               |
| --------- | ------------------ |
| char      | 1 byte             |
| short     | 2 bytes            |
| int       | 4 bytes            |
| long      | 4 bytes or 8 bytes |
| long long | 8 bytes            |

#### Floating point types :

| Type        | Size                 |
| ----------- | -------------------- |
| float       | 4 bytes              |
| double      | 8 bytes              |
| long double | 10 bytes or 16 bytes |

#### Pointer types :

| Type  | Size                                                          |
| ----- | ------------------------------------------------------------- |
| int\* | 4 bytes(32-bit systems) <br> or <br> 8 bytes( 64-bit systems) |

#### Array types :

| Type        | Size                    |
| ----------- | ----------------------- |
| int arr[10] | 40 bytes (10 x 4 bytes) |

#### Structure types :

| Type            | Size                |
| --------------- | ------------------- |
| struct MyStruct | 7 bytes (4 + 1 + 2) |

#### Output:

Size of char: 1 bytes
Size of short: 2 bytes
Size of int: 4 bytes
Size of long: 4 bytes
Size of long long: 8 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long double: 16 bytes
Size of pointer: 8 bytes
Size of array: 40 bytes
Size of structure: 8 bytes

<h1 align= "center">$\textcolor{yellow}{More\ Details\ }$
</h1>

1 byte = 8 bits
Binary representation of 255: 11111111

    2^7 (128) + 2^6 (64) + 2^5 (32) + 2^4 (16) + 2^3 (8) + 2^2 (4) + 2^1 (2) + 2^0 (1) = 255

or in simple way :
255 => 2^8 - 1

- 2^8 represents the total number of possible values that can be represented by 8 bits (2 to the power of 8).
- However, since we start counting from 0, we need to subtract 1 to get the maximum value.

so the maximom number value that can be fit into the 1 byte is 255

- char c = 127; (positive value)

  - Sign bit: 0
  - Magnitude bits: 01111111 (127) => 2^7 - 1 = 127

- char c = -128; (negative value)
  - Sign bit: 1
  - Magnitude bits: 10000000 ( inverted and added 1)

And the Minimom Negative Number is -128

### In summery :

char c maximomValue = 127
and minimomValue = -128
| Type | Minimum Value | Maximum Value |
| --- | --- | --- |
| char (signed) | -128 | 127 | | char (unsigned) | 0 | 255 |
| unsigned char | 0 | 255 |
| summery | -128 | 255 |

---

Short maximom and minimom value calculation :
A short type is 16 bits long.
Since short is a signed type, 1 bit is used for the sign.
The remaining 15 bits are used for the magnitude.
2^15 - 1 = 32767

Calculate the minimum value
Since 1 bit is used for the sign, the minimum value is:

    -2^15 = -32768

For an unsigned short type, all 16 bits are used for the magnitude, so the maximum value is:

    2^16 - 1 = 65535

The minimum value for an unsigned short type is 0.

Short maximom and minimom value
| Type | Minimum Value | Maximum Value |
| --- | --- | --- |
| short (signed) | -32768 | 32767 |
| unsigned short | 0 | 65535 |
| summery | -32768 | 65535 |

---

for the int type

- int: 4 bytes (32 bits)
- Maximum value: 2^31 - 1 = 2147483647
- Minimum value: -2^31 = -2147483648

| Type           | Minimum Value | Maximum Value |
| -------------- | ------------- | ------------- |
| int (signed)   | -2147483648   | 2147483647    |
| int (unsigned) | 0             | 4294967295    |
| summery        | -2147483648   | 4294967295    |

---

- float: 4 bytes (32 bits)
- Minimum value: approximately 1.175494351e-38
- Maximum value: approximately 3.402823466e+38

# Understand the IEEE 754 floating-point representation

In the IEEE 754 floating-point representation, a 32-bit float is divided into 3 parts:

- Sign bit (1 bit): indicates whether the number is positive or negative
- Exponent (8 bits): represents the power of 2 to which the mantissa should be raised
- Mantissa (23 bits): represents the fractional part of the number

| Sign bit (1 bit) | Exponent (8 bits) | Mantissa (23 bits)                              |
| ---------------- | ----------------- | ----------------------------------------------- |
| 0/1              | 00000000-11111111 | 00000000000000000000000-11111111111111111111111 |

| Type  | Minimum Value                 | Maximum Value                 |
| ----- | ----------------------------- | ----------------------------- |
| float | approximately 1.175494351e-38 | approximately 3.402823466e+38 |

Note that the minimum and maximu

---

| Type             | Minimum Value                 | Maximum Value                 |
| ---------------- | ----------------------------- | ----------------------------- |
| char (signed)    | -128                          | 127                           |
| char (unsigned)  | 0                             | 255                           |
| short (signed)   | -32768                        | 32767                         |
| short (unsigned) | 0                             | 65535                         |
| int (signed)     | -2147483648                   | 2147483647                    |
| int (unsigned)   | 0                             | 4294967295                    |
| float            | approximately 1.175494351e-38 | approximately 3.402823466e+38 |
