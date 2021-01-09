#include<stdio.h>
int main()
{
	int customerID;
	float unit;
	char cusName[40];
	float netamount;
	float rate=0.00;
	float surcharge;
	float finalamount;
	//float surcharge;

		///printf("custmorid=1001\n");
		///printf("costmorname=akash\n");
		///printf("unit=1001\n");
		printf("Enter Customer ID: ");
		scanf("%d",&customerID);

		printf("Enter customer Name: ");
		scanf("%s",&cusName);
		printf("Enter Unit: ");
		scanf("%f",&unit);
		if(unit<=199)
		{	
			rate=1.50;
			printf("Unit = %f,Rate = %f\n",unit,rate);
		}
		else if((200<=unit)&&(unit<400))
		{

			rate=1.80;
			printf("Unit = %f,Rate = %f\n",unit,rate);
		}
		else if((unit>=400)&&(unit<600))
		{
			rate=2.0;
			printf("Unit = %f,Rate = %f\n",unit,rate);
		}
		else if(unit>600)
		{
			rate=2.0;
			printf("Unit = %f,Rate = %f\n",unit,rate);
		}

		netamount = unit * rate;

		//calculate surcharge
		if(netamount > 400)
		{
			surcharge = (15 * netamount)/100;
		}
		else
		{
			surcharge = 0.0;
		}
		
		finalamount= netamount+surcharge;

		//check for min Balance
		if(netamount<100)
		{
			finalamount=100;
		}

		printf("\n\nEntered Customer ID:%d\n",customerID);
		printf("Entered Customer Name = %s\n",cusName);
		printf("Entered Used Unit:%f\n",unit);
		printf("Rate Applied:%f\n",rate);
		printf("Surcharge at 15percent = %f\n",surcharge);
		printf("Net Amount = %f\n",netamount);
		printf("Final Amount to be paid :%f\n",finalamount);










	return 0;
}
