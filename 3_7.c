#include<stdio.h>

int judgeyear(int year){	
    int flag=0;
    if ((year%4==0&&year%100!=0)||year%400==0)
		flag=1;
    return flag;
}
int main(){
    int year,month,day;
    int flag_1=1; 
    scanf("%d%d%d",&year,&month,&day);
    if(day>31||day<1||month>12||month<0||year<0 )
           flag_1=0;
    else if(day==31&&(month!=1&&month!=3&&month!=5&&month!=7&&month!=8&&month!=10&&month!=12))
           flag_1=0;
    else if(day==30&&(month!=4&&month!=6&&month!=9&&month!=11))
           flag_1=0;
    else if(month==2){
    	if(day==29)
    	flag_1=judgeyear(year);
    	else if(day>=29)
    	flag_1=0;
    }
    if(flag_1==1)printf("yes");
    else  printf("no");
    return 0;
}
