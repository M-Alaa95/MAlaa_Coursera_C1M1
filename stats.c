/*********************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <Add Brief Description Here >
 *
 * <
 *   This program consists of a couple of functions that can analyze an array of unsigned char data
 *   items and report analytics on the == maximum == , == minimum == , == mean == , and == median ==
 *   of the data set. In addition, you will need to reorder this data set from large to small. All
 *   statistics should be rounded down to the nearest integer. After analysis and sorting is done, you
 *   will need to print that data to the screen in nicely formatted presentation.
 * >
 *
 * @author <Muhammad Alaa>
 * @date <6.11.2020>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)




void main() {

// The provided set of numbers to calculate the statics needed for this set provided by an array of unsigned chars :
//==================================================================================================================
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  // Creating a new copy of the array to be sorted :
  //================================================
  unsigned char ptr_arr_sorted[SIZE];

  // Sort the new copy of the array using sort_array() function :
  //=============================================================
  sort_array( test , ptr_arr_sorted , SIZE );

  /* Other Variable Declarations Go Here */
  int i,j;  // initiating these two variables to act as counters in the for loops used


  /* Statistics and Printing Functions Go Here */
  //presenting the number set provided:
  //===================================
  print_array( test , SIZE );


  //showing the results of the analysis for this number set provided :
  //===================================================================

  print_statistics( ptr_arr_sorted , SIZE );


  //presenting the number set after sorting from the greatest to the smallest value:
  //=================================================================================
  printf( "The array after sorting from the greatest element\nto the smallest will be as follows : " );
  printf( "\n====================================\n" );
  for( i = 0 ; i < SIZE ; i+=5 ){
        printf( "\n" );
        for( j = 0 ; j < 5 ; j++ ){
            printf( "%d \t" , ptr_arr_sorted[ i + j ] );
        }
  }
}

                                         /*Definitions of Functions and Comments here */

 /******************************************************
 * 1- print_statistics() :
 * -----------------------------------------------------
 *  Description:
 *  ============
 *  This function simply prints the calculated statistics to the command line of a given array of unsigned chars
 *
 *  Inputs:
 *  =======
 * - unsigned char* 'ptr_arr' : pointer to array
 * - int 'length' : length of the array provided
 ********************************************************/
 void print_statistics( unsigned char* ptr_arr , int length ){
     /* Function implementation */

     //showing the results of the analysis for this number set provided :
     //===================================================================
     printf("\n\n");
     printf("The maximum value of this set is : %d\n\n", find_maximum( ptr_arr , length ) );
     printf("The minimum value of this set is : %d\n\n", find_minimum( ptr_arr , length ) );
     printf("The mean value of this set is : %d\n\n", find_mean(  ptr_arr , length ) );
     printf("The median value of this set is : %d\n\n", find_median(  ptr_arr , length ) );

 }



 /******************************************************
 *  2- print_array() :
 *  ----------------------------------------------------
 *  Description:
 *  ============
 *  This function prints the given array of the input set of values to perform the statistics calculations to
 *
 *  Inputs:
 *  =======
 *  - unsigned char* 'ptr_arr' : pointer to array
 *  - int  'length'  : length of the array
 *********************************************************/
 void print_array( unsigned char* ptr_arr , int length ){
              /* Function implementation */
   //presenting the number set provided:
   //===================================
   int i , j ; //
   printf("The input array of 40 integers is as follows : ");
   printf( "\n==============================================\n" );

   for( i = 0 ; i < length ; i+=5 ){
        printf("\n");
        for( j = 0 ; j < 5 ; j++ ){
                printf("%d \t ", ptr_arr[i+j]);
        }
   }
 }

 /********************************************************
 *  3- find_median() :
 *  ----------------------------------------------------
 *  Description:
 *  ============
 *  This function calculates the median of the given array of integers and returns the result
 *
 *  Inputs:
 *  =======
 *  -  unsigned char* 'ptr_arr' : pointer to array
 *  - int 'length'  : length of the array
 *
 *  Return:
 *  =======
 *  - int 'median' : the value of the calculated median
 **********************************************************/

 int find_median(  unsigned char* ptr_arr , int length ){
        /* Function implementation */

    //Calculate the median value of the set of numbers given:
    //=======================================================

    //Check if the count of the numbers is odd :
    //==========================================
    if( ( length % 2 ) != 0 )
        return ( ptr_arr[ ( length / 2 ) + 1 ] ) ;
    else if( ( length % 2 ) == 0 ){
        return ( ( ptr_arr[ length / 2 ] + ptr_arr [ ( length / 2 ) + 1 ]  ) / 2 ) ;
    }
 }

 /**********************************************************
 *  4- find_mean() :
 *  ----------------------------------------------------
 *  Description :
 *  =============
 *  This function calculates the mean of the given array of integers and returns the result
 *
 *  Inputs:
 *  =======
 *  -  unsigned char* 'ptr_arr' : pointer to array
 *  - int 'length'   : length of the array
 *
 *  Return :
 *  ==========
 *  - int 'mean' : the value of the calculated mean
 ************************************************************/

