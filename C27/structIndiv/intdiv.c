typedef struct div 
{
	int quotient;//��
	int remainder;//������
}Div;
Div dividing(int num1, int num2)
{
	struct div dval;
	dval.quotient = num1 / num2;
	dval.remainder = num1 % num2;
	return dval;
}