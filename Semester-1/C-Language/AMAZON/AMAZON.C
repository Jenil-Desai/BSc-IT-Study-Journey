#include<stdio.h>
#include<conio.h>
#include<process.h>
long int total=0;
void cred();
void homepage();
void Smartphone();
void Television();
void Laptop();
void Printer();
void Billing();
void main()
{
	clrscr();

	printf("\t\t\t=======================");
	printf("\n\t\t\tWelcome To Amazon India");
	printf("\n\t\t\t=======================");

	cred();

	getch();
}

void cred()
{
	int p;

	printf("\nEnter Password : ");
	scanf("%d",&p);

	if(p==9115)
	{
		homepage();
	}
	else
	{
		main();
	}

}

void homepage()
{
	int category;
	clrscr();

	printf("\t\t\t================================");
	printf("\n\t\t\tWelcome To Amazon India Homepage");
	printf("\n\t\t\t================================");

	printf("\n\n\t\t\t\t===============");
	printf("\n\t\t\t\tChoose Category");
	printf("\n\t\t\t\t===============");

	printf("\n\n1>. Smartphone");
	printf("\t\t\t\t\t\t3>. Laptop");
	printf("\n\n2>. Television");
	printf("\t\t\t\t\t\t4>. Printer");
	printf("\n\n5>. Exit");

	printf("\n\nSelect Category : ");
	scanf("%d",&category);

	if(category==1)
	{
		Smartphone();
	}
	else if(category==2)
	{
		Television();
	}
	else if(category==3)
	{
		Laptop();
	}
	else if(category==4)
	{
		Printer();
	}
	else if(category==5)
	{
		exit(0);
	}
	else
	{
		homepage();
	}
}
void Smartphone()
{
	int opt,product,qty;
	clrscr();

	printf("\t\t\t==================================");
	printf("\n\t\t\tWelcome To Amazon India Smartphone");
	printf("\n\t\t\t==================================");

	printf("\n\n\t\t\t\t==============");
	printf("\n\t\t\t\tChoose Product");
	printf("\n\t\t\t\t==============");

	printf("\n\n       Name                   Price");
	printf("\n-----------------------------------------");

	printf("\n\n1>. Samsung S23 Ultra      Rs. 1000");
	printf("\n\n2>. Oneplus 11R            Rs. 4000");
	printf("\n\n3>. Apple iphone 15        Rs. 8000");
	printf("\n\n4>. Homepage               Rs. Free");

	printf("\n\n-----------------------------------------");

	printf("\n\nSelect Product : ");
	scanf("%d",&product);

	if(product==1)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=1000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==2)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=4000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==3)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=8000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==4)
	{
		homepage();
	}
	else
	{
		Smartphone();
	}
}

void Television()
{
	int opt,product,qty;
	clrscr();

	printf("\t\t\t==================================");
	printf("\n\t\t\tWelcome To Amazon India Television");
	printf("\n\t\t\t==================================");

	printf("\n\n\t\t\t\t==============");
	printf("\n\t\t\t\tChoose Product");
	printf("\n\t\t\t\t==============");

	printf("\n\n       Name                          Price");
	printf("\n-------------------------------------------------");

	printf("\n\n1>. Samsung Neo QLED 4k           Rs. 1000");
	printf("\n\n2>. Oneplus Y21 4K LED            Rs. 8000  ");
	printf("\n\n3>. Sony Bravia 8k                Rs. 9000  ");
	printf("\n\n4>. Homepage                      Rs. Free    ");

	printf("\n\n-----------------------------------------------");

	printf("\n\nSelect Product : ");
	scanf("%d",&product);

	if(product==1)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=1000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==2)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=8000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==3)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=9000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==4)
	{
		homepage();
	}
	else
	{
		Television();
	}
}
void Laptop()
{
	int opt,product,qty;
	clrscr();

	printf("\t\t\t==============================");
	printf("\n\t\t\tWelcome To Amazon India Laptop");
	printf("\n\t\t\t==============================");

	printf("\n\n\t\t\t\t==============");
	printf("\n\t\t\t\tChoose Product");
	printf("\n\t\t\t\t==============");

	printf("\n\n       Name                           Price");
	printf("\n------------------------------------------------");

	printf("\n\n1>. Samsung Book 3                  Rs. 6000");
	printf("\n\n2>. Asus Zenbook 17 Fold            Rs. 5000");
	printf("\n\n3>. Apple Macbook Air M2            Rs. 4000");
	printf("\n\n4>. Homepage                        Rs. Free");

	printf("\n\n----------------------------------------------");

	printf("\n\nSelect Product : ");
	scanf("%d",&product);

	if(product==1)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=6000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==2)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=5000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==3)
	{
		printf("Qty : ");
		scanf("%d",&qty);

		total=4000*qty+total;

		printf("Do You Want To Buy Anything Else? [Y-1/N-2] : ");
		scanf("%d",&opt);

		if(opt==1)
		{
			homepage();
		}
		else if(opt==2)
		{
			Billing();
		}
		else
		{
			exit(0);
		}
	}
	else if(product==4)
	{
		homepage();
	}
	else
	{
		Laptop();
	}
}
void Printer()
{
	printf("\n\n\tPrinter Category is Coming Soon stay tuned with us.");
}
void Billing()
{
	int taxes=total*0.1;
	clrscr();

	printf("\t\t\t===============================");
	printf("\n\t\t\tWelcome To Amazon India Billing");
	printf("\n\t\t\t===============================");

	printf("\n-----------------------");
	printf("\nAmount       : %ld",total);
	printf("\nTaxes        : %d",taxes);
	printf("\nTotal Amount : %ld",total+taxes);
	printf("\n-----------------------");

	printf("\n\nThanks For Shopping With Amazon");
}
