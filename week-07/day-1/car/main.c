#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type
{
  VOLVO,
  TOYOTA,
  LAND_ROVER,
  TESLA
};

typedef struct Car
{
  enum car_type type;
  double km;
  double gas;
} Car;

void getInformation(Car inputCar);

int main()
{
  Car car1;
  car1.type = VOLVO;
  car1.km = 300;
  car1.gas = 50000;

  Car car2;
  car2.type = TOYOTA;
  car2.km = 500;
  car2.gas = 30000;

  Car car3;
  car3.type = LAND_ROVER;
  car3.km = 500;
  car3.gas = 700000;

  Car car4;
  car4.type = TESLA;
  car4.km = 90000;

  getInformation(car4);

  return 0;
}

void getInformation(Car inputCar)
{
  if (inputCar.type == TESLA)
  {
    printf("There is no gas Baby\n");
  }
  else
  {
    printf("The gas level is %.f", inputCar.gas);
  }
}
