#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{

    List ahmed;
    create_list(&ahmed);
    add(&ahmed, 0);
    add(&ahmed, 4);
    add(&ahmed, 5);
    add(&ahmed, 7);

    printf("%d\n", get_length(ahmed));

    int a = get_first(&ahmed);
    printf("%d\n", a);

    a = get_from(&ahmed, 2);

    printf("%d\n", a);

    printf("%d\n", get_last(&ahmed));

    printf("\n%d\n", get_length(ahmed));

    while(!is_empty(ahmed))
    {
        printf("%d  ", get_first(&ahmed));
    }

    printf("\n%d\n", get_length(ahmed));

    return 0;
}
