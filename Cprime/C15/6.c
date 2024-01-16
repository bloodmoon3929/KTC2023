#include<stdio.h>
#include<stdbool.h>
struct word
{
	unsigned int word_id		: 8;
	unsigned int word_size		: 7;
	unsigned int word_position	: 2;
	bool bold					: 1;
	bool italic					: 1;
	bool underline				: 1;
};
void show_menu(struct word* pb);
void change_id(struct word* pb);
void change_size(struct word* pb);
void change_position(struct word* pb);
void word_bool(struct word* pb, int mode);
int main(void)
{
	struct word korea={1,12,0,false,false,false};
	int mode;
	show_menu(&korea);
	while ((mode = getchar()) != 'q')
	{
		while (getchar() != '\n')
			continue;
		switch (mode)
		{
		case 'f':change_id(&korea);break;
		case 's':change_size(&korea);break;
		case 'a':change_position(&korea);break;
		case 'b':word_bool(&korea, 0);break;
		case 'i':word_bool(&korea, 1);break;
		case 'u':word_bool(&korea, 2);break;
		default:
			printf("옳바르지 않은 입력입니다. 다시 입력해주세요.\n");
			break;
		}
		show_menu(&korea);
	}
	printf("끝");
	return 0;
}
void show_menu(struct word* pb)
{
	char *temp=NULL;
	printf(" ID		크기	조정배치	B	I	U\n");
	printf(" %d		%d",pb->word_id,pb->word_size);
	switch (pb->word_position)
	{
		case 0: temp = "왼쪽"; break;
		case 1: temp = "가운데"; break;
		case 2: temp = "오른쪽"; break;
	}
	printf("	%s", temp);
	printf("		%s	%s	%s\n\n",pb->bold ? "on" : "off"
		, pb->italic ? "on" : "off", pb->underline ? "on" : "off");
	printf("f) 글꼴 변경	s) 크기 변경	a) 조정배치 변경\n");
	printf("b) 볼드 토글	i) 이탤릭 토글	u) 밑줄 토글\n");
	printf("q) 종료\n");
}
void change_id(struct word* pb)
{
	int value=1;
	printf("글꼴 변경 (0~255): ");
	scanf_s("%d",&value);
	while (getchar() != '\n')
		continue;
	value &= 0XFF;
	pb->word_id = value;
}
void change_size(struct word* pb)
{
	int value=12;
	printf("글꼴 크기 (0~127): ");
	scanf_s("%d", &value);
	while (getchar() != '\n')
		continue;
	value &= 0X7F;
	pb->word_size = value;
}
void change_position(struct word* pb)
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
	pb->word_position = value;
}
void word_bool(struct word* pb,int mode)
{
	if (mode == 0)
		if (pb->bold == true)
			pb->bold = false;
		else
			pb->bold=true;
	else if (mode == 1)
		if (pb->italic == true)
			pb->italic = false;
		else
			pb->italic = true;
	else
		if (pb->underline == true)
			pb->underline = false;
		else
			pb->underline = true;
}