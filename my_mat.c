#include<stdio.h>
#include<stdbool.h>
#define N 10
#define global int mat[N][N]
#define MAX 20000000

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
void create_matrix()
{
    global;
    for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf(" %d",&mat[i][j]);
            if(mat[i][j]==0 && i!=j)
            {
                mat[i][j]= MAX;
            }            
        }        
    }
}

void Floyd_Warshall_algorithm(int p)
{   
    global;
    for (int i = 0; i < N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i==j)
            {
                mat[i][j]=0;
            }
            else if(i==p || j==p)
            {
                continue;
            }
            else
            {
                mat[i][j]=min(mat[i][j],(mat[i][p]+mat[p][j]));
            }
        }
    }
}

void check_path()
{
    global;
    int i,j;
    scanf(" %d %d", &i,&j);
    for(int p=0;p<N;p++)
    {
        Floyd_Warshall_algorithm(p);
    }
    if(mat[i][j]==0 || mat[i][j]==MAX)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }         
}

void printPath()
{
    global;
    int i,j;
    scanf(" %d %d", &i,&j);
    for(int p=0;p<N;p++)
    {
        Floyd_Warshall_algorithm(p);
    }
    if(mat[i][j]==0 || mat[i][j]==MAX)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", &mat[i][j]);
    }
}

