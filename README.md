## Program 2: Mini Cooper & its Cargo
  <img width="601" height="241" alt="image" src="https://github.com/user-attachments/assets/cb88809d-090b-4e2e-9c53-4630736bc09d" />
  

In the movie, “The Italian Job,” a gang of robbers plans to steal a load of gold bricks from other bad guys. The robbers use three Mini Coopers as getaway cars. 
In the 2003 remake of the movie, the robbers create the largest traffic jam in Los Angeles history, giving them time to pull off a theft of gold bullion. 
They get away in their Mini Coopers, which are small enough to drive on sidewalks, so they can make a clean getaway before the traffic jam clears. 
The suspension and engines of the Mini Coopers in the movie were beefed up to carry the gold. In the 2003 movie, the thieves steal $35 Million in gold. 
Gold prices in 2003 ranged from $260/troy ounce to $360/troy ounce, with a yearly average of around $320/troy ounce. Using the $320/troy ounce, $35M translates to 109375 troy ounces. 
Fort Knox Gold bars are sized 7 x 3 5/8 x 1 ¾ inches and contain approximately 400 troy ounces of gold. A Fort Knox gold bar weighs about 27 ½ pounds. 
Therefore, the thieves stole the equivalent of 274 gold bars, which weighed a total of 7520 pounds of gold. In the movie, some of the gold had been spent, and in the end, the cars had to haul off 1800 pounds of gold each. 
If these values were all true, the Minis each carried around 65 gold bars.

Here is a link to the “Italian Job”:  http://www.imdb.com/title/tt0317740/
Conversion facts: 
A Troy ounce = 1.097 avoirdupois ounce
A troy ounce = 31.1034768 grams
An avoirdupois ounce = 28.3495231 grams.  (This is the ounce we think of, 16 ounces = 1 pound)

From the miniusa.com website: with the rear seats down, the standard 2-door hardtop (which was used in the movie) has 24 cubic feet of cargo space. The dry weight of the car is about 2600 pounds. 
The 4-door hardtop has 32.8 cubic feet of cargo space and weighs about 3400 pounds.

Begin by writing pseudocode for Program 2.


Be sure you answer the three questions from the program for each test case.
1.	Calculate the volume and weight of each bar.
2.	Calculate the total weight of all the bars.
3.	Answer the questions:
a)	Consider the bars’ total weight.  Can the car carry the bars based on their weight?  
b)	Consider their volume.  Will they fit in the chosen Mini Cooper’s cargo space?  
c)	Calculate how many bars of the user’s chosen metal would it would take to exactly make up the 1800 pounds, and will these bars fit in the Mini Cooper’s cargo space? 
Now you will have documented numbers to compare to your calculated numbers in your program. Then w
Now, open a new Visual Studio Project, named lastnameP1.  Use your pseudocode to outline your logic.

For this program, we’re going to assume the Mini Coopers are beefed up so that they can carry the 1800 pounds as they did in the movie.
PLUS we’re going to give our user two choices of Mini Coopers—the 2- door hardtop or the 4-door hardtop model. 

The program is going to determine whether a beefed-up Mini Cooper could carry other metal bars.  We know they can carry 65 gold bars, weighing 1800 pounds, within the 24 cubic feet of cargo space.
The other types of metal we are interested in are:  Silver, Platinum, Aluminum, and Copper. 

Create constants for the densities of the metals in lbs/cubic inch:
Aluminum: 0.098
Copper: 0.324
Silver: 0.379
Platinum: 0.77
Gold: 0.618


The program begins by displaying the program header with an explanation of the program.   Create constants for the constant values:
1.	Cargo space for 2 and 4-door Min-Coopers (cubic feet)
2.	Maximum number of pounds the car can carry
3.	Number of cubic inches in one cubic foot.
4.	Number of cubic inches in a Fort Knox gold bar.

Ask the user for their information:
1.	Ask which Mini Cooper they wish to drive, and give them the choice of 2-door or 4-door.  
2.	Ask the user to enter the type of metal bars. Give the user a menu so they can choose a metal and show them how to enter the selection.  
3.	Ask the user how many bars of the chosen metals they want to carry.  Assume they are all sized to the Fort Knox standard.
Be sure your instructions are clear and easy for the user to enter information every time you ask for input from the user. 

Once you have the information, use an if, else-if, else, or a switch statement to determine the appropriate properties for the chosen metal and assign it into your calculation variables.
Then you can do your calculations—don’t repeat the same calculation four times!  

Perform the calculations to get volume and weight. Be efficient in your program calculations. When you calculate the volume, use the cmath ceil function to round it up.
The total bar volume should be rounded up.  Use the ceil function. You will need an if/else if block to determine the density value for the calculation and another one to determine the cargo space. 

Then report the answer these three questions:
1.	Consider the bars’ total weight.  Can the car carry the bars based on their weight?  
2.	Consider their volume.  Will they fit in the chosen Mini Cooper’s cargo space?  
3.	Calculate how many bars of the user’s chosen metal would it would take to exactly make up the 1800 pounds, and will these bars fit in the Mini Cooper’s cargo space?
   Also, round up the number of bars; you can’t have a fraction of a bar.

When you have displayed the results, show a goodbye message.

Hint: It is OK to use the cargo spaces in terms of cubic inches and calculate the cubic inch volume of a Fort Knox bar. 
You can use these values to determine if the bars will fit in the cargo space instead of trying to guess the exact layout of the Mini Cooper cargo space.

## Sources:
## Usage:
 * The Program uses more math, cout, cin, and if statements, and more math.
 * Test cases and pseudocode 
## Contributions: 
