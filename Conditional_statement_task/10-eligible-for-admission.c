/*10. Write a C program to determine eligibility for admission to a professional course based on the following criteria:
	Marks in Maths >=65
	Marks in Phy >=55
	Marks in Chem>=50
	Total in all three subject >=190
	or
	Total in Math and Physics >=140
￼
	Test Data :
	Eligibility Criteria :
	Marks in Maths >=65
	and Marks in Phy >=55
	and Marks in Chem>=50
	and Total in all three subject >=190
	or Total in Maths and Physics >=140
	-------------------------------------
	Input the marks obtained in Physics :65
	Input the marks obtained in Chemistry :51
	Input the marks obtained in Mathematics :72
	Total marks of Maths, Physics and Chemistry : 188
	Total marks of Maths and  Physics : 137
	The candidate is not eligible.
	Expected Output :
	The candidate is not eligible for admission.
*/

#include <stdio.h>
int main()
{
	int math, phy, chem;
	printf("Input the marks obtained in Physics :");
	scanf("%d", &phy);
	printf("Input the marks obtained in Chemistry :");
	scanf("%d", &chem);
	printf("Input the marks obtained in Mathametics :");
	scanf("%d", &math);
	if ((math >= 65) && (phy >= 55) && (chem >= 50))
	{
		printf("Total marks of Maths, Physics and Chemistry :%d\n", math + phy + chem);
		printf("Total marks of Maths and  Physics : %d\n", math + phy);
	}

	else
	{
		printf("The candidate is not eligible\n");
	}
	if ((math + phy + chem >= 190) || (math + phy >= 140))
	{
		printf("The candidate is eligible for admission.\n");
	}
	else
	{
		printf("The candidate is not eligible for admission\n");
	}
	return 0;
}