int find_mean(  unsigned char* ptr_arr , int length ){
           /* Function implementation */
        long int sum = 0 , i ;
        for( i = 0 ; i < length ; i++ ){
                sum += ptr_arr[i];
        }

        //The mean is calculated as follows : sum / count of numbers given in the array:
        //==============================================================================

        //Protection :
        //==================
        if( length == 0 )
            length = 1 ;
        return ( sum / length );
 }

 /************************************************************
 *  5- find_maximum() :
 *  ----------------------------------------------------
 *  Description :
 *  =============
 *  This function finds the maximum value in the set of integers provided through the input array of integers and returns the maximum value found
 *
 *  Input :
 *  =======
 *  - unsigned char* 'ptr_length' : pointer to array
 *  - int 'length'      : length of the array
 *
 *  Return:
 *  =======
 *  - int 'maximum' : the maximum value found within  the array of integers provided
 ******************************************************************/

  int find_maximum(  unsigned char* ptr_arr , int length ){
           /* Function implementation */
        return ptr_arr[0];
  }


 /*****************************************************************
 *  6- find_minimum() :
 *  ----------------------------------------------------
 *  Descripition :
 *  ==============
 *  This fundtion finds the minimum value in the set of integrs provided through the input array of integrs and returns the miniumum value found
 *
 *  Input:
 *  ======
 *  -  unsigned char* 'ptr_length'  : pointer to array
 *  - int 'length'       : pointer to the array
 *
 *  Return:
 *  =======
 *  - int 'minimum' : the minimum value found within the array of integers provided
 *****************************************************************/

  int find_minimum(  unsigned char* ptr_arr , int length ){
               /* Function implementation */
        return ptr_arr[length - 1];
  }

 /************************************************
 *  7- sort_array() :
 *  -----------------------------------------------------
 *  Description :
 *  =============
 *  This function sorts the array from the largest to the smallest in order
 *
 *  Input :
 *  =======
 *  - unsigned char* 'ptr_arr_original' : pointer to array to be sorted
 *  - unsigned char* 'ptr_arr_sorted_copy' : pointer to a sorted copy of the array
 *  - int 'length'   : the length of the array to be sorted
 *
 *
 *************************************************/

    void sort_array(  unsigned char* ptr_arr_original , unsigned char* ptr_arr_sorted_copy , int length ){
     /* Function implementation */

    int i , j ; // two vairables declared as counters to be used in the following for loops in this function

    //getting a copy of the number set in order to keep the original set unsorted as it is :
    //======================================================================================
    for( i = 0 ; i < length ; i++ ){
	    ptr_arr_sorted_copy[i] = ptr_arr_original[i];
    }

    //Using the bubble sorting technique :
    //====================================

    for( i = SIZE - 1 ; i >= 1  ; i-- ){
	    for( j = 0 ; j < i ; j++ ){
		    if( ptr_arr_sorted_copy[j] < ptr_arr_sorted_copy[j+1] ){
			    swap_two_elements( ptr_arr_sorted_copy , j );
		    }
	    }
    }

    return ptr_arr_sorted_copy;
}

 /************************************************
 *  8- swap_two_elements() :
 *  -----------------------------------------------------
 *  Description :
 *  =============
 *  This function swaps the index of two numbers in an array
 *
 *  Input :
 *  =======
 *  - unsigned char* 'element_1' : first element
 *  - unsigned char* 'element_2' : second element
 *
 *
 *************************************************/
void swap_two_elements( unsigned char* arr_to_be_sorted , int target_index ){

    arr_to_be_sorted[target_index]     = arr_to_be_sorted[target_index] ^ arr_to_be_sorted[target_index + 1] ;
    arr_to_be_sorted[target_index + 1] = arr_to_be_sorted[target_index] ^ arr_to_be_sorted[target_index + 1] ;
    arr_to_be_sorted[target_index]     = arr_to_be_sorted[target_index] ^ arr_to_be_sorted[target_index + 1] ;
}


