#include <iostream>
#include <string>
using namespace std;
void viewproduct()

{
    cout<<"____________________________________"<<endl<<endl;
    cout<<"                 MENU     "<<endl;
    cout<<"____________________________________"<<endl;
    cout<<"BURGiRAN"<<endl<<endl;
    cout<<"             >>BURGERS<<"<<endl<<endl;
    cout<<"   [1] REGULAR BURGER    (php 22.00)"<<endl;
    cout<<"   [2] CHEESE BURGER     (php 27.00)"<<endl;
    cout<<"   [3] EGG BURGER        (php 33.00)"<<endl;
    cout<<"   [4] CHICKEN BURGER    (php 45.00)"<<endl;
    cout<<"   [5] BACON BURGER      (php 40.00)"<<endl;
    cout<<"   [6] HAWAIIAN BURGER   (php 45.00)"<<endl;
    cout<<"   [7] VEGGIE BURGER     (php 38.00)"<<endl;
    cout<<"   [8] CHILLI BURGER     (php 45.00)"<<endl<<endl;

    cout<<"               >>DRINKS<<"<<endl<<endl;
    cout<<"   [9] ORANGE JUICE       (php 20.00)"<<endl;
    cout<<"   [10]LEMONADE           (php 20.00)"<<endl;
    cout<<"   [11]BLUE LEMONADE      (php 25.00)"<<endl;
    cout<<"   [12]LEMON YAKULT       (php 35.00)"<<endl;
    cout<<"   [13]COCA-COLA 12oz     (php 20.00)"<<endl;
    cout<<"   [14]MOUNTAIN DEW 300ml (php 15.00)"<<endl;
    cout<<"   [15]CUCUMBER           (php 25.00)"<<endl<<endl;
}


