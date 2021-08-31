# Fibonacci Search Library

## What is Fibonacci Search ?
Fibonacci Search is a comparison-based technique that uses Fibonacci numbers to search an element in a sorted array.

## Why to use Fibonacci Search ?
While there is already a Logn searching technique available to search elements in an array i.e Binary search ,it can still be found to be costly as Binary search uses division operator to divide the range is can be costly when data sets are large in quantity. 

To reduce this cost , Fibonacci Search Liberary comes to play, which does not require heavy operations to divide the ranges , rather uses + or - operators to divide the ranges which proves to be cost effective.

## How does Fibonacci search works ?
Fibonacci search first finds the smallest Fibonacci number that is greater or equal to the length of the given array. Now we subtract 2 from the fibonacci number we found and use it as an index (If it is valid index). 

Then we compare the element at that index with the value to be searched in the array, if value of to be searched matches with the element found at that index, then we simply return that index. Else if value at that index is less than the element to be searched, then we recur for subarray after previous index , else we recur for subarray before the index that we calculated.

## Implementation of Fibonacci search library :
There is single iterative function in the library which has parameters as a sorted array (in which the element is to be searched), second parameter is the size of array and the third parameter is the element to be searched in the array. 

If element is found in the array, the function returns the index at which the element is found , if the element is not found then the function simply returns -1.

## Time complexity of Fibonacci search and comparison to other searching algorithms :
Considering n as the input size :

Searching Algorithm |Best case  | Average case | Worst case |
------------        | ------------- | ----------------|-------------|
Linear search | O(1)|  O(n)  |(O(n)
Binary search | O(1) | O(logn)|O(logn)|
Fibonacci search | O(1)|O(logn)|O(logn)


## Similarites and Differences with Binary search :
### Similarities with Binary Search:  

 1. Works for sorted arrays.
 
 2. A Divide and Conquer Algorithm.
 
 3. Has Log n time complexity.

### Differences with Binary Search: 

 1. Fibonacci Search divides given array into unequal parts
 
 2. Binary Search uses a division operator to divide range. Fibonacci Search doesn’t use /, but uses + and -. The division operator may be costly on some CPUs.
 
 3. Fibonacci Search examines relatively closer elements in subsequent steps. So when the input array is big that cannot fit in CPU cache or even in RAM, Fibonacci Search can be useful.

## How to use this library ?
To use this library, download the fib_search.h and fib_search.c in same folder where you have your c file in which you want to use this library,and include the header library i.e fib_search.h

On top of the file , write this:

#### #include "fib_search.h"

Also, if you want to use angular brackets instead of ” ” to include your header file you can save it in the standard folder of header files.






