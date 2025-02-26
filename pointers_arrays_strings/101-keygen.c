#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

void generate_password(char *password, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; i < length; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    password[length] = '\0';
}

int main() {


    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];

    return (generate_password(password, PASSWORD_LENGTH));
}
