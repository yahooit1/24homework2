#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;

 printf("[----- [Gahyun KIM] [2020045070] -----]\n");


printf("[checking values before ptr = &i] \n"); // ptr=&i하기 전의 값들 출력해보기
printf("value of i == %d\n", i); //i 값 출력 : 1234
printf("address of i == %p\n", &i); //i의 값 1234가 저장되어 있는 주소 출력 
printf("value of ptr == %p\n", ptr); //ptr의 실제 값 출력 : 초기화가 안되어 있으므로 NULL값 출력
printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); //i의 값 출력 : 1234
printf("address of i == %p\n", &i); //i의 값 1234가 저장되어 있는 주소 출력
printf("value of ptr == %p\n", ptr); //ptr의 값 출력 즉, i의 주소가 출력
printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr); //ptr에 저장된 주소가 가리키는 값을 출력. 즉, i의 값 1234가 출력됨 
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); //i의 값 출력
printf("address of i == %p\n", &i); //i의 값 1234가 저장되어 있는 주소 출력 (변하지 않음)
printf("value of ptr == %p\n", ptr); //ptr의 값 출력 즉, i의 주소가 출력됨
printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr); //ptr에 저장된 주소가 가리키는 값을 출력. 즉, i의 값 1234가 출력됨 
printf("value of dptr == %p\n", dptr); //dprt의 값 출력 즉, ptr의 주소 출력
printf("address of dptr == %p\n", &dptr); //dprt의 주소 출력
printf("value of *dptr == %p\n", *dptr); //dprt에 저장된 주소가 가리키는 값-> ptr의 값 -> i의 주소 출력
printf("value of **dptr == %d\n", **dptr); //dprt에 저장된 주소가 가리키는 값이 가리키는 값 출력  즉 i의 값 1234가 출력됨.
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); //포인터 변수 ptr을 사용해 ptr에 저장된 주소가 가리키는 값을 7777로 바꿈 즉, i값을 바꿨음.
printf("value of i == %d\n", i); //바뀐 i의 값 7777 출력
printf("value of *ptr == %d\n", *ptr); //prt에 저장된 주소가 가리키는 값 즉 i의 값 7777 출력
printf("value of **dptr == %d\n", **dptr); //dprt에 저장된 주소가 가리키는 값이 가리키는 값 즉,i의 값 7777
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n"); //이중 포인터 dptr을 사용해 i의 값을 8888로 바꿈
printf("value of i == %d\n", i); //i의 값 출력 8888
printf("value of *ptr == %d\n", *ptr); //ptr에 저장된 주소가 가리키는 값 출력 즉, i값 8888이 출력됨.
printf("value of **dptr == %d\n", **dptr); //이중포인터 dptr이 가리키는 값이 가리키는 값 출력. 즉, i값 8888
return 0;
}