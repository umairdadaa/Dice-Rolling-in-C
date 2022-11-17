#include <stdio.h> //Used for standard features such as printf, scanf, while loop
#include <stdlib.h> // Used for standard functions such as srand and rand
#include <time.h> // Used for Time/Date Manipulation

int main (){  //Main Method Begins

int a,b,c,d,e,sum=0; 

// a = Faces
// b = Throws
// c = Counter for the Loop
// d = The counter for the face count
// e = The counter for the count of Throws

int random[b]; // Array for storing the generated randoam values

float occurence; // Variable for Probabibility calculation

printf("Welcome to Random Dice Generator With Probability\n"); 
printf("\nPlease Enter the Number of Faces:"); // Asks for User Input
scanf("%d",&a); // Scans User's Input

while(a>25){ // While Loop to check the number of faces entered is between 1 and 25
    printf("Maximum Number of Faces Allowed : 25\n");
    printf("Please RE-ENTER the Number of faces :)\nHere :"); // Asks for User re-enter First Input
    scanf("%d", &a);// Scans User's Input Again
    }
    while(a<1){
    printf("Minimum Number of Faces : 1\n");
    printf("Please RE-ENTER the Number of faces :)\nHere :"); // Asks for User re-enter First Input
    scanf("%d", &a);// Scans User's Input Again
    } // While Loop Ends

printf("\nPlease Enter the Number of Throws:"); // Asks for User Second Input
scanf("%d",&b); // Scans User's Second Inputhh

    while(b>500){ // While Loop to check the number of Throws entered is between 1 and 500
    printf("Maximum Number of Throws Allowed : 500\n");
    printf("Please RE-ENTER the Number of Throws :)\nHere :");  // Asks for User re-enter Second Input
    scanf("%d", &b); // Scans User's Second Input Again
    }
    while(b<1){
    printf("Minimum Number of Throws : 1\n");
    printf("Please RE-ENTER the Number of Throws :)\nHere :"); // Asks for User re-enter Second Input
    scanf("%d", &b); // Scans User's Second Input Again
    } // While Loop Ends

    printf("\nPlease Wait, Generating Throws\n\n");

    srand(time(NULL)); // Feature in C to generate random Values ,in this case for the dice,the sequence of numbers will be repeated for each run of the program.
    
    for(c=0;c<b;c++){ // Loop to print and store randomly generated values until the condition is false.
      random[c]=rand()%a +1; // Stores the generated random values in the random array
      printf("%d\n",random[c]); // Prints out the numbers rolled for the dice / Random numbers.
    } // End of For Loop

    // Second For Loop
    for(d=1;d<=a;d++){ // Loop to compare faces to randomly generated values
        // Third For Loop
        for(e=0;e<b;e++){ // to check each value of e (Count of Throws) to d (Face Count)
              if(random[e]==d){ // comparing the values d (Face Count) and random[e (Count of Throws)]
                      sum++; // counts the how many times the randomly generated numbers were printed 
    } // End of IF Loop
  } // End of Third For Loop

  occurence=(sum*100)/b; // Calculates the Probabibility of Faces
  printf("\nOccurences of %d is: %.2lf %%\n",d,occurence); // Prints Out the Probabibility of each face based on user's Input

  sum=0; // In order to move to the next face, we reset the variable sum to zero, Otherwise it will print out the Probabibility of 1 only.
} // End of Second For Loop

 printf("\nThis Program is Designed By Muhammad Umair Dada");
 printf("\n©UmairDada");

 // These Messages were added to avoid anyone from being copyright striked.

} // End of Main Method
