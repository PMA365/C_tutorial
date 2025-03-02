#include <stdio.h>
#include <stdint.h>
int main(){
    // hexadecimal0x12345678 = 305419896 in decimal.
    uint32_t value = 0x12345678;
    char* ptr = (char*)&value;
    printf("%x %x %x %x\n", ptr[0], ptr[1], ptr[2], ptr[3]);
    // Output: 78 56 34 12
    // The Intel CPU use's this method (Little-Endian)
    
    return 0;
}