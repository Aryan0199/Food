#include <stdio.h>
int main() {
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Food item - Pizza\n");
            printf("Price - Rs239");
            break;
        case 2:
            printf("Food item - Burger\n");
            printf("Price - Rs129");
            break;
        case 3:
            printf("Food item - Pasta\n");
            printf("Price - Rs179");
            break;
        case 4:
            printf("Food item - French Fries\n");
            printf("Price - Rs99");
            break;
        case 5:
            printf("Food item - Sandwich\n");
            printf("Price - Rs149");
            break;
        default:
            printf("Mentioned number not in the list\n");
    }
    return 0;

}
