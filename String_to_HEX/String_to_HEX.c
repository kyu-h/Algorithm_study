#include <stdio.h>
#include <string.h>


int main() {
    unsigned char test[100001] = "Test in this place!";

    unsigned char decimal = 'j';
    char hexadecimal[10000] = {0, };

    int position = 0;
    int tmp;

    for(int i=strlen(test); i>=0; i--){
        decimal = test[i];

        while (1){
        int mod = decimal % 16;
        if (mod < 10){
            hexadecimal[position] = 48 + mod;
        }
        else{
            hexadecimal[position] = 65 + (mod - 10);
        }

        decimal = decimal / 16;

        position++;

        if (decimal == 0)
            break;
        }
    }

    for(int i=0; i<(position)/2; i++) {
        tmp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[(position-1) - i];
        hexadecimal[(position-1) - i] = tmp;
    }

    hexadecimal[strlen(test) * 2] = '\0';

    for (int i=0; i<position; i++){
        printf("%c", hexadecimal[i]);
    }

    return 0;
}
