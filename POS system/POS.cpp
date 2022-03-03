
#include <iostream>

using namespace std;

double totalCost1(int numberParameter, double priceParameter);
double totalCost2(int numbertwoParameter, double pricetwoParameter);
double totalCost3(int numberthreeParameter, double pricethreeParameter);
double totalCost4(int numberfourParameter, double pricefourParameter);
double totalCost5(int numberfiveParameter, double pricefiveParameter);
double totalCost6(int numbersixParameter, double pricesixParameter);
double totalCost7(int numbersevenParameter, double pricesevenParameter);
double totalCost8(int numbereightParameter, double priceeightParameter);
double totalCost9(int numbernineParameter, double pricenineParameter);
double totalCost10(int numbertenParameter, double pricetenParameter);

//Allows the "purchase" of 10 items
//Computes the total cost, including 5% sales tax,
//on numberParameter items at a cost of priceParameter each.

int main( )
{
double price, pricetwo, pricethree, pricefour, pricefive, pricesix, priceseven, priceeight, pricenine, priceten;
double billone, billtwo, billthree, billfour, billfive, billsix, billseven, billeight, billnine, billten, finalbill;

int itema; 
int itemb;
int itemc;
int itemd;
int iteme;
int itemf;
int itemg;
int itemh;
int itemi;
int itemj;

int choicea;
int choiceb;
int choicec;
int choiced;
int choicee;
int choicef;
int choiceg;
int choiceh;
int choicei;
int choicej;

int number;
int numbertwo;
int numberthree;
int numberfour;
int numberfive;
int numbersix;
int numberseven;
int numbereight;
int numbernine;
int numberten;



 cout << "What item would you like to purchase first?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
           
 cin>>choicea;

switch (choicea)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;


          
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }

          

/*Switch 2*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choiceb;



switch (choiceb)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;


          
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }


/*Switch 3*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choicec;



switch (choicec)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;


          
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }
/*END SWITCH*/


/*Switch 4*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choiced;



switch (choiced)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;


          
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }
/*END SWITCH 4*/


/*Switch 5*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choicee;



switch (choicee)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }
/*END SWITCH 5*/


/*Switch 6*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choicef;



switch (choicef)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }
/*END SWITCH 6*/


/*Switch 7*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choiceg;



switch (choiceg)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }
/*END SWITCH 7*/


/*Switch 8*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choiceh;



switch (choiceh)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }
/*END SWITCH 8*/




/*Switch 9*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choicei;



switch (choicei)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }
/*END SWITCH 9*/

/*Switch 10*/

 cout<< "What item would you like to purchase now?" <<endl;
 
            cout<< "(1) - Eggs" <<endl;
            cout<< "(2) - Tea" <<endl;
            cout<< "(3) - Chocolate" <<endl;
            cout<< "(4) - Strawberry" <<endl;
            cout<< "(5) - Cheese" <<endl;
            cout<< "(6) - Oranges" <<endl;
            cout<< "(7) - Apples" <<endl;
            cout<< "(8) - Bananas" <<endl;
            cout<< "(9) - Watermelon" <<endl;
            cout<< "(10) - Soup" <<endl;
 cin>>choicej;



