#include<stdio.h>
int main()
{
	int gst_rate_0, gst_rate_1, gst_rate_2, gst_rate_3, gst_rate_4, gst_rate_5;
	int product_price;
	int gst_rate_mode;

	printf("Enter the 6 gst rates\n");
	scanf("%d %d %d %d %d %d",&gst_rate_0,&gst_rate_1,&gst_rate_2,&gst_rate_3,&gst_rate_4,&gst_rate_5);

a:
	printf("Enter the selling price of any product [0-99999]\n");
	scanf("%d",&product_price);
	if( product_price < 0 || product_price > 99999 )
	{
		printf("Invalid Product Selling Price\nTry Again\n");
		goto a;
	}
b:
	printf("Enter GST_RATE_MODE For Product [0-5]\n");
	scanf("%d",&gst_rate_mode);
	if( gst_rate_mode < 0 || gst_rate_mode > 5 )
	{	
		printf("Invalid GST_RATE_MODE\nTry Again\n");
		goto b;
	}
	
	switch(gst_rate_mode)
	{	
	case 0:
		printf("Product Price:%f\nGST:%f\n",(product_price-(product_price/gst_rate_0)*100),(product_price-(product_price-(product_price/gst_rate_0)*100)));
		break;
	case 1:
		printf("Product Price:%f\nGST:%f\n",(product_price-(product_price/gst_rate_1)*100),(product_price-(product_price-(product_price/gst_rate_1)*100)));
		break;
	case 2:
		printf("Product Price:%f\nGST:%f\n",(product_price-(product_price/gst_rate_2)*100),(product_price-(product_price-(product_price/gst_rate_2)*100)));
                break;
        case 3:
		printf("Product Price:%f\nGST:%f\n",(product_price-(product_price/gst_rate_3)*100),(product_price-(product_price-(product_price/gst_rate_3)*100)));
                break;
	case 4:
		printf("Product Price:%f\nGST:%f\n",(product_price-(product_price/gst_rate_4)*100),(product_price-(product_price-(product_price/gst_rate_4)*100)));
                break;
        case 5:
		printf("Product Price:%f\nGST:%f\n",(product_price-(product_price/gst_rate_5)*100),(product_price-(product_price-(product_price/gst_rate_5)*100)));
                break;
	}
}
