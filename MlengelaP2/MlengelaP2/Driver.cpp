/***********************************************************************************************
 * Program: Mini Cooper and its cargo.
 * Programmer: Daudi Mlengela (dmlengela@cnm.edu)
 * Date: 29 September 2021 @ 11:59:59.
 * Purpose: To calculate the volume and weight of bar: our calculation should display: 
 * 1. Cargo space for 2 and 4 door Min-Cooper (cubic feet).
 * 2. Maximum number of pounds the car can carry. 
 * 3. Number of cubic inches in one cubic foot. 
 * 4. Number of cubic inches in a Fort Knox gold bar.
 *************************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
 {
	 
	 /******************************************************************
      * First and foremost, we need to greet the user.
     ********************************************************************/
	   string name;
	   cout << " Enter the name of the C++ professor: ";
	   getline(cin, name);
	   cout << " Hello " << name << ", thanks for teaching me C++." << endl << endl;
	
	/*********************************************************************
	  * Second, we need to declare the constant for the densities of the metals in lbs/cubic inch.
	  * The densities that will used to calculate the volume and the weigh of the bar. 
	  **********************************************************************/
	 static const double Aluminum_Density = 0.098;
	 static const double Copper_Density = 0.324;
	 static const double Silver_Density = 0.379;
	 static const double Platinum_Density = 0.77;
	 static const double Gold_Density = 0.618;
	 
	 /******************************************************************************
	 * Third, we need to get the input by asking which Mini Cooper 
	 * a user wish to drive with the option of 2-door or 4-door from the user. 
	 *****************************************************************************/
	 
	 int numberOfDoors = 0;
	 cout << " Do you want to drive a 2 or 4 door Mini Cooper?: ";
	 cin >> numberOfDoors;

	 switch (numberOfDoors)
	 {
	 case 2:
		 cout << " You entered 2!" << endl << endl;
		 break;
	 case 4:
		 cout << " You entered 4!" << endl << endl;
		 break;
	 default:
		 cout << " I do not recognize this number of the door! Please, try again " 
			 << endl << endl;
		 break;

	 }

	 /************************************************************************************************
	  * Fourth, we need to get the input validation by asking the user to enter the type of metal bars. 
	  * We need to give the user options or a selection menu to choose from. 
	  ***********************************************************************************************/
	 int metalType{ 0 };
	 cout << "\n This is a selection menu, please choose the type of metal bar: ";
	 cout << "\n 1. Aluminum ";
	 cout << "\n 2. Copper " ;
	 cout << "\n 3. Silver " ;
	 cout << "\n 4. Platinum " ;
	 cout << "\n 5. Gold ";
	 cin >> metalType;

	 cout << " You choose "; 

	 switch (metalType)
	 {
	 case 1:
		 cout <<" Aluminum. \n\n";
		 break;
	 case 2:
		 cout <<" Copper. \n\n ";
		 break;
	 case 3:
		 cout <<" Silver. \n\n ";
		 break;
	 case 4:
		 cout <<" Platinum. \n\n ";
		 break;
	 case 5:
		 cout << " Gold. \n\n ";
		 break;
	 default:
		 cout << "\n The number is valid. ";

	 }
	 
	 /**************************************************************************************
	  * Fifth, we need to get input form the user on how many bars
	  * from the choosen metal they want to carry. We assume that they are all sized to the 
	  * Fort Knox Standard. 
	  *************************************************************************************/
	 int numberOfBars = 0;
	 cout <<"How many bars would you like to carry? \n";
     cin >> numberOfBars;
	 
	 /* *********************************************************************************
	 * Seventh, We need to declare Fort Knox Standard: 7 x 3 5/8 x 1 3/4. 
	 * *********************************************************************************/
	 int Fort_Knox_Gold_Bar = 27.5;
	 static const double Cubic_Inches_Fort_Knox_Bar =
		 7.0 * (3 + 5.0 / 8.0) * (1 + 3.0 / 4.0);

	 /***********************************************************************************
	 * Eighth, we need to calculate the cargo space in cubic feet for our two models. 
	 ************************************************************************************/

	 static const double Cargo_Space_2_Door = 24.0;
	 static const double Cargo_Space_4_Door = 32.8;

	/*******************************************************************************************
	* Nineth, We need to calculate the max weight we can carry and cubic/inches per cubic/foot.
	*************************************************************************************** ***/

	 static const int Max_Pounds = 1800;

	 static const int Cubic_Inches_Per_Cubic_Foot = (12 * 12 * 12);
	 static const int Vol_Of_a_Bar_Per_cubic_Feet = (34548 / 1728);

	 /******************************************************************************************
	 * Tenth, We need an if, else if, and else if block to determine the density value for the 
	 * calculation to determine the cargo space. 
	 *******************************************************************************************/

	 double density = 0.0;

	 if (metalType == 1)
	 {
		 cout << Aluminum_Density << endl;
	 }
	 else if (metalType == 2)
	 {
		 cout << Copper_Density << endl;
	 }
	 else if (metalType == 3)
	 {
		 cout << Silver_Density << endl;
	 }
	 else if (metalType == 4)
	 {
		 cout << Platinum_Density << endl;
	 }
	 else
	 {
		 cout << Gold_Density << endl;
	 }

	 /* ****************************************************************************
	  * Eleventh, to calculate the how much the bar will weigh.
	  * ***************************************************************************/

	 double totalCubicInches = numberOfBars * Cubic_Inches_Fort_Knox_Bar;
	 double totalWeight = totalCubicInches * density;
	 double cubicFeet = totalCubicInches / Cubic_Inches_Per_Cubic_Foot;
	 

	 /* *********************************************************************
	  * Twelveth, To display the results. 
	  * **********************************************************************/
		cout <<" Total weight in pounds: " << totalWeight << "\n";
		cout <<" Total size in cubic feet: " << cubicFeet << "\n";
		cout <<" Cubic_Inches_Fort_Knox_Bar: " << Cubic_Inches_Fort_Knox_Bar << "\n";
		cout << " Total volume in cubic feet: " << cubicFeet << "\n";


	 /* ***********************************************************************
	  * Lastly, to write a goodbye message before exiting.
	  *************************************************************************/

		cout << " \n\n Thanks for using my program! ";

	return 0;


}