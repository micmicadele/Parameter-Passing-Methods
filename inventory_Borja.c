#include <stdio.h>

#define SIZE 3  

void add_to_stock(int stock[], int *size) {
    stock[*size] = 75;  
    (*size)++;  
    printf("Inside function (stock): [");
    for (int i = 0; i < *size; i++) {
        printf("%d", stock[i]);
        if (i < *size - 1) printf(", ");
    }
    printf("]\n");
}

void update_price(float price) {
    float new_price = price + (price * 0.10f);
    printf("Inside function (price): %.1f\n", new_price);
}

int main() {
    int inventory[10] = {100, 200, 150};  
    int size = SIZE;

    add_to_stock(inventory, &size);
    printf("Outside function (stock): [");
    for (int i = 0; i < size; i++) {
        printf("%d", inventory[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n\n");

    float base_price = 250.0f;
    update_price(base_price);
    printf("Outside function (price): %.1f\n", base_price);

    return 0;
}
