#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
   cout << "                - KAOS Dominicana S.A. -\n";
   cout << "              - Shipping cost calculator -\n";
   string fname; //client's full name
   cout << "Please input you full name\n";
   getline(cin,fname);
   char CED[11]; //client's cedula number
   cout << "Please *WITHOUT HYPHENS*input your cedula number\n";
   cin >> CED;
   cout << "Oh! ok so your name is " << fname;
   cout << " and your cedula number is " << CED;
   cout << "\n";
   double price, w, cost, a; 
   //price, weight, cost of item; a is the exponent in formula
   cout << "Ok, " << fname << " *SEPARATED BY A SPACE* please input the weight(lbs) and price($RD) of your item\n";
   cin >> w >> price;
    a = (-9.21 * w);
    if(w < 50) { //here we open the conditions given in the chart
        if(price > 75)
            cost = 0;
        else if (price > 50 && price <= 75)
            cost = 5;
        else if (price > 25 && price <= 50)
            cost = 10;
        else
            cost = 15;
    }else{
        cost = 25 * (1-(pow(1.01, a)));
    }
   cout << "Mr. " << fname << ", here's your shipping cost calculatio\n";
   cout << "_______________________________________________________________________________\n";
   cout << "| Name                     | Cedula       |   Price   |  Weight  |   Cost   |\n";
   cout << "| ";
   cout << fname; 
   cout << "              | "; 
   cout << CED;
   cout << "  | "; 
   std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << price;
   cout << "     | "; 
   cout << w;
   cout << "    | "; 
   cout << cost;
   cout << "     |\n";
   cout << " \n";
   cout << "Kaos Dominicana at your service :)";
  return 0;
}
