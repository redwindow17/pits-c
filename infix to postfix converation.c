#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100
#define MAX_EXPRESSION_SIZE 100

char stack[MAX_STACK_SIZE];
int top = -1;

int precedence(char operator) {
    switch (operator) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

int is_operator(char character) {
    switch (character) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            return 1;
    }
    return 0;
}

void push(char value) {
    if (top == MAX_STACK_SIZE - 1) {
        printf("Error: Stack overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

char pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

char peek() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        exit(1);
    }
    return stack[top];
}

void infix_to_postfix(char *expression, char *result) {
    int i, j = 0;

    for (i = 0; expression[i]; i++) {
        if (isdigit(expression[i])) {
            result[j++] = expression[i];
        } else if (expression[i] == '(') {
            push(expression[i]);
        } else if (expression[i] == ')') {
            while (peek() != '(') {
                result[j++] = pop();
            }
            pop();
        } else if (is_operator(expression[i])) {
            while (top != -1 && precedence(expression[i]) <= precedence(peek()))
			 {
                result[j++] = pop();
            }
        }}}

