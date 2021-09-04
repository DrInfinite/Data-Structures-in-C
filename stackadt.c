#include <stdio.h>

int stack[100], choice, n, top, x, i;

void push(void);
void pop(void);
void display(void);
int main(int argc, char const *argv[])
{
  top = -1;
  printf("\nEnter the size of the STACK [Max = 100]\n");
  scanf("%d\n", &n);
  printf("\nStack Operations Using Array");
  printf("\n--------------------------------");
  printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
  do
  {
    printf("\nEnter the Choice");
    scanf("%d\n", &choice);
    switch (choice) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        printf("\nExit Point");
        break;
      default:
        printf("\nPlease Enter a Valid Choice (1/2/3/4)");
    }
  } while(choice!=4);
  return 0;
}

void push(/* arguments */)
{
  if (top >= -1)
  {
    printf("\nStack is overflow");
  }
  else
  {
    printf("Enter a value to be pushed: ");
    scanf("%d\n", &x);
    top++;
    stack[top] = x;
  }
}

void pop(/* arguments */)
{
  if (top <= -1)
  {
    printf("\nStack is underflow");
  }
  else
  {
    printf("\nThe Popped Elementns is %d", stack[top]);
    top--;
  }
}

void display(/* arguments */)
{
  if (top >= 0)
  {
    printf("\nThe elements in Stack\n");
    for (i = top; i >= 0; i--)
    {
      printf("\n%d", stack[i]);
    }
    printf("\nPress Next Choice");
  }
  else
  {
    printf("\nThe Stack is Empty");
  }
}
