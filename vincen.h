#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//factorial of a number
int Factorial(int n) {
	int f=1;
	for(int i= 1;i <= n;i++)
		f *= i;
	return f;
}
//It'll Check a number is prime or not
int Prime(int n) {
	if(n <= 1)
		return 0;
	else {
		for(int i=2;i<n;i++){
			if(n%i == 0)
				return 0;	
		}
		return 1;
	}
}
// Reverse a number
int Reverse(int n) {
	int rev=0;
	while(n != 0) {
		int last_digit = n%10;
		rev = rev* 10 + last_digit;
		n = n/10;
	}
	return rev;
}
//Count the number of digits in a number
int CountDigit(int n) {
	int count=0;
	while(n > 0){
		count += 1;
		n = n/10;
	}
	return count;
}
//Check if a number is armstrong or not
int ArmStrong(int n) {
	int count = CountDigit(n);
	int sum = 0;
	int num = n;
	while(n > 0) {
		int last_digit = n%10;
		int res=1;
		for(int i=1; i <= count;i++)
			res *= last_digit;
		sum += res;
		n = n/10;
	}
	if (sum == num)
		return 1;
	else 
		return 0;	
}
//Check a number is palindrome or not
int Palindrome(int n) {
	int rev = Reverse(n);
	if(n == rev) return 1;
	else return 0;
}
//Print fibonacci series of upto n
void PrintFibonacci(int n) {
	if(n == 0)
		printf("%d",0);
	else if(n == 1)
		printf("%d",1);
	else {
		int a=0,b=1;
		for(int i=1;i <=n;i++){
			printf("%d ",a);
			int temp=a+b;
			a = b;
			b  = temp;
		}
		printf("\n");
	}
}
//Check a number is strong number or not
int Strong(int n) {
	int sum=0,temp=n;
	while(n>0) {
		int last_digit = n%10;
		int fact = Factorial(last_digit);
		sum += fact;
		n = n/10;
	}
	if(sum == temp) return 1;
	else return 0;
}
//Check a number is perfect number or not
int Perfect(int n) {
	int sum=0;
	for(int i =1;i < n;i++) {
		if(n%i == 0)
		sum += i;
	}
	
	if(sum == n) return 1;
	else return 0;	
}
//Sum of all the digits in a number
int SumDigits(int n) {
	int sum=0;
	while(n>0){
		sum += n%10;
		n=n/10;
	}
	return sum;
}
//Multiplication of all the digits in a number
int ProductDigits(int n) {
	int prod=1;
	while(n>0){
		prod *= n%10;
		n = n/10;
	}
	return prod;
}