switch (choicej)
    {
          case 1:
          cout<<"Eggs"<<endl;
          cout << "You have chosen to purchase eggs. How many eggs do you want?";
          cin >> number;
          cout << "You have chosen eggs, now enter the price for each egg $";
          cin >> price;
          billone = totalCost1(number, price);

          cout << number << " items at "
          << "$" << price << " each.\n"
          << "Final bill, including 5% tax, is $" << billone
          << endl;
          
          break;

         case 2:
            cout<<"Tea"<<endl;

            
            cout << "You have chosen tea, now enter the price for your tea $";
            cin >> numbertwo;
            cout << "Enter the price for each tea $";
            cin >> pricetwo;
            billtwo = totalCost2(numbertwo, pricetwo);

            cout << numbertwo << " items at "
            << "$" << pricetwo << " each.\n"
            << "Final bill, including tax, is $" << billtwo
            << endl;
          
            break;

          case 3:
          cout<<"Chocolate"<<endl;;
          cout << "You have chosen chocolate. Enter the number of chocolate purchased: ";
          cin >> numberthree;
          cout << "Now enter the price for each chocolate bar $";
          cin >> pricethree;
          billthree = totalCost3(numberthree, pricethree);

          cout << numberthree << " items at "
          << "$" << pricethree << " each.\n"
          << "Final bill, including tax, is $" << billthree
          << endl;
          
          break;

          case 4:
          cout<<"Strawberry"<<endl;
          
          cout << "You have chosen strawberries. Enter the number of strawberries purchased: ";
          cin >> numberfour;
          cout << "Enter the price per pack of strawberries $";
          cin >> pricefour;
          billfour = totalCost4(numberfour, pricefour);

cout << numberfour << " items at "
<< "$" << pricefour << " each.\n"
<< "Final bill, including tax, is $" << billfour
<< endl;
          
          break;

          case 5:
          cout<<"Cheese"<<endl;
          
          cout << "You have chosen cheese. Enter the number of cheese purchased: ";
          cin >> numberfive;
          cout << "Enter the price for each block of cheese $";
          cin >> pricefive;
          billfive = totalCost5(numberfive, pricefive);

cout << numberfive << " items at "
<< "$" << pricefive << " each.\n"
<< "Final bill, including tax, is $" << billfive
<< endl;
          
          break;
            
          case 6:
          cout<<"Oranges"<<endl;
          cout << "Enter the number of oranges purchased: ";
cin >> numbersix;
cout << "Enter the price per orange $";
cin >> pricesix;
billsix = totalCost6(numbersix, pricesix);

cout << numbersix << " items at "
<< "$" << pricesix << " each.\n"
<< "Final bill, including tax, is $" << billsix
<< endl;

          
          break;

          case 7:
          cout<<"Apples"<<endl;
          
          cout << "Enter the number of Apples purchased: ";
cin >> numberseven;
cout << "Enter the price per Apple $";
cin >> priceseven;
billseven = totalCost7(numberseven, priceseven);

cout << numberseven << " items at "
<< "$" << priceseven << " each.\n"
<< "Final bill, including tax, is $" << billseven
<< endl;
          
          
          
          break;

          case 8:
          cout<<"Banana"<<endl;;
          
          cout << "Enter the number of Bananas purchased: ";
          cin >> numbereight;
         cout << "Enter the price per Banana $";
         cin >> priceeight;
         billeight = totalCost8(numbereight, priceeight);

cout << numbereight << " items at "
<< "$" << priceeight << " each.\n"
<< "Final bill, including tax, is $" << billeight
<< endl;

          
          break;

          case 9:
          cout<<"Watermelon"<<endl;
          
          cout << "Enter the number of water-melons purchased: ";
         cin >> numbernine;
cout << "Enter the price per watermelon $";
cin >> pricenine;
billnine = totalCost9(numbernine, pricenine);

cout << numbernine << " items at "
<< "$" << pricenine << " each.\n"
<< "Final bill, including tax, is $" << billnine
<< endl;
          
          break;

          case 10:
          cout<<"Soup"<<endl;
          
         cout << "Enter the number of Soup purchased: ";
cin >> numberten;
cout << "Enter the price per can of soup $";
cin >> priceten;
billten = totalCost10(numberten, priceten);

cout << numberten << " items at "
<< "$" << priceten << " each.\n"
<< "Final bill, including tax, is $" << billten
<< endl;
 
          
          break;
            }
/*END SWITCH 10*/









/*FINAL BRACKET DO NOT TOUCH*/
return 0;
}



/* Functions (Local Scope) */

double totalCost1(int numberParameter, double priceParameter)
{
const double TAXRATE = 0.05; //5% sales tax
double subtotal;
subtotal = priceParameter * numberParameter;
return (subtotal + subtotal*TAXRATE);
}

double totalCost2(int numbertwoParameter, double pricetwoParameter)
{
 const double TAXRATE = 0.05; //5% sales tax
 double subtotaltwo;
 subtotaltwo = pricetwoParameter * numbertwoParameter;
 return (subtotaltwo + subtotaltwo*TAXRATE);
 }

double totalCost3(int numberthreeParameter, double pricethreeParameter)
{
 const double TAXRATE = 0.05; //5% sales tax
 double subtotalthree;
 subtotalthree = pricethreeParameter * numberthreeParameter;
 return (subtotalthree + subtotalthree*TAXRATE);
 }

double totalCost4(int numberfourParameter, double pricefourParameter)
{
 const double TAXRATE = 0.05; //5% sales tax
 double subtotalfour;
 subtotalfour = pricefourParameter * numberfourParameter;
 return (subtotalfour + subtotalfour*TAXRATE);
 }

double totalCost5(int numberfiveParameter, double pricefiveParameter)
{
 const double TAXRATE = 0.05; //5% sales tax
 double subtotalfive;
 subtotalfive = pricefiveParameter * numberfiveParameter;
 return (subtotalfive + subtotalfive*TAXRATE);
 }

double totalCost6(int numbersixParameter, double pricesixParameter)
{
 const double TAXRATE = 0.05; //5% sales tax
 double subtotalsix;
 subtotalsix = pricesixParameter * numbersixParameter;
 return (subtotalsix + subtotalsix*TAXRATE);
 }

double totalCost7(int numbersevenParameter, double pricesevenParameter)
{
 const double TAXRATE = 0.05; //5% sales tax
 double subtotalseven;
 subtotalseven = pricesevenParameter * numbersevenParameter;
 return (subtotalseven + subtotalseven*TAXRATE);
 }

double totalCost8(int numbereightParameter, double priceeightParameter)
{
 const double TAXRATE = 0.05;
 double subtotaleight;
 subtotaleight = priceeightParameter * numbereightParameter;
 return (subtotaleight + subtotaleight*TAXRATE);
 }

double totalCost9(int numbernineParameter, double pricenineParameter)
{
 const double TAXRATE = 0.05; 
 double subtotalnine;
 subtotalnine = pricenineParameter * numbernineParameter;
 return (subtotalnine + subtotalnine*TAXRATE);
 }

double totalCost10(int numbertenParameter, double pricetenParameter)
{
 const double TAXRATE = 0.05; 
 double subtotalten;
 subtotalten = pricetenParameter * numbertenParameter;
 return (subtotalten + subtotalten*TAXRATE);
 }
