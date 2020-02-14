#include <stdio.h>
int main(void)
{
	int ch = 0;
	
	while(1)
	{
		ch = getchar();
		
		if (ch == EOF)
		{
			break;
		}
		
		putchar(ch);
		//putchar는 getchar바로 뒤로 들어가면 당연히 출력됨 따라서 if 뒤로 가야한다.
		//while문을 사용함으로써 한글자만 출력이 가능했던 getchar함수를 여러개의 문자도 출력이 가능하다는 걸 보여주는 문제
	}
	return 0;

}