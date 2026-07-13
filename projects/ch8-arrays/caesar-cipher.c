// Caesar cipher
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char message[] = { "Jr dkhdg, pdnh pb gdb." };
    char encrypted[80];
    int message_size = strlen(message);
    int shift = 23;

    char upper_case[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
                    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    char lower_case[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                     'n','o','p','q','r','s','t','u','v','w','x','y','z'};

    for (int i = 0; i < message_size; i++) {
        if (isupper(message[i])) {
            int new_index = message[i] - 'A' + shift;
            if (new_index > 25) {
                encrypted[i] = (message[i] - 'A' + shift) % 26 + 'A';
            }
            else {
                encrypted[i] = upper_case[new_index];
            }
        }
        else if (islower(message[i])) {
            int new_index = message[i] - 'a' + shift;
            if (new_index > 25) {
                encrypted[i] = (message[i] - 'a' + shift) % 26 + 'a';
            }
            else {
                encrypted[i] = lower_case[new_index];
            }
        }
        else {
            encrypted[i] = message[i];
        }
    }

    for (int i = 0; i < message_size; ++i) {
        printf("%c", encrypted[i]);
    }
    printf("\n");

    return 0;
}