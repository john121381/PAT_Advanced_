#include<stdio.h>
/*���ַ�Ϊ�������ǣ�ȡ����ȡ����λ��ȡ���û����λ��0���루%03d��ʾ)��
					Ȼ�������һ��ȡ�࣬���ڶ�����2�����ţ�ֱ��һ��������*/
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
