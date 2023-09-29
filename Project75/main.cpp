#include<iostream>
using namespace std;

const double pi{3.14259};
double calc_area_circle(double radius)
{
  return pi * radius * radius;
}

double calc_volume_cylinder(double radius,double height)
{
  // return pi * radius * radius * height;
  return calc_area_circle(radius) * height;
}
void area_circle()
{

  double radius{};
  cout << " Enter the radius of circle: ";
  cin >> radius;

  cout << " The area of circle with radius " << radius << " is " << calc_area_circle(radius) << endl;

}

void volume_cylinder()
{
  double radius{};
  double height{};

  cout << " \n Enter the radius of the cylinder " << endl;
  cin >> radius;
  cout << " \n Enter the height of the cylinder " << endl;
  cin >> height;

  cout << " The volume of the cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius,height) << endl;


}
int main()
{
  area_circle();
  
  volume_cylinder();
}