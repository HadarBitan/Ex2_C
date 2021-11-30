#include<stdio.h>
#include<stdbool.h>
#define N 10
#define MAX 20000000

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

void create_matrix(int mat[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf(" %d",&mat[i][j]);
            if(mat[i][j] == 0 && i != j)
            {
                mat[i][j]= MAX;
            }            
        }        
    }
}

int Floyd_Warshall_algorithm(int u, int v, int mat[N][N])
{   
    int dist[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dist[i][j] = mat[i][j];
        }
    }

    for (int k = 0; k < N; k++)
    {    
        for (int i = 0; i < N; i++)
        {
            for(int j=0; j<N; j++)
            {
                if(i==j)
                {
                    dist[i][j]=0;
                }
                else 
                {
                    if(i==k || j==k)
                    {
                        continue;
                    }
                    else
                    {
                        dist[i][j] = min(dist[i][j], (dist[i][k] + dist[k][j]));
                    }
                }
            }
        } 
    }
    if (dist[u][v] >=  MAX ||  u==v)
    {
        return -1;
    }
    return  dist[u][v];
}

void check_path(int mat[N][N])
{
    int i,j;
    scanf(" %d %d", &i,&j);
    int ans = Floyd_Warshall_algorithm(i, j, mat);
    if(ans == -1)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }         
}

void printPath(int mat[N][N])
{
    int i,j;
    scanf(" %d %d", &i,&j);
    int ans = Floyd_Warshall_algorithm(i, j, mat);
    if(ans == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", ans);
    }
}