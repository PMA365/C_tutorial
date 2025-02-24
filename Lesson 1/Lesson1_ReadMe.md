## 🔖 Note :

#### In C for declaration you need allocation first

##### so you need to allocate memory first for declaring variables

---

#### Integer types :

char c; // 1 byte
short s; // 2 bytes
int i; // 4 bytes
long l; // 4 bytes or 8 bytes
long long ll; // 8 bytes

#### Floating point types :

float f; // 4 bytes
double d; // 8 bytes
long double ld; // 10 bytes or 16 bytes

#### Pointer types :

int\* p; // 4 bytes or 8 bytes

#### Array types :

int arr[10]; // 40 bytes (10 x 4 bytes)

#### Structure types :

struct {
int a; // 4 bytes
char b; // 1 byte
short c; // 2 bytes
}myStruct; // 7 bytes (4 + 1 + 2)

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
