#include<stdio.h>
/*数字分为正负考虑，取余来取得三位，取余后没有三位用0补齐（%03d表示)，
					然后进行下一步取余，由于顶多有2个逗号，直接一步步考虑*/
int main(){
  int A,B,C,D,E,F;
  scanf("%d %d",&A,&B);
  C=A+B;
  if(C>=0){
  	D=C%1000;
  	if(D==C){
  		printf("%d",D);
  		return 0; 
  	}
 	else{
  		C=C/1000;
  		E=C%1000;
  		if(E==C){
		  printf("%d,%03d",E,D);
		  return 0;
		}
  		C=C/1000;
  		F=C%1000;
  		if(F==C){
  			printf("%d,%03d,%03d",F,E,D);
  			return 0;
  		}
  	}
  }
  else{
  	C=-C;
  	D=C%1000;
  	printf("-");
  	if(D==C){
  		printf("%d",D);
  		return 0; 
  	}
 	else{
  		C=C/1000;
  		E=C%1000;
  		if(E==C){
		  printf("%d,%03d",E,D);
		  return 0;
		}
  		C=C/1000;
  		F=C%1000;
  		if(F==C){
  			printf("%d,%03d,%03d",F,E,D);
  			return 0;
  		}
  	}
  }
  return 0; 
}
