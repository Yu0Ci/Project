#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
    //������������
    int a1,b1,a2,b2,c,d1,d2,e,e1,x,y,i,choice,grade=0;
    int answer[100];
    printf("the Choice of Language (English/Chinese)(Ӣ��/����):\n");
    printf("0----English/Ӣ��\n1----Chinese/����\n");
    printf("Please input you choice/���������ѡ��:");
    scanf("%d",&choice);
	if(choice==0||choice==1) 
	{
    srand((unsigned)time(NULL));
    for(int j=0;j<10;j++)
	{
        a1=rand()%10;
        b1=rand()%10;
        a2=rand()%10;
		b2=rand()%10;
        c=rand()%9;
		//�����
		if(c>4)
		{
		 if(a2==0)
           a2+=1;
         if(b2==0)
           b2+=1;
 
         if(a1>a2)
		 {
	      d1=a1;a1=a2;a2=d1;
		 }
        if(b1>b2)
		{
	     d1=b1;b1=b2;b2=d1;
		}
		}
        switch(c)
		{
            case 0:printf("%d+%d=",a1,b1);
				   answer[c]=a1+b1;
	               break;
            case 1:if(a1<b1)
				   {
               d1=a1;a1=b1;b1=d1;
				   }
	           printf("%d-%d=",a1,b1);
			   answer[c]=a1-b1;
	           break;
           case 2:printf("%d*%d=",a1,b1);
			   answer[c]=a1*b1;
	           break;
          case 3:if(a1==0) a1+=1;
	          printf("%d^%d=",a1,b1);
              if(b1==0) 
				  a1=1;
	          d1=a1;
              for( i=1;i<b1;i++)
			  {a1=a1*d1;}
              answer[c]=a1;
              break;
           case 4:if(b1==0)
               b1+=1;
               printf("%d/%d=",a1,b1);
			   x=a1;
			   y=b1;
               break;
		  case 5:printf("%d/%d+%d/%d=",a1,a2,b1,b2);
			     x=a1*b2+a2*b1;
                 y=b2*a2;	
                 break;
          case 6:y=a2*b2;
	             d1=a1*b2;
	             d2=a2*b1;
	            if(d1<d2)
				{
                 printf("%d/%d-%d/%d=",b1,b2,a1,a2);
	     	     x=d2-d1;
				}
				else
				{
	             printf("%d/%d-%d/%d=",a1,a2,b1,b2);
	             x=d1-d2;
				}
                break;
         case 7:printf("%d/%d*%d/%d=",a1,a2,b1,b2);
			    x=a1*b1;
	            break;
        case 8:if(b2==0)
			    b2+=1;    
               printf("(%d/%d)/(%d/%d)=",a1,a2,b1,b2);
			   x=a1*b2;
			   y=a2*b1;
               break;   
		}
		switch(choice)
		{//Ӣ��
		case 0:
		if(c<4)
		{
        scanf("%d",&e);
		if(e==answer[c])
		{
	        grade+=1;
		    printf("You are right");
		}
		else
			printf("You are wrong");
		}
		else
		{
        printf("\n quotient= ");
        scanf("%d",&e);
	    printf("\n remainder=");
	    scanf("%d",&e1);
		for(i=2;i<10;i++)
			{
	         if((x%i==0)&&(y%i==0))
			 { x=x/i;y=y/i;}
			}
         if( (e==x/y)&&(e1==x%y))
		 {
			 grade+=1;
             printf("You are right");
		 }
         else
         printf("You are wrong");
		}
		break;
		//����
		case 1:
        if(c<4)
		{
        scanf("%d",&e);
		if(e==answer[c])
		{
	        grade+=1;
		    printf("������");
		}
		else
			printf("��������");
		}
		else
		{
        printf("\n quotient= ");
        scanf("%d",&e);
	    printf("\n remainder=");
	    scanf("%d",&e1);
		for(i=2;i<10;i++)
			{
	         if((x%i==0)&&(y%i==0))
			 { x=x/i;y=y/i;}
			}
         if( (e==x/y)&&(e1==x%y))
		 {
			 grade+=1;
             printf("������");
		 }
         else
         printf("��������");
		}
		break;
		default:printf("\n");
        }	
printf("\n");
}
printf("grade: %d \n",grade);
}
else 
printf("input 0 or 1/ֻ������0����1:");
}
