// Write a C program to calculate the volume of the following shapes:
// 1. Cube,
// 2. Cuboid,
// 3. Sphere,
// 4. Cylinder and
// 5. Cone.
// Ask the user which one she/he wants to calculate, and get the required
// inputs. Then print the result. The input should be taken in the main
// function and calculations for the above objects should be done in a
// separate function by passing appropriate arguments.
#include<stdio.h>
void cube(int l)
{
  printf("%d",(l*l*l));
}
void cuboid(int l,int b,int h)
{
  printf("%d",(l*b*h));
}
void sphere(int r)
{
  printf("%.3f",((r*r*r)*3.14)*1.33);
}
void cylinder(int r,int h)
{
  printf("%.3f",(3.14*r*r*h));
}
void cone(int h,int r)
{
  printf("%.3f",(3.14*r*r*(h/3)));
}
int main()
{
  int choice,l,b,d,h,r;
  printf("Enter 1 for Cube 2 for Cuboid and 3 for Sphere 4 for Cylinder 5 for Cone\n");
  scanf("%d",&choice);
  switch(choice)
    {
      case 1:
      printf("enter dimension of cube one side\n");
      scanf("%d",&l);
      cube(l);
      break;
      case 2:
      printf("enter length breadth and height of the cube seperated by a space\n");
      scanf("%d %d %d",&l,&b,&h);
      cuboid(l,b,h);
      break;
      case 3:
      printf("enter radius");
      scanf("%d",&r);
      sphere(r);
      break;
      case 4:
      printf("Enter radius and height of Cylinder seperated by a space\n");
      scanf("%d\n%d",&r,&h);
      cylinder(r,h);
      case 5:
      printf("Enter height and radius of the cone\n");
      scanf("%d\n%d",&h,&r);
      cone(h,r);
      break;
      default:
      printf("invalid input");
    }
  return 0;
}