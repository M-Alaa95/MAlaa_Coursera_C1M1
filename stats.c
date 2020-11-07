
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

  /* Other Variable Declarations Go Here */
  int i,j;  // initiating these two variables to act as counters in the for loops used


  /* Statistics and Printing Functions Go Here */
  //presenting the number set provided:
  //===================================
  print_array( test , SIZE );


  //showing the results of the analysis for this number set provided :
  //===================================================================
  print_statistics( test , SIZE );

  // Presenting the number set provided after sorting :
  //===================================================================
  sort_array(  test , SIZE );



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
     printf("The maximum value of this set is : %d\n\n", find_maximum( ptr_arr , SIZE ) );
     printf("The minimum value of this set is : %d\n\n", find_minimum( ptr_arr , SIZE ) );
     printf("The mean value of this set is : %d\n\n", find_mean(  ptr_arr , SIZE ) );
     printf("The median value of this set is : %d\n\n", find_median(  ptr_arr , SIZE ) );

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
 *  -  unsigned char* 'ptr_arr' : pointer to array
 *  - int  'length'  : length of the array
 *********************************************************/
 void print_array( unsigned char* ptr_arr , int length ){
              /* Function implementation */
   //presenting the number set provided:
   //===================================
   int i , j ; //
   printf("The input array of 40 integers is as follows : ");
   for( i = 0 ; i < SIZE ; i+=5 ){
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
 *  -  unsigned char* 'ptr_length' : pointer to array
 *  - int 'length'      : length of the array
 *
 *  Return:
 *  =======
 *  - int 'maximum' : the maximum value found within  the array of integers provided
 ******************************************************************/
  int find_maximum(  unsigned char* ptr_arr , int length ){
           /* Function implementation */


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
 *  -  unsigned char* 'ptr_arr' : pointer to array to be sorted
 *  - int 'length'   : the length of the array to be sorted
 *
 *  Return:
 *  =======
 *  -  unsigned char* 'pointer to new sorted array'
 *************************************************/
 unsigned char* sort_array(  unsigned char* ptr_arr , int length ){
               /* Function implementation */
    //presenting the number set after sorting from the greatest to the smallest value:
    //=================================================================================
    int i , j ;
    printf("The array after sorting from the greatest element to the smallest will be as follows : ");
    for( i = 0 ; i < 40 ; i++ ){
        printf("\n");
        for( j = 0 ; j < 5 ; j++ ){
        printf("%d ", ptr_arr[i]);
        }
    }
}



