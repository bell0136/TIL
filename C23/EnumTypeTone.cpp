#include <stdio.h> 
typedef enum syllable { Do, Re, Mi, Fa, So, Ra, Ti }Syllable;

void sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("도는 하얀 도라지 ♭");
		return 0;
	case Re:
		puts("레는 둥근레코드 ♩");
		return 0;
	case Mi:
		puts("미는 파란 미나리 ♩♪");
		return 0;
	case Fa:
		puts("파는예쁜 파랑새 ♭♩♪");
		return 0;
	case So:
		puts("솔은 작은 솔방울 ♭♩♪");
		return 0;
	case Ra:
		puts("라는 라디오고요~~ ♭♩♪♬");
		return 0;
	case Ti:
		puts("시는 졸졸 시냇물 ♩♪");
		return 0;
	}
	puts("다 함께 부르자↗ 도레미파솔라시도↗솔↗도↗  ");
}

int main(void)
{
	Syllable tone;
	for (tone = 0; tone < 7; tone += 1)
	{
		sound(tone);
	}

	return 0;
}