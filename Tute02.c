/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float dist,dist1,charge,charge1,t_charge;
  
  printf("Enter the distance :");//get the user inputs
  scanf("%f",&dist1);
  
  if(dist>0 && dist<=30)
  {
    charge=50.0*dist;
  }
  else
  {
    dist1=dist-30;
    charge1=40.0*dist1;
  }
  t_charge=charge+charge1;//calculate the total charge
  
  printf("Total charge is :%.2f",t_charge);
  return 0;
}
