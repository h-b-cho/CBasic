#include <stdio.h>

typedef struct
{
	char name[13];
	int kor; // 국어
	int eng; // 영어
	int math; // 수학
	float avg; // 평균
} Student;

int main()
{
	Student group[3];
	
	for(int i=0;i<3;i++)
	{
		scanf("%s", group[i].name);
		scanf("%d", &group[i].kor);
		scanf("%d", &group[i].eng);
		scanf("%d", &group[i].math);
		group[i].avg = ("%.1f", (group[i].kor+group[i].eng+group[i].math)/3.00);
	}

	for(int i=0;i<3;i++)
	{
		printf("%s %.1f\n", group[i].name, group[i].avg);
	}
	
	return 0;
}