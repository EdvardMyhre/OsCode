#include <stdio.h>
#include <stdlib.h>
#include "Collection.h"

int main(void){
    int counter = 0;
    char input;
    struct Collection *c = createCollection();

    printf("Welcome to collector, choose your input:\n");
    printf("’a’: Add the current counter value to the collection, then increment the counter.\n");
    printf("’b’: Do nothing except increment the counter.\n");
    printf("’c’: Remove the most recently added element from the collection and increment the counter.\n");
    printf("Anything else: Stop processing commands, print the collection in the order they were added, and exit.\n");
    printf("You can now start collecting!\n");

    while(1){
        printf("%d: ", counter);
        input = getchar();
        getchar(); //absorb newline

        switch(input){
            case 'a':
                push(counter, c);
                break;
            case 'b':
                //do nothing
                break;
            case 'c':
                pop(c);
                break;
            default:
                printf("\n\nCollection is: ");
                print(c);
                printf("\nProgram finished, exiting\n");
                exit(0);
        }
        counter++;
    }
}