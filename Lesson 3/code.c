#include <stdio.h>
int main(){

    char a = 1; // 00000001
    char b = ~1;// 11111110
    // becauase the value of a is 1 so its in 2's complement form 00000001
    // so we make 1's complement of 11111110 and get 00000001
    // then +1 => 00000010
    printf("%d\n" ,b); // -2


    char a , b , c ;
    a = -76;
    b = 14;
    c = a && b;

    printf("%d\n",c);// 1
    return 0;

}