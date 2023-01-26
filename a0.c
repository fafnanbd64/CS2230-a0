// this is a pre-processor directive
#include <stdio.h>
#include <string.h>


// this is a function prototype
int chars_to_int(char*, int);

// this is the main function
int main(int argc, char **argv) {
	// output usage if incorrect number of command line
	// arguments were given
	if (argc != 2) {
		printf("usage: %s 0[bqonzx]<number>", argv[0]);
		return -1;
	}

	// `chars` is an array of characters
	char *chars = argv[1];
	
	int loud = 0;    // Finding out the base. Checking the prefixes using if else conditions. Then setting the base into the integer variable loud.  
	
	
	if (chars [1] == 'b') {
	   
	    loud = 2;
	   
	} 
	else if (chars [1] == 'q') {
	    loud = 5;
	    
	}
	else if (chars [1] == 'o') {
	    loud = 8;
	   
	}
	else if (chars [1] == 'n') {
	    loud = 9;
	   
	}
	else if (chars [1] == 'z') {
	    loud = 12;
	   
	}
	else if (chars [1] == 'x') {
	    loud = 16;
	   
	}
	int result;
	(chars_to_int(chars, loud)); //Passed my base and the chars array to the function chars_to_int to calculate the further result. 
	
	
	//printf("%c\n", chars[2]);
	 
	
	    
	    
	  
	// TODO: call `chars_to_int` with correct argumentsS
	//       for binary, quinary, octal, nonary,
	//       dozenal and hexadecimal
	// TODO: output an error if the base is incorrect
	//       using `fprintf(stderr, "", ...)`

	// TODO: output an error if `chars_to_int`
	//       encountered an error
	// print the result
//	printf("%d\n", result) ;

	// exit succefully
	return 0;
}

int chars_to_int(char *chars, int base){
	// TODO: implement this function to translate
	//       an array of characters to a decimal number
   
   
        
    int result=0;                              
    int length;
    for (int i=0; i<20; i++) {                  //Using a for loop to look for null value. when we find 
        if (chars [i] == '\0'){                 // the null value, we set the index as the variable  
            length = i;                         // length. I found a similar code at a random website. I 
        }                                       // honestly dont have the url save or I would have pasted
                                                // it here. 
    }
    
    //checking if the base is equal to 2, 5, 8 and 9. Since these bases do not require any additional care as they are all gonna be integers, I didnot bother to check them any more. I just iterated a for loop to increment result for every base and then adding up the decimal value of that integer in the chars array to find the final result.   

    if (base == 2 || base == 5 || base == 8 || base == 9) { 
        
        
        for (int i=2; i <= length-1; i++) {
            result = ((result * base) + (chars[i]-48));    //the formula takes the first result and multiplies it with the base and adds with the decimal value in that particular index and then takes the result again multiplies it with base and adds it with the decimal value in chars[i] again and does this as many times as the value of length-1.  
                
            
    
        }
       
       }
       
       // I had to modify the else statement a bit. i iterated a for loop to convert all the characters in the chars array into integers. Then checked if the integers value is less than 58 or not. If they are less than 58, I subtracted 48 from them to find the decimal value of the character. Otherwise, I subtracted 55 from the values that are NOT less than 48. 
    else if (base == 12 || base == 16) {
         int a= 0;
        for (int i=2; i <= length-1; i++) {
               
                a= chars[i];
               if ( a < 58) {
                   chars[i] = chars[i]-48;
                   
                   
               }
               else {
                   chars[i] = chars[i]- 55;
                   
               }
        }
        
        for (int i=2; i <= length-1; i++) {
            result = ((result * base) + (chars[i]));
                
            
    
        }
        

        }
    printf("%d\n", result);
	return *chars;
    }

