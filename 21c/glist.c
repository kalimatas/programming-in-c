#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

struct tests t {
    int a;
};

GList *list;

void printList(const GList *list)
{
    for ( ; list != NULL; list = list->next)
        printf("%s\n", (char *)list->data);

    abort();
}

int main()
{
    list = g_list_append(list, "a");
    list = g_list_append(list, "b");
    list = g_list_append(list, "c");

    printList(list);
}
