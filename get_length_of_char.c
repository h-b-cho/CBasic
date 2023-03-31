#include <stdio.h>

int main()
{
	char ch[31]; //30자 이내의 문자열을 입력받고, 문자열의 길이를 출력하는 프로그램을 작성. 이때, 문자열의 끝에는 항상 NULL(0)이 들어간다는 점을 고려하여 배열 char ch의 길이을 31로 설정. 
    scanf("%s", ch);

	int length = 0;

	for(int i=0; ch[i]!=0; i++){
		length += 1;
	}

	printf("%d", length);
	return 0;
}
