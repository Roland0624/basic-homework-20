#include<stdio.h>
#include<stdlib.h>

struct Phone
{
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;	
}

phone[2]; 
int main(void)
{
	int i=0;
	struct Phone phone[5]=
		{
		"htc","u12+","2015/4/23",15000,"roland","0928066514",
	    "apple","XR","2019/6/12",25000,"shunyu","0928066514",
		"apple","XS","2019/4/29",30000,"jamas","0123123123",
		"apple","XS MAX","2019/6/12",50000,"curry","0406362189",
		"apple","I8","2018/6/12",25000,"james","070096325"
		 };
	for(i=0;i<5;i++)
	{
		printf("%s的資料----------\n",phone[i].use_name);
		printf("手機品牌:");
		puts(phone[i].phone_brand);
		printf("手機型號:");
		puts(phone[i].phone_model);
		printf("手機出廠日期:");
		puts(phone[i].phone_yearofmanufacture);
		printf("手機價格:");
		printf("%d\n",phone[i].phone_price);
		printf("使用者:");
		puts(phone[i].use_name);
		printf("手機號碼:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
