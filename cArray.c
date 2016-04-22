#include <stdio.h>

int main () {

    char *street[] = {"Hill View", "", "Wild  Road"};

    int i;

    for (i = 0; i < 3; i++)  {

        printf("*street %p,  *&street[%d] %p,  *street[%d] %d,  street[%d] %p.\n\n", *street, i, *&street[i], i, *street[i], i, street[i]);
        printf("&street[%d]     %p,     street     %p.\n\n", i, &street[i], street);
    }

    printf("\nNOTE :'s' applied to street[i] returns the name as characters.\n\n");


/*--------------------------------------------------------------------------------------*/

    double val[] = {1,2,3};

    for (i = 0; i < 3; i++)  {

        printf("*&val[%d] %f, val %p, *val %f, &val[%d] %p.\n\n", i, *&val[i], val, *val, i, &val[i]);
    }

    return 0;
}
