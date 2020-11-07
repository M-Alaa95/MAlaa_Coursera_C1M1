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
 * @file <stats.h>
 * @brief <This is the header file of the project stats which is the assignment of modul 1 of embedded systesms course on Coursera>
 *
 * < This project implements a caculation for the median, mean, minimum value, maximum value of a set of values given by an array of integrs >
 *
 * @author <Muhammad Alaa>
 * @date <11.6.2020>
 *
 * The functions included in this file are as follows:
 * =====================================================
 * -----------------------------------------------------
 * 1- print_statistics() :
 * -----------------------------------------------------
 *  Description:
 *  ============
 *  This function simply prints the calculated statistics to the command line of a given array of unsigned chars
 *
 *  Inputs:
 *  =======
 *  - unsigned char* 'ptr_arr' : pointer to array
 * - int 'length' : length of the array provided
 *
 *  ----------------------------------------------------
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
 *
 *  ----------------------------------------------------
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
 *
 *  ----------------------------------------------------
 *  4- find_mean() :
 *  ----------------------------------------------------
 *  Description :
 *  =============
 *  This function calculates the mean of the given array of integers and returns the result
 *
 *  Inputs:
 *  =======
 *  - unsigned char* 'ptr_arr' : pointer to array
 *  - int 'length'   : length of the array
 *
 *  Return :
 *  ==========
 *  - int 'mean' : the value of the calculated mean
 *
 *  ----------------------------------------------------
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
 *
 *  ----------------------------------------------------
 *  6- find_minimum() :
 *  ----------------------------------------------------
 *  Descripition :
 *  ==============
 *  This fundtion finds the minimum value in the set of integrs provided through the input array of integrs and returns the miniumum value found
 *
 *  Input:
 *  ======
 *  - unsigned char* 'ptr_length'  : pointer to array
 *  - int 'length'       : pointer to the array
 *
 *  Return:
 *  =======
 *  - int 'minimum' : the minimum value found within the array of integers provided
 *
 *  -----------------------------------------------------
 *  7- sort_array() :
 *  -----------------------------------------------------
 *  Description :
 *  =============
 *  This function sorts the array from the largest to the smallest in order
 *
 *  Input :
 *  =======
 *  - unsigned char* 'ptr_arr' : pointer to array to be sorted
 *  - int 'length'   : the length of the array to be sorted
 *
 *  Return:
 *  =======
 *  - unsigned char* 'pointer to new sorted array'
 *
 *  -----------------------------------------------------
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
 *
 *
 *****************************************************************************************************/
#ifndef __STATS_H__
#define __STATS_H__

/*Declarations and Function Comments here */



 /******************************************************
 * 1- print_statistics() :
 * -----------------------------------------------------
 *  Description:
 *  ============
 *  This function simply prints the calculated statistics to the command line of a given array of unsigned chars
 *
 *  Inputs:
 *  =======
 *  - unsigned char* 'ptr_arr' : pointer to array
 * - int 'length' : length of the array provided
 ********************************************************/
 void print_statistics( unsigned char* ptr_arr, int length );



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
 void print_array( unsigned char* ptr_arr , int length );

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

 int find_median( unsigned char* ptr_arr , int length );

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
 int find_mean( unsigned char* ptr_arr , int length );

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
  int find_maximum( unsigned char* ptr_arr , int length );


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
  int find_minimum( unsigned char* ptr_arr , int length );

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
void sort_array(  unsigned char* ptr_arr_original , unsigned char* ptr_arr_sorted_copy , int length );

 /************************************************
 *  8- swap_two_elements() :
 *  -----------------------------------------------------
 *  Description :
 *  =============
 *  This function swaps the index of two consecutive numbers in an array
 *
 *  Input :
 *  =======
 *  - unsigned char* 'arr_to_be_sorted' : first element
 *  - int 'target_index' : target_index
 *
 *************************************************/
void swap_two_elements( unsigned char* arr_to_be_sorted , int target_index );




#endif /* __STATS_H__ */
