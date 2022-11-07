/*Assume price of 1 USD is INR 76.23
Write a program to take the amount 
in INR and convert it into USD.*/

#include <stdio.h>

int main() {
	float rupees;

	printf("Please enter rupees: ");
	scanf("%f", &rupees);

	float dollars = rupees / 76.23;

	printf("%.2f Dollars", dollars);
}