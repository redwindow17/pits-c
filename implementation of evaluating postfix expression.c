#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_STACK_SIZE - 1) {
        printf("Error: Stack overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

int evaluate_postfix(char *expression) {
    int i;
    int value1, value2, result;

    for (i = 0; expression[i]; i++) {
        if (isdigit(expression[i])) {
            push(expression[i] - '0');
        } else {
            value2 = pop();
            value1 = pop();
            switch (expression[i]) {
                case '+':
                    result = value1 + value2;
                    break;
                case '-':
                    result = value1 - value2;
                    break;
                case '*':
                    result = value1 * value2;
                    break;
                case '/':
                    result = value1 / value2;
                    break;
                case '%':
                    result = value1 % value2;
                    break;
                default:
                    printf("Invalid operator: %c\n", expression[i]);
                    exit(1);
            }
            push(result);
        }
    }

    return pop();
}

int main() {
    char expression[] = "23+5*6-";
    printf("Value of %s is %d\n", expression, evaluate_postfix(expression));
    return 0;
}

