#include <stdio.h>
#include "my_mat.h"
#define N 10

int main()
{
    char action;
    scanf("%c", &action);
    while(action!='D')
    {
        switch (action)
        {
        case 'A':
            create_matrix();
            scanf(" %c",&action);
            break;
        case 'B':
            check_path();
            scanf(" %c",&action);
            break;
        case 'C':
            printPath();
            scanf(" %c",&action);
            break;
        
        default:
            return 0;
        }
    }


    return 0;
}