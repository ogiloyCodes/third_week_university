#include <iostream>
using namespace std;


int main() {



/*

 PROBLEM 1


    double first, second, third, fourth, fifth, sum;
    cout << "Enter five numbers" << endl;
    cin >> first>> second>> third>> fourth>> fifth;
    sum = first + second + third + fourth + fifth;
    cout << "Sum of your numbers is "<<sum << endl;

*/




/*
PROBLEM 2

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
PROBLEM 3

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

/*
    PROBLEM 11

double distance_in_km, time, velocity_in_km, distance_in_miles, velocity_in_miles;
    distance_in_km = 450;
    time = 2;
    distance_in_miles = distance_in_km * 0.62137;
    velocity_in_km = distance_in_km / time;
    velocity_in_miles = velocity_in_km / time;
    cout << "V = " << velocity_in_km <<"km/h and "<< velocity_in_miles<<" miles/h"<<endl;
*/


/*
PROBLEM 12
  int total , hours, minutes;
    cout << "Enter the total minutes: ";
    cin >> total;
hours = total / 60;
    minutes = total % 60;
 
    cout << "Total time:  " <<hours<<" hours "<< minutes<< " minutes"<<endl;
    */
    
    
    /*
    PROBLEM 13
    
    
    int selling_price, variable_cost, bep;
    int fixed_cost = 10000;
    cout<<"Enter selling price per unit: "<<endl;
    cin>>selling_price;
     cout<<"Enter variable cost per unit: "<<endl;
    cin>>variable_cost;
    
    bep = fixed_cost/(selling_price - variable_cost) ;
    
    cout<<"Break-even point: "<<bep<<endl;
    */
    
    /*
    
    PROBLEM 14
    
    
    int basic_salary, tax_amount, tax_percentage, net_salary;
    cout<<" Enter basic salary: "<< endl;
    cin>> basic_salary;
    cout<<" Enter tax percentage: "<< endl;
    cin>> tax_percentage;
    tax_amount = basic_salary * tax_percentage * 0.01;
    net_salary = basic_salary - tax_amount;
    cout<<"Total salary: "<<net_salary<< endl;
    */
    
    
    /*
    
    PROBLEM 15
    
    int original_price, discount_amount, discount_percentage, final_price;
    cout<<"Original price: "<< endl;
    cin>> original_price;
    cout<<"Discount Percentage: "<< endl;
    cin>> discount_percentage;
    discount_amount = original_price * discount_percentage * 0.01;
    final_price = original_price - discount_amount;
    cout<<"Discount amount: "<<discount_amount<<endl;
    cout<<"Final Price : "<<final_price<< endl;
    */
    
    
    /*
   // PROBLEM 16 
    
    
    double grade1, grade2, grade3, grade4, grade5, gpa;
    int c_hour1, c_hour2, c_hour3, c_hour4, c_hour5;
    cout<<"Grade points for 5 courses: "<<endl;
    cin>>grade1>>grade2>>grade3>>grade4>>grade5;
     cout<<"Credit hours for 5 courses: "<<endl;
    cin>>c_hour1>>c_hour2>>c_hour3>>c_hour4>>c_hour5;
    
    
     double total_grade_points = (grade1 * c_hour1) + (grade2 * c_hour2) + (grade3 * c_hour3) + (grade4 * c_hour4) + (grade5 * c_hour5);
    int total_credit_hours = c_hour1 + c_hour2 + c_hour3 + c_hour4 + c_hour5;
    
    gpa = total_grade_points / total_credit_hours;
 
    cout<<"The avarage GPA is: "<<gpa<<endl;
    */
    
    

    return 0;



}
