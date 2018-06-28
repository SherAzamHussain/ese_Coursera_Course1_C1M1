/**
 * @file: stats.h 
 * @brief header file, contains declaration and documentation for the functions from stats.c file
 *
 * 
 *
 * @author: Sher Azam
 * @date: 28/06/2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief calculates the median of array
 *
 * This function takes as input an array of data and array length as inputs. The function will 
 * compute the median of input array and return the median as output integer


 * @param myArray[] array of data
 * @param length    length of input array
 * @return the computed median of array
 *
 */

int find_median(char myArray[], int length);

/**
 * @brief calculates the mean of array
 *
 * This function takes as input an array of data and array length as inputs. The function will 
 * compute the mean of input array and return the mean as output float


 * @param myArray[] array of data
 * @param length    length of input array
 * @return the computed mean of array
 *
 */

float find_mean(char myArray[], int length);


/**
 * @brief calculates the maximum of array
 *
 * This function takes as input an array of data and array length as inputs. The function will 
 * find the maximum of input array and return the maximum as output float


 * @param myArray[] array of data
 * @param length    length of input array
 * @return the maximum element of array
 *
 */

int find_maximum(char myArray[], int length);


/**
 * @brief finds the minimum element of array
 *
 * This function takes  an array of data and array length as inputs. The function will 
 * find the minimum of input array and return the minimum output 

 * @param myArray[] array of data
 * @param length    length of input array
 * @return the minimum element of array
 *
 */

int find_minimum(char myArray[], int length);


/**
 * @brief sorts the array from largest to smallest element.
 *
 * This function takes  an array of data and array length as inputs. The function will 
 * sort the elements of array from largest to smallest, e.g the zeroth element should be 
 * largest value and the last element should be the smallest value. 

 * @param myArray[] array of data
 * @param length    length of input array
 * @return a pointer to array.
 *
 */

int *sort_array(char myArray[], int length);


/**
 * @brief prints the statistics of array.
 *
 * This function takes  an array of data and array length as inputs. The function will 
 * return the statistics of array including, median, mean, minimum and maximum.

 * @param myArray[] array of data
 * @param length    length of input array
 * @return a struct which contains, mean, median, minimum and maximum value of array.
 *
 */

struct print_statistics(char myArray[], int length);


/**
 * @brief prints the contents of array.
 *
 * This function takes  an array of data and array length as inputs. The function will 
 * print the contents of array.

 * @param myArray[] array of data
 * @param length    length of input array
 * 
 */

void print_array(char myArray[], int length);

































#endif /* __STATS_H__ */
