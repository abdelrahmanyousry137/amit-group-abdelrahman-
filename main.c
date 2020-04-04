#include <stdio.h>
#include <stdlib.h>

#define size 10

int top=-1;
int arr[size];

int isempty()
{
  if(top==-1)
  {
        printf("stack is empty\n");
        return 1;
    }
        else
            return 0;
}

int isfull()
{
    if (top==size-1){
        printf("stack is full\n");
        return 1;
    }
        else
            return 0;
}

void push(int n)
{
    if(isfull())
        return;
    ++top;
    arr[top]=n;

}

void pop()
{
    if(isempty())
        return;
    --top;

}


int Top()
{
    return arr[top];
}

void print()
{
    int i;
    printf("the stack is : ");
    for(i=0;i<=top;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    print();
    pop();
    print();
    push(7);
    push(8);
    push(9);
    push(10);
    push(11);
    print();
    push(12);
    push(13);
    print();
    pop();
    pop();
    pop();
    pop();
    pop();
    print();
    pop();
    pop();
    pop();
    pop();
    pop();
    print();
    pop();
    print();

    return 0;
}
