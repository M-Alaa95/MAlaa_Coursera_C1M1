
/******************************************************************************
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
 * <This file >
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

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/*Definitions of Functions and Comments here */



 /******************************************************
 * 1- print_statistics() :
 * -----------------------------------------------------
 *  Description:
 *  ============
 *  This function simply prints the calculated statistics to the command line
 ********************************************************/
 void print_statistics(void){
     /* Function implementation */


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
 *  - int* 'ptr_arr' : pointer to array
 *  - int  'length'  : length of the array
 *********************************************************/
 void print_array( int* ptr_arr , int length ){
              /* Function implementation */


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
 *  - int* 'ptr_arr' : pointer to array
 *  - int 'length'  : length of the array
 *
 *  Return:
 *  =======
 *  - int 'median' : the value of the calculated median
 **********************************************************/

 int find_median( int* ptr_arr , int length ){
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
 *  - int* 'ptr_arr' : pointer to array
 *  - int 'length'   : length of the array
 *
 *  Return :
 *  ==========
 *  - int 'mean' : the value of the calculated mean
 ************************************************************/
 int find_mean( int* ptr_arr , int length ){
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
 *  - int* 'ptr_length' : pointer to array
 *  - int 'length'      : length of the array
 *
 *  Return:
 *  =======
 *  - int 'maximum' : the maximum value found within  the array of integers provided
 ******************************************************************/
  int find_maximum( int* ptr_arr , int length ){
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
 *  - int* 'ptr_length'  : pointer to array
 *  - int 'length'       : pointer to the array
 *
 *  Return:
 *  =======
 *  - int 'minimum' : the minimum value found within the array of integers provided
 *****************************************************************/
  int find_minimum( int* ptr_arr , int length ){
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
 *  - int* 'ptr_arr' : pointer to array to be sorted
 *  - int 'length'   : the length of the array to be sorted
 *
 *  Return:
 *  =======
 *  - int* 'pointer to new sorted array'
 *************************************************/
int* sort_array( int* ptr_arr , int length ){
               /* Function implementation */

}



