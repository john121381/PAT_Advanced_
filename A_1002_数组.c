#include<stdio.h>
/*多项式相加，采取结构体数组，依次比较两行数的指数大小，然后复制到结果数组，如何相同且系数相加为0，
						则进行下一步指数比较。当一行处理完了，将另一行复制到结果多项式中，最后输出注意空格*/ 
struct poly{
	int zhushu;
	double xishu;
}p1[10],p2[10],p3[10];
int main(){
	int m,n,count=0,i=0,j=0;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d %lf",&p1[i].zhushu,&p1[i].xishu);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %lf",&p2[i].zhushu,&p2[i].xishu);
	}
	while(i!=m&&j!=n){
		if(p1[i].zhushu>p2[j].zhushu){
			p3[count].zhushu=p1[i].zhushu;
			p3[count].xishu=p1[i].xishu;
			count++;i++;
		}
		else if(p1[i].zhushu<p2[j].zhushu){
			p3[count].zhushu=p2[j].zhushu;
			p3[count].xishu=p2[j].xishu;
			count++;j++;
		}
		else{
			if(p1[i].xishu+p2[i].xishu==0){
				i++;j++;
			}
			else{
				p3[count].zhushu=p1[i].zhushu;
				p3[count].xishu=p1[i].xishu+p2[j].xishu;
				count++;i++;j++;
			}
		}
	}
	while(i!=m){
		p3[count].zhushu=p1[i].zhushu;
			p3[count].xishu=p1[i].xishu;
			count++;i++;
	}
	while(j!=n){
		p3[count].zhushu=p2[j].zhushu;
		p3[count].xishu=p2[j].xishu;
		count++;j++;	
	}
	printf("%d",count);
	for(int i=0;i<count;i++){
		printf(" %d %.1lf",p3[i].zhushu,p3[i].xishu); 
	} 
	return 0;
}
