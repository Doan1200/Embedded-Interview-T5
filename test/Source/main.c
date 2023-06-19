#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int number;
    char operator;
} MathElement;

typedef union {
    int number;
    char operator;
} ElementData;

int calculateMathExpression(MathElement mathExpression[], int length) {
    int result = 0;
    
    for (int i = 0; i < length; i++) {
        ElementData data = {mathExpression[i].number};

        switch (mathExpression[i].operator) {
            case '+':
                result += data.number;
                break;
            case '-':
                result -= data.number;
                break;
            case '*':
                result *= data.number;
                break;
            case '/':
                result /= data.number;
                break;
        }
    }
    
    return result;
}

void parseMathExpression(const char* expression, MathElement mathExpression[], int* length) {
    int expressionLength = strlen(expression);
    int number = 0;
    int index = 0;
    
    for (int i = 0; i < expressionLength; i++) {
        char currentChar = expression[i];
        
        if (currentChar >= '0' && currentChar <= '9') {
            number = number * 10 + (currentChar - '0');
        } else if (currentChar == '+' || currentChar == '-' || currentChar == '*' || currentChar == '/') {
            mathExpression[index].number = number;
            mathExpression[index].operator = currentChar;
            number = 0;
            index++;
        }
    }
    
    mathExpression[index].number = number;
    mathExpression[index].operator = '\0';
    
    *length = index + 1;
}

int main() {
    char expression[] = "2+30-4+53+5*40";
    MathElement mathExpression[20];
    int length = 0;
    
    parseMathExpression(expression, mathExpression, &length);
    
    int result = calculateMathExpression(mathExpression, length);
    
    printf("Kết quả: %d\n", result);
    
    return 0;
}
