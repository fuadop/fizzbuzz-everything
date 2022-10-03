// communism at its finest

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *output;
char fizz[] = "Fizz";
char buzz[] = "Buzz";
char fizzbuzz[] = "FizzBuzz";

void appendString(char *string) {
    output = malloc(sizeof string + 1);

    // copy the string to the correct memory address
    strcpy(output, string);

    output[sizeof string + 1] = '\0';
}

int main() {
    // 0x7fffffff
    for (int i = 1; i <= 100000; i++) {
        // I will be 5 bytes because c is utterly deranged
        if (output != 0) {
            free(output);
            output = 0;
        }

        if (i % 3 == 0 && i % 5 == 0) appendString(fizzbuzz);
        else if (i % 3 == 0) appendString(fizz);
        else if (i % 5 == 0) appendString(buzz);
        else {
            // https://stackoverflow.com/a/32819876/9088682
            int len = snprintf(NULL, 0, "%d", i);
            char *tmp = malloc(len + 1);
            snprintf(tmp, len + 1, "%d", i);

            // I have hopes
            appendString(tmp);

            free(tmp);
        }


        printf("%s\n", output);
    }

    free(output);
}
