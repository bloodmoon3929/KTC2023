#include<stdio.h>
#define FONT_ID_MASK		0b11111111UL
#define FONT_SIZE_MASK		0b111111100000000UL
#define FONT_SIZE_SHIFT		8
#define FONT_POSITION_MASK	0b11000000000000000UL
#define FONT_POSITION_SHIFT 15
#define BOLD_MASK			0b100000000000000000UL
#define BOLD_SHIFT			16
#define ITALIC_MASK			0b1000000000000000000UL
#define ITALIC_SHIFT		17
#define UNDERLINE_MASK		0b10000000000000000000UL
#define UNDERLINE_SHIFT		18
void show_menu(unsigned long font);
void change_id(unsigned long* font);
void change_size(unsigned long* font);
void change_position(unsigned long* font);
void word_bool(unsigned long* font, int mode);
int main(void)
{
	unsigned long font = 0b00000000000000000000UL|1|12<<FONT_SIZE_SHIFT
		|0<<FONT_POSITION_SHIFT|0<<BOLD_SHIFT|0<<ITALIC_SHIFT|0<<UNDERLINE_SHIFT;
	int mode;
	show_menu(font);
	while ((mode = getchar()) != 'q')
	{
		while (getchar() != '\n')
			continue;
		switch (mode)
		{
		case 'f':change_id(&font);break;
		case 's':change_size(&font);break;
		case 'a':change_position(&font);break;
		case 'b':word_bool(&font, 0);break;
		case 'i':word_bool(&font, 1);break;
		case 'u':word_bool(&font, 2);break;
		default:
			printf("올바르지 않은 입력입니다. 다시 입력해주세요.\n");
			break;
		}
		show_menu(font);
	}
	printf("끝");
	return 0;
}
void show_menu(unsigned long font)
{
	char *temp=NULL;
	printf(" ID		크기	조정배치	B	I	U\n");
	printf(" %d		%d",font&FONT_ID_MASK,(font&FONT_SIZE_MASK)>>FONT_SIZE_SHIFT);
	switch ((font&FONT_POSITION_MASK)>>FONT_POSITION_SHIFT)
	{
		case 0: temp = "왼쪽"; break;
		case 1: temp = "가운데"; break;
		case 2: temp = "오른쪽"; break;
	}
	printf("	%s", temp);
	printf("		%s	%s	%s\n\n",(font&BOLD_MASK)>>BOLD_SHIFT ? "on" : "off"
		,(font&ITALIC_MASK)>>ITALIC_SHIFT ? "on" : "off", (font&UNDERLINE_MASK)>>UNDERLINE_SHIFT ? "on" : "off");
	printf("f) 글꼴 변경	s) 크기 변경	a) 조정배치 변경\n");
	printf("b) 볼드 토글	i) 이탤릭 토글	u) 밑줄 토글\n");
	printf("q) 종료\n");
}
void change_id(unsigned long* font)
{
	int value=1;
	printf("글꼴 변경 (0~255): ");
	scanf_s("%d",&value);
	while (getchar() != '\n')
		continue;
	*font &= ~FONT_ID_MASK;
	*font |= (value&FONT_ID_MASK);
}
void change_size(unsigned long* font)
{
	int value=12;
	printf("글꼴 크기 (0~127): ");
	scanf_s("%d", &value);
	while (getchar() != '\n')
		continue;
	*font &= ~FONT_SIZE_MASK;
	*font |= (value << FONT_SIZE_SHIFT) & FONT_SIZE_MASK;
}
void change_position(unsigned long* font)
{
	int value=0;
	char ch;
	printf("조정배치 방식: \n");
	printf("l)left	c)ceter	r)right \n");
	scanf_s("%c",&ch,sizeof(ch));
	while (getchar() != '\n')
		continue;
	switch (ch)
	{
		case 'l':value = 0; break;
		case 'c':value = 1; break;
		case 'r':value = 2; break;
	}
	*font &= ~FONT_POSITION_MASK;
	*font |= (value << FONT_POSITION_SHIFT) & FONT_POSITION_MASK;
}
void word_bool(unsigned long* font,int mode)
{
	switch (mode)
	{
		case 0 : *font ^= BOLD_MASK;break;
		case 1 : *font ^= ITALIC_MASK;break;
		case 2 : *font ^= UNDERLINE_MASK;break;
	}
}