int main()             //1.
{
    // Group 8 members:

    cout<<"Group 8 [FOOD ORDER SYSTEM]"<<endl<<endl;
    cout<<"Members:"<<endl;
    cout<<"SORIANO, CEZAR"<<endl;
    cout<<"AMPONGAN, MARK ARVIE"<<endl;
    cout<<"MORENO, JAN CARL"<<endl;
    cout<<"CABIGAO, JUSTINE"<<endl;
    cout<<"_____________________________"<<endl<<endl;
    cout<<"            LOGIN"<<endl;
    cout<<"_____________________________"<<endl<<endl;

    int username,pass;
    string date;

    cout<<"Date:";
    cin>>date;
    for(int i=1; i<=2; i++)
    {

        //Correct username:"1234" and password:"8888".

        cout<<endl<<"Username: ";
        cin>>username;
        cout<<"Password: ";
        cin>>pass;

        if ((username==1234)&&(pass==8888))

            // The system itself.
            
            

        {
            cout<<endl<<"        WELCOME TO BURGiRAN"<<endl;
            
            viewproduct();

             

            while (true)
            {
                int exeChoice, prodNum, qty;
                float total3=0;
                float totalamnt=0;
                float pretotal=0;
                float postTotal=0;
                float total=0;
                float payment=0;
                float change= 0;
                float totalsale=0;
                int sold=0;
                int soldpcs=0;
                while (true)
                {

                    //2.

                    cout <<endl<< "****************" << endl;
                    cout << "     EXECUTION LIST"<<endl;
                    cout << "1. Menu/Add Order" << endl;
                    cout << "2. Check Total Amount " << endl;
                    cout << "3. Checkout Order " << endl;
                    cout << "4. Check Total Sale/s" << endl;
                    cout << "5. RESET ORDERS " << endl;
                    cout << "6. Exit" << endl;


                    // Choose an execution above.

                    cout << "*****************" << endl<<endl;
                    cout << "ENTER YOUR CHOSEN EXECUTION NUMBER: ";
                    cin >> exeChoice;

//List of products to choose from.

                    switch (exeChoice)
                    {
                    case 1:
                    	
                    	
                    	//2.
                    	

                        cout << "ENTER YOUR CHOSEN PRODUCT NUMBER: ";
                        cin >> prodNum;
                        cout << "Enter Quantity: ";
                        cin >> qty;

                        if((prodNum>15)||(prodNum<=0))
                        {
                            cout<<"INVALID PRODUCT NUMBER"<<endl;

                        }

                        if (qty <= 0)
                        {
                            cout << "INVALID QUANTITY"<< endl;

                        }


                        else if(prodNum == 1)
                        {
                            postTotal=total + (22* qty);
                            total=(22* qty);
                            cout << "REGULAR BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 2)
                        {
                            postTotal=total + (27* qty);
                            total=(27* qty);
                            cout << "CHEESE BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 3)
                        {
                            postTotal=total + (33* qty);
                            total=(33* qty);
                            cout << "EGG BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 4)
                        {
                            postTotal=total + (45* qty);
                            total=(45* qty);
                            cout << "CHICKEN BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }

                        else if (prodNum == 5)
                        {
                            postTotal=total + (40* qty);
                            total=(40* qty);
                            cout << "CHICKEN BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }

                        else if (prodNum == 5)
                        {
                            postTotal=total + (40* qty);
                            total=(40* qty);
                            cout << "BACON BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 6)
                        {
                            postTotal=total + (45* qty);
                            total=(45* qty);
                            cout << "HAWAIIAN BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 7)
                        {
                            postTotal=total + (38* qty);
                            total=(38* qty);
                            cout << "VEGGIE BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum ==8)
                        {
                            postTotal=total + (45* qty);
                            total=(45* qty);
                            cout << "CHILLI BURGER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 9)
                        {
                            postTotal=total + (20* qty);
                            total=(20* qty);
                            cout << "ORANGE JUICE is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 10)
                        {

                            postTotal=total + (20* qty);
                            total=(20* qty);
                            cout << "LEMONADE added is to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 11)
                        {
                            postTotal=total + (25* qty);
                            total=(25* qty);
                            cout << "BLUE LEMONADE is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 12)
                        {
                            postTotal=total + (35* qty);
                            total=(35* qty);
                            cout << "LEMON YAKULT is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 13)
                        {
                            postTotal=total + (45* qty);
                            total=(45* qty);
                            cout << "COCA-COLA is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 14)
                        {
                            postTotal=total + (15* qty);
                            total=(15* qty);
                            cout << "MOUNTAIN DEW is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                        else if (prodNum == 15)
                        {
                            postTotal=total + (25* qty);
                            total=(25* qty);
                            cout << "CUCUMBER is added to cart: Quantity - " << qty << endl;
                            cout << "Total: P" << total  << endl;
                        }
                            pretotal= pretotal+ total;
                            total3 = total3+ total;
                            sold=qty;
                        


                        break;

                    case 2:

                        if (total3 <= 0)
                        {
                            cout << "YOU DON'T HAVE ANY EXISTING ORDERS." << endl;
                            break;
                        }
                        else
                        {

                            cout << "Your total amount is: P" << total3<< endl;

                        }
                        break;

                    case 3:
                        totalamnt=pretotal;

                        if(pretotal==0)
                        {
                            cout<<"YOU DON'T HAVE ANY EXISTING ORDERS."<<endl<<endl;
                            break;
                        }


                        else
                        {


                            cout<< "TOTAL : "<<pretotal<<endl;
                            cout << "Enter Payment:";
                            cin >> payment;
                        }

                        {
                            if ((payment>=pretotal)||(payment<0))
                            {
                                change= (payment-pretotal);
                                cout<<"Total Change: "<<change<<" Pesos"<<endl;
                            }
                            else
                            {
                                cout<<"Insuffiecient Payment. TRY AGAIN."<<endl;
                                break;
                            }

                        }




                        //If you choose Y or y (yes), you can able to see the total products when you choose "4.Check total sales".

                        char askCheckout;

                        cout<<"Confirm your payment? [Y/N]: ";
                        cin>> askCheckout;



                        if (askCheckout == 'Y' || askCheckout == 'y')
                        {
                            cout<<endl;
                            cout<< "---------------------------------------------"<<endl;
                            cout<< "                                Date:"<<date<<endl;
                            cout<< "REVIEW OF YOUR ORDER/s"<<endl;
                            cout<< "TOTAL OF YOUR ORDER   : "<<pretotal<<" Pesos"<<endl;

                            cout<< "TOTAL AMOUNT RECEIVED : "<<payment<<" Pesos"<<endl;
                            cout<< "TOTAL CHANGE          : "<<change<<" Pesos"<<endl<<endl<<endl;
                            cout<< "|--------------------------------------------|"<<endl;
                            cout<< "|--------****Enjoy your purchase!****--------|"<<endl;
                            cout<< "|****THANK YOU FOR CHOOSING BURGiRAN ?!!!****|"<<endl;
                            cout<< "|--------------------------------------------|"<<endl;

                            if (payment>0)
                            {
                                totalsale= totalsale+ totalamnt;
                                pretotal= pretotal-pretotal;
                                total3= total3-total3;
                                soldpcs=soldpcs+sold;
                                sold=sold-sold;
                                
                            }
                            else
                            {
                                totalsale=0;
                            }
                            break;

                            return 0;
                        }
                        else if (askCheckout == 'N' || askCheckout == 'n')
                        {
                            break;
                        }
                        else
                        {
                            cout << "Invalid Input!" << endl;
                            break;
                        }

                    case 4:

                        if (totalsale> 0)
                        {
                            cout<<"|--------------------------------------|"<<endl;
                            cout<<"                          Date:"<<date<<endl<<endl<<endl;
                            cout<<" TOTAL ACCUMULATED AMOUNT/SALE:"<<totalsale<<" Pesos"<<endl;
                            cout<<" Sold: "<<soldpcs<<" piece/s"<<endl;
                            cout<<"|--------------------------------------|"<<endl;
                        }
                        else
                        {
                            cout << "YOU DON'T HAVE ANY EXISTING ORDERS" << endl;
                            break;
                        }
                        break;

                    case 5:
                        total = total - total;
                        postTotal= postTotal -postTotal;
                        pretotal = pretotal -pretotal;
                        total3=total3-total3;
                        sold=sold-sold;
                        cout << "Your orders have been reset." << endl;
                        break;


                    case 6:
                        cout<<endl;
                        cout<<"|----------------------|"<<endl;
                        cout<<"|         EXIT         |"<<endl;
                        cout<<"|                      |"<<endl;
                        cout<<"|THANK YOU, COME AGAIN!|"<<endl;
                        cout<<"|----------------------|"<<endl;


                        return 0;


                    default:
                        cout << "Invalid Choice! Please TRY AGAIN." << endl;
                        break;
                    }
                }
            }


        }
        else
        {
            cout<<"Invalid Username. Try Again."<<endl;
            cout<<"----------------------------"<<endl;
        }




    }

return 0;

}
