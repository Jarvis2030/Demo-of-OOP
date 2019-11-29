/**The program will help calculate the area of a normal trapezium
i.e with two opposite parallel sides and a perpendicular distance(h) between them
*/

#include <iostream>
using namespace std;

//Class area definition
class Area
{
    private:
       float a;
       float b;
       float h;
       float A;

    public:
       // Constructor
       Area(): a(), b(),h(){ }

       void displayTitle()
       {
           cout<<"\t\t PROGRAM TO CALCULATE THE AREA OF A TRAPEZIUM"<<endl;
           cout<<"\t\t ============================================\n"<<endl;
       }
       void GetDimensions()
       {

           cout << "Enter the longest side : ";
           cin >> a;
           cout << "Enter shortest side: ";
           cin>> b;
           cout << "Enter perpendicular height between the parallel sides: ";
           cin>> h;
       }
        //Function to compute the area of the Trapezium
       float AreaCalculation()
        {
           A=(0.5*(a+b)*h);
           return (A);
        }
        //Function to Display the area of the Trapezium
       void DisplayArea(float temp)
       {
           cout<<endl<< "Area of the Trapezium is: " << temp<<" Sq. Units."<<endl;
       }
};

int main()
{
    Area At;
    float temp;

    At.displayTitle();
    At.GetDimensions();
    temp = At.AreaCalculation();
    At.DisplayArea(temp);

    return 0;
}
