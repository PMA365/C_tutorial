## <h1 align="center"> Language Operators</h1>


Here are all the operators in the C programming language:

**Updated List of Operators**
---------------------------

Here is the updated list of operators, including the `~` operator:

**Logical Operators Blockwise**
--------------------

1. `&&` (logical AND)
2. `||` (logical OR)
3. `!` (logical NOT)
4. `^` (logical XOR)
5. `==` (equal to)
6. `!=` (not equal to)
7. `>` (greater than)
8. `<` (less than)
9. `>=` (greater than or equal to)
10. `<=` (less than or equal to)

**Logical Operators Bitwise Operators**
--------------------

1. `&` (bitwise AND)
2. `|` (bitwise OR)
3. `^` (bitwise XOR)
4. `~` (bitwise NOT)
5. `<<` (left shift)
6. `>>` (right shift)

**Arithmetic Operators**
-----------------------

1. `+` (addition)
2. `-` (subtraction)
3. `*` (multiplication)
4. `/` (division)
5. `%` (modulus)
6. `++` (increment)
7. `--` (decrement)
8. `+=` (addition assignment)
9. `-=` (subtraction assignment)
10. `*=` (multiplication assignment)
11. `/=` (division assignment)
12. `%=` (modulus assignment)

I hope this clears up any confusion!

Note that some of these operators have higher precedence than others, and some have different associativity (i.e., whether they evaluate from left to right or right to left).

---
The `~` operator is the bitwise NOT operator, which inverts the bits of a number.

```c
#include <stdio.h>
int main(){

    char a = 1; // 00000001
    char b = ~1;// 11111110
    // becauase the value of a is 1 so its in 2's complement form 00000001
    // so we make 1's complement of 11111110 and get 00000001
    // then +1 => 00000010
    printf("%d\n" ,b); // -2
    return 0;
}
```
so the ~1 will be -2 

---

#### The Blockwise logical operators:
The `&&` its blockwise
also 0 means false and 1 means true
so the a is non zero and the b is non zero 
so the c = 1 && 1 = 1
```c
char a , b , c ;
a = -76;
b = 14;
c = a && b;

printf("%d\n",c);// prints 1
```

The `||` its blockwise also  :
the a is 1 and the b is 0 so the c = 1 || 0 = 1
```c
char a , b , c ;
a = -76;
b = 0;
c = a || b;

printf("%d\n",c);// prints 1
```

The `!` its blockwise also  :
the a is non zero so its true = 1
the b => is opposite(Not) of the a 
so it will be 0
```c
char a , b , c ;
a = -763424234;
b = !a;
printf("%d\n",b);// prints 0

```

Another Example :

```c
char a , b ;
a = -76;
b = ~(!a); // b = ~(0) = 11111111 => 1's complement = 00000000 
// => +1 => 00000001 = 1 
printf("%d\n",b);// prints -1
```