//Tim,
//No formula in the algorithm, no comments whatsoever,
//all source-code statement jammed together (makes hard to
//read), and lines are more than 80 characters wide which
//makes reading your source-code harder.
//Score: 15/20
//            CWU


/*
1. Greet User
2. Prompt user to enter height
3. Scan input
4. Prompt user to enter radius
5. Scan input
6. Calculate the volume
7. Display volume
8. Sign Off
9. Terminate program
*/

# include <stdio.h>
# define PI 3.14159
int main (void)
{
	double height = 0.0;
	double radius = 0.0;
	double  volume = 0.0;
	printf ("\nThis program helps to calculate the volume of a cone. \n");
	printf ("\nPlease enter the height(in inches) of the cone. \n");
	scanf ("%le", &height);
	printf ("\nPlease enter the radius(in inches) of the cone. \n");
	scanf ("%le", &radius);
	volume = PI * (height / 3) * (radius * radius);
	printf("\nThe height(in inches) of %f, with the radius(in inches) of %f, means the volume of the cone is %f inches.\n", height, radius, volume);
	printf("\nThank you for using this program\n");

	return 0;
}
