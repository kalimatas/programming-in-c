#include <stdio.h>
#include <strings.h>

struct tag {
    char lname[20];
    char fname[20];
    int age;
    float rate;
};

void show_name (const struct tag *);

int main()
{
    struct tag my_struct;
    struct tag *ptr = &my_struct;

    strcpy(my_struct.lname, "Guz");
    strcpy(my_struct.fname, "Alexander");
    my_struct.age = 29;

    (*ptr).rate = .42;
    ptr->rate = .43;

    show_name(ptr);

    return 0;
}

void show_name(const struct tag *p)
{
    printf("%s %s\n", p->fname, p->lname);
}
