#include <stdio.h>
#include <string.h>

void rev(char str[]) {
    int l = strlen(str);
    int m = l / 2;

    for (int i = m, j = l - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[32];

    printf("Enter a string: ");
    fgets(str, 32, stdin);  
    str[strcspn(str, "\n")] = '\0';  

    rev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
