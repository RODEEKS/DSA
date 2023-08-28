//Given an expression string exp, write a program to examine whether the pairs and the orders of “{“, “}”,
//“(“, “)”, “[“, “]” are correct in the given expression.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 10

struct Stack{
    int top;
    char arr[MAX_SIZE];
} st;

void init(){
    st.top = -1;
}

bool isEmpty(){
    if(st.top == -1){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(st.top == MAX_SIZE-1){
        return true;
    }else{
        return false;
    }
}

void push(char item){
    if(isFull()){
            printf("Stack is full");
    }else{
        st.top++;
        st.arr[st.top] = item;
    }
}

void pop(){
    if(isEmpty()){
        printf("Stack is empty");
    }else{
        st.top--;
    }
}

char gettop(){
    return st.arr[st.top];
}

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

void main()
{
    char in_expr[MAX_SIZE];
    int length=0,i,j;

    init();

    printf("Enter an expression to check:\n");
    scanf("%[^\n]s", in_expr);

    length = strlen(in_expr);

    for(i=0;i<length;i++){
        if(in_expr[i] == '(' || in_expr[i] == '{' || in_expr[i] == '['){
                push(in_expr[i]);
        }else if(in_expr[i] == ')' || in_expr[i] == '}' || in_expr[i] == ']'){
            if(isEmpty() || !ArePair(gettop(),in_expr[i])){
                printf("\nNot Balanced\n");
                return;
            }else{
                pop();
            }
        }
    }
    if(isEmpty()){
        printf("\nBalanced\n");
    }else{
        printf("\nNot Balanced\n");
    }
}
