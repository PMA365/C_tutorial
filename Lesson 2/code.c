#include <stdio.h>
#include <stdint.h>

void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" "); // Separate bytes
    }
    printf("\n");
}


int main(){
    // hexadecimal0x12345678 = 305419896 in decimal.
    uint32_t value = 0x12345678;
    char* ptr = (char*)&value;
    printf("%x %x %x %x\n", ptr[0], ptr[1], ptr[2], ptr[3]);
    // Output: 78 56 34 12
    // The Intel CPU use's this method (Little-Endian)

    #include <stdio.h>

    //  Printing Octal Number
    // Storing an octal number
    int octalNumber = 0123; // The prefix '0' indicates that this is an octal number

    // Printing the octal number in different formats
    printf("Octal number in octal format: %o\n", octalNumber); // Output: 123
    printf("Octal number in decimal format: %d\n", octalNumber); // Output: 83
    printf("Octal number in hexadecimal format: %x\n", octalNumber); // Output: 53


    //  Printing Hexadecimal
    int num = 0x1A;//26
    printf("Decimal: %d\n", num); // Prints 26
    printf("Hexadecimal (lowercase): %x\n", num); // Prints 1a
    printf("Hexadecimal (uppercase): %X\n", num); // Prints 1A
 
    
    printf("Binary representation of 0x1A: ");
    printBinary(num);

    printf("\n");    
    char c = 'Z';
    for (int i = 7; i >= 0; i--) {
        printf("%d", (c >> i) & 1);
    }
    printf("\n");

    char a1,b1,c1;
    a1 = 10;
    b1 = 'A';// 65 in decimal
    c1 = a1+b1;
    printf("%d\n",c1);// output 75 it addition them in binary and then converts the binary to decimal
    // 00001010
    //+
    // 01000001
    // =
    // 01001011 (75)

    
    
    return 0;
}
