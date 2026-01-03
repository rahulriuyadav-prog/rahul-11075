#include <stdio.h>

int main() {
    int choice;
    int num, base, exp, result;
    char repeat;

    do {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Square of a number\n");
        printf("2. Cube of a number\n");
        printf("3. Power of a number\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Square of %d = %d\n", num, num * num);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Cube of %d = %d\n", num, num * num * num);
                break;

            case 3:
                printf("Enter base: ");
                scanf("%d", &base);
                printf("Enter exponent: ");
                scanf("%d", &exp);

                result = 1;
                for (int i = 1; i <= exp; i++) {
                    result = result * base;
                }

                printf("%d raised to the power %d = %d\n", base, exp, result);
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}