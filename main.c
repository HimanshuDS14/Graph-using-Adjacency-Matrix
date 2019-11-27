#include<stdio.h>
#define size 5

 //initial matrix is zero
 void init(int arr[][size])
 {
     for(int i=0;i<size ;i++)
     {
         for(int j=0;j<size;j++)
         {
             arr[i][j] = 0;
         }
     }

 }

 void addEdge(int arr[][size] , int src , int dest)
 {
     arr[src][dest] = 1;

 }
  void addEdge1(int arr[][size] , int src , int dest)
 {
     arr[dest][src] = 1;

 }

 void printGraph(int arr[][size])
 {
     for(int i=0;i<size;i++)
     {
         for(int j=0;j<size;j++)
         {
             printf("%d " , arr[i][j]);
         }
         printf("\n");
     }
 }


 int main()
 {

     int matrix[size][size];

     init(matrix);


     addEdge(matrix , 0,1);
     addEdge(matrix , 0,2);
     addEdge(matrix , 0,3);
     addEdge(matrix , 1,3);
     addEdge(matrix , 1,4);
     addEdge(matrix , 2,3);
     addEdge(matrix , 3,4);



    printf("\nUndirected Graph is  \n");
     printGraph(matrix);

     printf("\nDirected graph is \n");
     addEdge1(matrix , 0,1);
     addEdge1(matrix , 0,2);
     addEdge1(matrix , 0,3);
     addEdge1(matrix , 1,3);
     addEdge1(matrix , 1,4);
     addEdge1(matrix , 2,3);
     addEdge1(matrix , 3,4);
     printGraph(matrix);



 }


