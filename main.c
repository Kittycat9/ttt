#include <stdio.h>

struct ttt
{
	char s1,s2,s3,s4,s5,s6,s7,s8,s9;
};

void print(struct ttt * b)
{
	printf(" %c | %c | %c\n", b->s1,b->s2,b->s3);
	printf("-----------\n");
	printf(" %c | %c | %c\n", b->s4,b->s5,b->s6);
	printf("-----------\n");
	printf(" %c | %c | %c\n", b->s7,b->s8,b->s9);
}

int main(int argc, char** args)
{
	struct ttt board={' ',' ',' ',' ','x',' ',' ',' ','o'};
	printf("Hello world!\n");
	print(&board);
	return 0;
}
