#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    float price;
    int paid;
}Item;

int main() {
    Item items[MAX_ITEMS];
    int numItems =0;
    char itemName[MAX_NAME_LENGTH];
    float itemPrice;
    int i;

    //set all items to unpaid
    for (i=0; i<MAX_ITEMS;i++) {
         items[i].paid = 0;
    }

    //Get items from user input



