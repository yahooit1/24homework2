#include <stdio.h>
int main()
{
 char charType;
 int integerType;
 float floatType;
 double doubleType;
 
 printf("[----- [Gahyun KIM] [2020045070] -----]\n");

 printf("Size of char: %ld byte\n",sizeof(charType)); //문자형 변수 charType의 크기 출력 : 1 byte
 printf("Size of int: %ld bytes\n",sizeof(integerType)); //정수형 변수 integerType의 크기 출력 : 4 byte
 printf("Size of float: %ld bytes\n",sizeof(floatType)); //실수형 변수 floatType의 크기 출력 : 4 byte
 printf("Size of double: %ld bytes\n",sizeof(doubleType)); //실수형 변수 doubleType의 크기 출력 : 8 byte
 printf("-----------------------------------------\n");
 printf("Size of char: %ld byte\n",sizeof(char)); //자료형 char의 크기 출력 : 1 byte
 printf("Size of int: %ld bytes\n",sizeof(int)); //자료형 int의 크기 출력 : 4 byte
 printf("Size of float: %ld bytes\n",sizeof(float)); //자료형 float의 크기 출력 : 4 byte
 printf("Size of double: %ld bytes\n",sizeof(double)); //자료형 double의 크기 출력 : 8byte
 printf("-----------------------------------------\n");
 printf("Size of char*: %ld byte\n",sizeof(char*)); //자료형 char의 주소 값의 크기 출력 : 4 byte
 printf("Size of int*: %ld bytes\n",sizeof(int*)); //자료형 int의 주소 값의 크기 출력 : 4 byte
 printf("Size of float*: %ld bytes\n",sizeof(float*)); //자료형 float의 주소 값의 크기 출력 : 4 byte
 printf("Size of double*: %ld bytes\n",sizeof(double*)); //자료형 double의 주소 값의 크기 출력 : 4 byte
 return 0;
}
