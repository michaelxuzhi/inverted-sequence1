#include<stdio.h>
#include<math.h>
void main()
{
	int A,B,C,D,E,num,p;
	printf("请输入一个不多于5位的正整数:\n");
	scanf("%d",&num);
	printf("每位数字是%d\n",num);
	if(num>=10000)
	{
	      p=5,printf("输入的数字位数是%d\n",p);
	}
	else if(num>=1000)
	{
	      p=4,printf("输入的数字位数是%d\n",p);
	} 
	else if(num>=100)
	{
	      p=3,printf("输入的数字位数是%d\n",p);
	}
	else if(num>=10)
	{
	      p=2,printf("输入的数字位数是%d\n",p);
	}
	else if(num>=0)
	{
	      p=1,printf("输入的数字位数是%d\n",p);
	}
	A=num/10000;
	B=(num-A*10000)/1000;
	C=(num-A*10000-B*1000)/100;
	D=(num-A*10000-B*1000-C*100)/10;
	E=(num-A*10000-B*1000-C*100-D*10)/1;
	printf("这个数字的逆序为:");
	switch(p)
	{
	case 5:
	printf("%d %d %d %d %d",E,D,C,B,A);
	break;
	     case 4:
		 printf("%d %d %d %d",E,D,C,B);
		 break;
		      case 3:
			  printf("%d %d %d",E,D,C);
			  break;
			       case 2:
				   printf("%d %d",E,D);
				   break;
				        case 1:
						printf("%d",E);
						break;
	}
}
