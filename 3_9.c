#include<stdio.h>

int judgeyear(int year){
    int flag=0;//ƽ�귵��0
    if ((year%4==0 && year%100 !=0) || year%400==0)
        flag=1;//���귵��1
    return flag;
}
/*���ⲻ�������ڵĺϷ��ԣ�Ĭ������������ǺϷ���*/
int main(){
    int year,month,day,flag_1;
    int dayNumber=365;
    scanf("%d%d%d",&year,&month,&day);
    flag_1=judgeyear(year);
    if(flag_1==1)
	dayNumber=366;
    switch(month){
       	case 1:dayNumber -=31;
        case 2:
        	dayNumber -=28;
        	if(flag_1==1)
        	dayNumber -=flag_1;
      	case 3:dayNumber -=31;
   		case 4:dayNumber -=30;
       	case 5:dayNumber -=31;
     	case 6:dayNumber -=30;
      	case 7:dayNumber -=31;
      	case 8:dayNumber -=31;
     	case 9:dayNumber -=30;
       	case 10:dayNumber -=31;
    	case 11:dayNumber -=30;
      	case 12:
		  	dayNumber -=31;
		  	break;
       	default:
		   	printf("Input error!");
		 	break;
    }
    printf("%d",dayNumber+day);
    return 0;
}
