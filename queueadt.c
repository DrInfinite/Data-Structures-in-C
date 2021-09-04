#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
  int n=5;
  int queue[n], ch = 1, front = 0, rear = 0, i, j=1, x=n;
  printf("Queue using Array");
  printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit");
  while(ch)
  {
    printf("\nEnter the Choice");
    scanf("%d\n", &ch);
    switch (ch)
    {
      case 1:
      if (rear == x)
      {
        printf("\nQueue is Full");
      }
      else
      {
        printf("\nEnter no %d: ", j++);
        scanf("%d", &queue[rear++]);
      }
      break;
      case 2:
      if (front == rear)
      {
        printf("\nQueue is Empty");
      }
      else
      {
        printf("\nDeleted Element is %d", queue[front++]);
        x++;
      }
      break;
      case 3:
      printf("\nQueue Elements are:\n");
      if (front == rear)
      {
        printf("\nQueue is Empty");
      }
      else
      {
        for(i = front; i < rear; i++)
        {
          printf("%d", queue[i]);
          printf("\n");
        }
      }
      break;
      case 4:
      exit(0);
      break;
      default:
      printf("\nWrong Choice! Please see the options!");
      break;
    }
  }
  getch();
}
