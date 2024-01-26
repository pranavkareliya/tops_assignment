/* 
16. Write a C program to read te,perature in Centigrade and display a suitable message according to the temperature state below :
	Temp <0 then Freezing Weather
	Temp 0-10 then very cold weather
	Temp 10-20 then cold weather
	Temp 20-30 the normal in temp
	Temp 30-40 then its Hot
	Temp >=40 then its Very Hot
*/

#include<stdio.h>
int main(){
	
	int t;
	
	printf("Enter Temperature in Centigrade : ");
	scanf("%d",&t);
	
	if(t<0){
		printf("Freezing Weather.");
	} else if(t>0 && t<=10){
		printf("Very cold weather.");
	} else if(t>10 && t<=20){
		printf("Cold weather.");
	} else if(t>20 && t<=30){
		printf("Normal Temprerature.");
	} else if(t>30 && t<=40){
		printf("Hot Temperature.");
	} else {
		printf("Very Hot Temperature.");
	}
	
	return 0;
	
}
