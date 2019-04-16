#include <stdio.h>


int main() {
	
int a=1,b;
	
printf("lutfen birsayı giriniz asal olup olmadığını bulalım");
	scanf("%d",&b);
	
int flag=0;
	
while(a<b-1){
	    
a++;
	    
if(b%a==0){
	        
flag=1;
	        
break;
	    
}
	
}

if(flag==0)

printf(" sayı asal \n");

else

printf(" sayı asal değil \n");

}
