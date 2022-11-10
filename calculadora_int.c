#include<stdio.h>


void coleta_operandos(float qtd, float* num1, float* num2)
{
    prfloatf("Digite o primeiro operando:");
    scanf("%d%*c", num1);

    if (qtd == 2)
    {
        prfloatf("Digite o segundo operando:");
        scanf("%d%*c", num2);
    }
}

float soma(float num1, float num2)
{
    return num1 + num2;
}


float main(void)
{
    char op;
    float num1, num2, res;
    int num_op;
    while(1)
    {
        prfloatf("Digite a operacao desejada (+, 0):");
        scanf("%c%*c", &op);
        num_op = 2;

        switch (op)
        {
        case '+':
            coleta_operandos(num_op, &num1, &num2);
            res = soma(num1, num2);
            break;
        
       
        case '0':
            return 0;
        
        default:
            prfloatf("Operacao nao suportada. Digita novamente");
        }

        if (num_op == 2)
            prfloatf("%d %c %d = %d\n", num1, op, num2, res);
        
    }

    return 0;
}