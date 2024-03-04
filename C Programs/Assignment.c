#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100

typedef struct
{
    int data[SIZE];
    int top;
} Stack;

void init_stack(Stack *stack);
int is_empty(Stack *stack);
int is_full(Stack *stack);
void push(Stack *stack, int value);
int pop(Stack *stack);
int peek(Stack *stack);
int is_float(char *c);

int main(void)
{
    Stack stack;
    init_stack(&stack);
    char input[100];
    for (;;)
    {
        printf("\nEnter numbers or operation : ");
        scanf("%s", input);
        if (is_float(input) == 1)
        {
            fprintf(stderr, "# Invalid input\n");
        }
        else if (isdigit(input[0]) || (input[0] == '-' && isdigit(input[1])))
        {
            push(&stack, atoi(input));
        }
        else if (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/' || input[0] == '%')
        {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int result;
            switch (input[0])
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            case '%':
                result = operand1 % operand2;
                break;
            }
            push(&stack, result);
            printf("Result = %d", peek(&stack));
            printf("\n");
        }
        else if (input[0] == '?')
        {
            printf("Stack: ");
            for (int i = 0; i <= stack.top; i++)
            {
                printf("%d ", stack.data[i]);
            }
            printf("\n");
        }
        else if (input[0] == '^')
        {
            int top = pop(&stack);
            printf("%d\n", top);
        }
        else if (input[0] == '!')
        {
            exit(0);
        }
        else
        {
            fprintf(stderr, "# Invalid input\n");
        }
    }
    return 0;
}

void init_stack(Stack *stack)
{
    stack->top = -1;
}

int is_empty(Stack *stack)
{
    return stack->top == -1;
}

int is_full(Stack *stack)
{
    return stack->top == SIZE - 1;
}

void push(Stack *stack, int value)
{
    if (is_full(stack))
    {
        fprintf(stderr, "# Stack overflow\n");
        return 0;
    }
    stack->data[++stack->top] = value;
}

int pop(Stack *stack)
{
    if (is_empty(stack))
    {
        fprintf(stderr, "# Stack underflow\n");
        return 0;
    }
    return stack->data[stack->top--];
}

int peek(Stack *stack)
{
    if (is_empty(stack))
    {
        fprintf(stderr, "# Stack underflow\n");
        return 0;
    }
    return stack->data[stack->top];
}

int is_float(char *c)
{
    int i;
    float f;
    f = atof(c);
    i = f;
    if (i == f)
        return 0;
    else
        return 1;
}