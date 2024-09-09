#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
    
{   
    int productcode;
    float quantity, amount, price1,price2,price3,price4,deliverydistance,deliveryfee,tax=1.1,finalamount,cashtendered,cash;
    char again = 'Y';
    
    
    cout << " ___________________________________________________________________________________________  " <<endl;
    cout << "|                                                                                           | " <<endl;
    cout << "|                    Welcome to BestDeal mall annual sales!!!!!                             | " <<endl;
    cout << "|                   Here are some of the items that are on sale.                            | " <<endl;
    cout << "|      PS: (You are automatically our member if you have purchase any item before.)         | " <<endl;
    cout << "|___________________________________________________________________________________________|\n\n " <<endl;
    
    cout << "=========================================================================================== " <<endl;
    cout << "||                                    Items List                                         || " <<endl;
    cout << "=========================================================================================== " <<endl;
    cout << "||      101     ||    Wall Scrapper    ||    RM 100.00    ||               --            || " <<endl;
	cout << "||      202     ||    Tiles Waxes      ||    RM 350.00    ||               --            || " <<endl;
	cout << "||      303     ||    Mud/Tar Remover  ||    RM 500.00    ||    Excluding 20% Discount   || " <<endl;
	cout << "||      404     ||    Dry Blower       ||    RM 850.00    ||    Excluding 25% Discount   || " <<endl;
	cout << "===========================================================================================\n\n\n";


    while (again == 'y' || again == 'Y')
{	
	cout << "\n\nEnter Product Code: ";
	cin >> productcode;
	cout << "\n\nEnter the Quantity: ";
	cin >> quantity;
	
	switch (productcode)
 {  
    case 101 : price1 = 100.00;
            break;
    case 202 : price2 = 350.00;
            break;
    case 303 : price3 = 400.00;
            break;
    case 404 : price4 = 637.50;
            break;
 }  
    amount = (price1 * quantity) + (price2 * quantity) + (price3 * quantity) + (price4 * quantity);
    cout << "\n\nYour current cart is worth : "  << amount;
    cout << "\n\nDo you want to continue shopping ? (y/n) : " ;
    cin >> again;
}
    retry:
    cout << "\n\n\nPlease enter your delivery distance. (PS : No Delivery for orders more than 100KM away.) : ";
    cin >> deliverydistance;
    
    if (deliverydistance == 0)
    {
        deliveryfee = 0;
        cout << "\n\nYour Delivery Fee is : "<< deliveryfee;
    }
    
    else if (deliverydistance <= 30)
    {
        deliveryfee = 50;
        cout << "\n\nYour Delivery Fee is : "<< deliveryfee;
    }
    
    else if (deliverydistance <=100)
    {
        deliveryfee = (((deliverydistance - 30) * 3) + 50 );
        cout << "\n\nYour Delivery Fee is : "<< deliveryfee;
    }
    
    else if (deliverydistance>100)
    {
        cout << "\n\nSorry we do not deliver to your location.";
        cout << "\nPlease come to collect items yourself.";
        deliveryfee = 0;
        cout << "\nOr do you want to try another location?(y/n):";
        cin >> again;
        
        if(again=='Y'||again=='y')
        {
            goto retry;
        }
        else
        {
            cout << "\n\nPlease come to collect items yourself.";
        }
    }
    else
    {
    
    }
    finalamount = ( amount + deliveryfee ) * tax;
    cout << " \n\n\nBelow is your Final Amount. Inclusive of delivery fee and tax.\nPlease pay by Cash only : " << finalamount;
    cout << " \n\n\nKey in your Cash Value : ";
    cin >> cash;
    cashtendered = cash - finalamount;
    cout << "\n\nCash Tendered : " << cashtendered;
    end:
    cout << "\n\nThank you for shopping with BestDeal Mall. Come Again :) ";
    
    
    return 0;
    
}