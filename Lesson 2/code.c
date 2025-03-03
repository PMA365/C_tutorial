#include <stdio.h>
#include <stdint.h>
int main(){
    // hexadecimal0x12345678 = 305419896 in decimal.
    uint32_t value = 0x12345678;
    char* ptr = (char*)&value;
    printf("%x %x %x %x\n", ptr[0], ptr[1], ptr[2], ptr[3]);
    // Output: 78 56 34 12
    // The Intel CPU use's this method (Little-Endian)

    #include <stdio.h>


    // Storing an octal number
    int octalNumber = 0123; // The prefix '0' indicates that this is an octal number

    // Printing the octal number in different formats
    printf("Octal number in octal format: %o\n", octalNumber); // Output: 123
    printf("Octal number in decimal format: %d\n", octalNumber); // Output: 83
    printf("Octal number in hexadecimal format: %x\n", octalNumber); // Output: 53

    

    
    return 0;
}