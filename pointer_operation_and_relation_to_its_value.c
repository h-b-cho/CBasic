#include <stdio.h>

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	double arr2[5] = {10.1, 20.2, 30.3, 40.4, 50.5};
	int *arrPtr = arr;
	double *arrPtr2 = arr2;

	printf("포인터 주소 : %d %d\n", arrPtr++, arrPtr2++);// 현재 포인터 주소 1874031680 1874031640 이다. 이 포인터 주소에 각각 +1씩 후위 연산해주니, 그 결과가
	printf("증가 연산 후 : %d %d\n", arrPtr, arrPtr2);   // 포인터 주소가 1874031684 1874031648 이 된다. 각각 +4, +8이 된 결과다. int, double의 자료형 크기.
	printf("변수 값 : %d %.1f\n", *arrPtr, *arrPtr2);   // 그렇다면 값은? 이제 첫번째(i==0) 원소의 값이 아닌 두번째(i==1) 원소의 값이 출력되게 됐다. ( 20 20.20 )

	arrPtr += 3;									// 그럼 이번엔 포인터 주소에 각각 +3씩 해보자.
	arrPtr2 += 3;
	printf("증가 연산 후 : %d %d\n", arrPtr, arrPtr2); // 그렇게 되면 주소가 +12, +24씩 옮겨갔음을 알 수 있다. ( 1874031696 1874031672 ) 즉, 포인터 변수가 n만큼 더하거나 뺼 때 값은 자료형의 크기 x n만큼 증가한다는 것이다. 이는 감소 연산도 동일하다.
	printf("변수 값 : %d %.1f\n", *arrPtr, *arrPtr2); // 그렇다면 값은? 이제 두번째(i==1) 원소의 값이 아닌 다섯번째(i==4) 원소의 값이 출력되게 됐다. ( 50 50.50 )

	return 0;
}