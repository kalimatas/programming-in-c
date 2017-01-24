#include <stdio.h>

struct entry {
        int value;
        struct entry *next;
};

void printList(struct entry *listPtr)
{
    while (listPtr != (struct entry *) 0) {
        printf("%i ", listPtr->value);
        listPtr = listPtr->next;
    }

    printf("\n");
}

struct entry *findEntry(struct entry *listPtr, const int match)
{
    while (listPtr != (struct entry *) 0) {
        if (listPtr->value == match)
            return listPtr;
        else
            listPtr = listPtr->next;
    }

    return (struct entry *) 0;
}

void insertEntry(struct entry *insert, struct entry *after)
{
    insert->next = after->next;
    after->next = insert;
}

int main(void)
{
    struct entry n1, n2, n3;
    struct entry *list_pointer = &n1;
    struct entry *foundEntry;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;    

    printList(list_pointer);

    int search;
    printf("Enter search: ");
    scanf("%i", &search);

    foundEntry = findEntry(list_pointer, search);

    if (foundEntry != (struct entry *) 0) {
        printf("Found %i.\n", foundEntry->value);
    } else {
        printf("Not Found\n");

        return 0;
    }

    struct entry insert = {
        240,
        (struct entry *) 0
    };

    insertEntry(&insert, foundEntry);

    printList(list_pointer);

    return 0;
}
