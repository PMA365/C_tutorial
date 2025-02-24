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

> Output:
> Size of char: 1 bytes
> Size of short: 2 bytes
> Size of int: 4 bytes
> Size of long: 4 bytes
> Size of long long: 8 bytes
> Size of float: 4 bytes
> Size of double: 8 bytes
> Size of long double: 16 bytes
> Size of pointer: 8 bytes
> Size of array: 40 bytes
> Size of structure: 8 bytes
