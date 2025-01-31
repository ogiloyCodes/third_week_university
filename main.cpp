#include <iostream>
using namespace std;


//problem 3//degree
// int main() {
//     int temperature_in_celcius;
//     double conversion;
//     cout<<"enter the temperature in celcius:"<<endl;
//     cin>>temperature_in_celcius;
//     conversion=temperature_in_celcius*9/5+32;
//     cout<<"temperature in celcius is "<<temperature_in_celcius<<"  temperature in fahrenheit  "<<conversion<<endl;
//
//
// }

int main() {


    /* double price1,price2,price3;
    double total_cost;
    cout<<"Enter price of the first item:"<<endl;cin>>price1;
    cout<<"Enter the price of second item:"<<endl;cin>>price2;
    cout<<"Enter the price of third item:"<<endl;cin>>price3;
    int quantity1,quantity2,quantity3;
    cout<<"Enter the quantity of the first item:"<<endl;cin>>quantity1;
    cout<<"Enter the quantity of the second item:"<<endl;cin>>quantity2;
    cout<<"Enter the quantity of the third item:"<<endl;cin>>quantity3;
    total_cost=price1*quantity1+price2*quantity2+price3*quantity3;cout<<" Total cost is:  "<<total_cost; cout<<endl;

*/


/*
    double first, second, third, fourth, fifth, sum;
    cout << "Enter five numbers" << endl;
    cin >> first>> second>> third>> fourth>> fifth;
    sum = first + second + third + fourth + fifth;
    cout << "Sum of your numbers is "<<sum << endl;

*/




/*
Problem 2
    int id;
    short year_of_study ;
    double study_fee;
    double gpa;
     cout<<"Enter student id : ";
     cin>>id;
     cout<<"Enter student gpa : ";
     cin>>gpa;
     cout<<"Enter student year of study: ";
     cin>>year_of_study;;
     cout<<"Enter student study fee:";
     cin>>study_fee;
    cout<<"Your student id is  "<<id<<endl;
    cout<<"Your gpa is "<<gpa<<endl;
    cout<<"Your year of study is "<<year_of_study<<endl;
    cout<<"Your study fee is "<<study_fee<<endl;

*/


/*
Problem 3
    double temperature_in_celcius;
    double conversion;
    cout<<"Enter the temperature in celcius:"<<endl;
    cin>>temperature_in_celcius;
    conversion=temperature_in_celcius*9/5+32;
    cout<<"The temperature in Celcius : "<<temperature_in_celcius<<endl;
    cout <<"The temperature in Fahrenheit : "<<conversion<<endl;


*/

    /*
    PROBLEM 4



double cost;
   int quantity;
    cout << "Cost per item : " << endl;
    cin >> cost;
    cout << "Quantity of items : " << endl;
    cin >> quantity;
    cout << "Total cost is $"<< cost * quantity << endl;
*/


/*
PROBLEM 5

int age1, age2, age3, age4;
    double avarage;
    cout << "Enter ages of 4 members of your family:";
    cin >> age1 >> age2 >> age3 >> age4;
    avarage = (age1 + age2 + age3 + age4)/4;
    cout << "Avarage age is " << avarage << endl;
*/


/*
    PROBLEM 6

    double  length, width, area, perimeter;
    cout << "Please enter the length of the rectangle: ";
    cin >> length;
    cout << "Now, enter the width of the rectangle: ";
    cin >> width;
    perimeter = (length + width)*2;
    area = width * length;
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
*/

/*
PROBLEM 7

    int dividend , divisor, quotient, remainder;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter  the divisor: ";
    cin >> divisor;
quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "The quotient of the division is "<< quotient<<endl;
    cout << "The remainder of the division is " << remainder<<endl;
*/


    /*
PROBLEM 8
    int amount_in_USD, exchange_rate, amount_in_UZS;
    cout << "Enter amount in USD: ";
    cin >> amount_in_USD;
    cout << "Enter exchange rate( 1 USD to 1 UZS): ";
    cin >> exchange_rate;
amount_in_UZS = amount_in_USD * exchange_rate;
    cout<<"The equivalent amount in UZS is: "<<amount_in_UZS<<endl;
*/

/*
PROBLEM 9
    double radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "SUrface area of the circle with r="<<radius<<" is " << area << endl;
*/




    /*
PROBLEM 10

    double radius_of_base, height, volume;
    cout << "Enter the radius of the base circle: ";
    cin >> radius_of_base;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
volume = double(3.14 * radius_of_base * radius_of_base* height);
cout << "The volume of the cylinder with r="<<radius_of_base<<" and h="<<height<<" is " << volume << endl;

    */


double distance_in_km, time, velocity_in_km, distance_in_miles, velocity_in_miles;
    distance_in_km = 450;
    time = 2;
    distance_in_miles = distance_in_km * 0.62137;
    velocity_in_km = distance_in_km / time;
    velocity_in_miles = velocity_in_km / time;
    cout << "V = " << velocity_in_km <<"km/h and "<< velocity_in_miles<<" miles/h"<<endl;

    return 0;



}