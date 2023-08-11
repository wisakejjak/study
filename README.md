## About

> If you want to learn something, try to teach it

This repository has been created to store all the tutorial projects I've written.
I will try to place each tutorial project in C and C++.
All these projects consist of search and sorting algorithms, which are the basis for other more complex projects. Also, these projects consist Data Structures.

It's a great opportunity to learn Git, Make for build automation and  Markdown for readme and just help beginners learn C/C++.

_Note: Use Table of content in Readme_

_Note: Use make in ./ to make_

| make | Content |
|:-----------|:-----|
| `make c_search` |  searching algorithms in C |
| `make cpp_search` |  searching algrotithms in C++ |
| `make c_sort` | sorting algorithms in C (currently not working) |
| `make cpp_sort` | sorting algorithms in C++ (currently not working) |

<a name="content">
 
 ## Content
 
</a>

### 1. Searching algorithms
  * Linear search
  * Binary search
### 2. Sorting algorithms
  * Quicksort
  * Merge sort
  * In-place merge sort
  * Introsort
  * Heapsort
  * Insertion sort
  * Block sort
  * Timsort
  * Selection sort
  * Cubesort
  * Shellsort
  * Bubble sort
  * Exchange sort
  * Tree sort
  * Cycle sort
  * Library sort
  * Patience sorting
  * Smoothsort
  * Strand sort
  * Tournament sort
  * Cocktail shaker sort
  * Comb sort
  * Gnome sort
  * Odd-even sort
### 3. Data Structures
  * Array
  * String
  * List
  * Vector
  * Queue
  * Stack
  * Set
  * Binary Tree
  * Graph


## 1. Searching algorithms
 
### Linear search 

A linear search sequentially checks each element of the list until it finds an element
that matches the target value. 
If the algorithm reaches the end of the list, the search terminates unsuccessfully.

| Perfromance | Big O |
|:-----------:|:-----:|
|  Worst-case |  $O(n)$ |
|  Best-case  |  $O(1)$ |
|   Average   |  $O(n)$ |

__Algorithm__

1. Start at the beginning.
2. Compare the first element with the target.
3. If the current element matches the target value, the search is successful.
4. If the current element does not match the target value, move to the next element.
5. Repeat steps 3 and 4.
6. If you reach the end of the list without finding a match, the target value is not present in the list or array.

[:arrow_up:Back to top](#content)

***

### Binary search

Binary search compares the target value to the middle element of the array. 
  If they are not equal, the half in which the target cannot lie is eliminated
  and the search continues on the remaining half, again taking the middle element
  to compare to the target value, and repeating this until the target value is found. 
  If the search ends with the remaining half being empty, the target is not in the array.

  | Perfromance | Big O |
|:-----------:|:-----:|
|  Worst-case |  $O(log (n))$ |
|  Best-case  |  $O(1)$ |
|   Average   |  $O(log (n))$ |

__Algorithm__

  1. Start with a sorted array of elements. Binary search works efficiently on sorted arrays.
  2. Set two pointers, "low" and "high," to mark the lower and upper bounds of the search space. Initially, "low"
points to the first element, and "high" points to the last element of the array.
  3. Calculate the middle index of the search space by taking the average of "low" and "high": 
      $middle = \frac{low + high}{2}$
  4. Compare the target value you're searching for with the element at the middle index:
   * If the target value matches the element at the middle index, the search is successful, and you can return the index or any desired output.
   * If the target value is less than the element at the middle index, it means the target must be in the lower half of the search space. Update "high" to be one less than the middle index: $high = middle - 1$
   * If the target value is greater than the element at the middle index, it means the target must be in the upper half of the search space. Update "low" to be one more than the middle index: $low = middle + 1$
  5. Repeat steps 3-4 until either the target value is found or the search space is empty. An empty search space occurs when "low" becomes greater than "high".
  6. If the search space is empty and the target value has not been found, it means the target is not present in the array.
     
[:arrow_up:Back to top](#content)

***

## 2. Sorting algorithms

### Quicksort

Quicksort (Tony Hoare) is a divide-and-conquer algorithm. It works by selecting a 
'pivot' element from the array and partitioning the other elements into two
sub-arrays, according to whether they are less than or greater than the pivot.

| Perfromance | Big O |
|:-----------:|:-----:|
|  Worst-case |  $O(n^2)$ |
|  Best-case  |  $O(n \times log (n))$ |
|   Average   |  $O(n \times log (n)$ |


__Algorithm__

1.  Choose a pivot element from the array. This pivot element will be used to partition the array into two halves.
2. Reorder the array so that all elements smaller than the pivot come before the pivot, and all elements greater than the pivot come after it. This process is called partitioning. After this step, the pivot element will be in its final sorted position.
3. Recursively apply the above steps to the sub-array of elements that are smaller than the pivot and the sub-array of elements that are greater than the pivot.
4. Repeat steps 1 to 3 until the entire array is sorted. This means recursively applying the algorithm to the smaller sub-arrays until they contain only one element (which is already considered sorted).

![quick_sort.gif](/media/quick_sort.gif)

[:arrow_up:Back to top](#content)

***

### Merge sort

Merge Sort is a popular sorting algorithm that follows the divide-and-conquer principle. It works by dividing the input array into smaller sub-arrays, sorting them separately, and then merging them back together to obtain a sorted array.

| Perfromance | Big O |
|:-----------:|:-----:|
|  Worst-case | $O(n \times log (n))$ |
|  Best-case  | $O(n \times log (n))$ |
|   Average   | $O(n \times log (n))$ |


__Algorithm__

 1. **Divide.** The input array is recursively divided into two halves until we reach the base case, which is when the array contains only one element or is empty.
 2. **Conquer.** Once the array is divided into individual elements, the merging process begins. The two sub-arrays are merged by comparing the elements at corresponding positions and placing them in the correct order. This is done recursively until all sub-arrays are merged.
 3. **Merge.** To merge the sub-arrays, we create an auxiliary array to store the sorted elements. We maintain three pointers: `i` for the left sub-array, `j` for the right sub-array, and `k` for the auxiliary array. At each step, we compare the elements at positions `i` and `j`. The smaller element is placed in the auxiliary array at position `k`, and the corresponding pointer is incremented. This process continues until all elements have been merged.
 4. **Copy.** After merging all the sub-arrays, the sorted elements are stored in the auxiliary array. We copy these elements back into the original input array, replacing the unsorted elements with the sorted ones.

![mergesort.gif](/media/merge_sort.gif)

[:arrow_up:Back to top](#content)
***

### In-place merge sort

In progress...


__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Introsort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)
***
 
### Heapsort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Insertion sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Block sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Timsort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Selection sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Cubesort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Shellsort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Bubble sort

Bubble sort is a simple sorting algorithm that repeatedly steps through the
list, compares adjacent elements, and swaps them if they are in the wrong
order. The pass-throughs continue until the list is sorted.

| Perfromance | Big O comprasions |
|:-----------:|:-----:|
|  Worst-case |  $O(n^2)$ |
|  Best-case  |  $O(n)$ |
|   Average   |  $O(n^2)$ |

| Perfromance | Big O swaps |
|:-----------:|:-----:|
|  Worst-case |  $O(n^2)$ |
|  Best-case  |  $O(1)$ |
|   Average   |  $O(n^2)$ |

__Algorithm__

1. Start at the begin of the list
2. Compare element and next from it
3. If the current element is greater than the next element, swap them.
4. Go to next element and repeat third step.
5. If th current element - last element of the list, list is sorted.

![bubble_sort.gif](/media/bubble_sort.gif)

[:arrow_up:Back to top](#content)

***
 
### Exchange sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Tree sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Cycle sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Library sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Patience sorting

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Smoothsort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Strand sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Tournament sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Cocktail shaker sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Comb sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***
 
### Gnome sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

### Odd-even sort

In progress...

__Algorithm__

In progress...

[:arrow_up:Back to top](#content)

***

## 3. Data Structures

### Array

Array - collection of elements. All elements of the array have the same memory size. They have at least one _array index_ or _key_ .

Example (One-dimensional array of 10 ints):

```C++ 
void foo{
 int N = 10; // Size of array
 int Array_A[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // elements of array
 int Array_B[10]; // empty array (size 10)
}
```
Also, array elements can be arrays themselves. This allows for creating a two-dimensional array. This structure resembles a chessboard or a table. Moreover, the size of the array and the size of the array-elements can differ. However, the size of all array-elements must match by definition of an array.

Example (Two-dimensional array of 10x10 ints):
```C++
void foo{
 int N = 10; // Size of array
 int M = 10; // Size of array-elements
 int Array_A[N][M]; // Two-dimensional array
}
```
Of course, it is evident that both three-dimensional and n-dimensional arrays can be created.
Are arrays in C++ same as C? 

[:arrow_up:Back to top](#content)

***
 
### String

In progress...

[:arrow_up:Back to top](#content)

***
 
### List

In progress...

[:arrow_up:Back to top](#content)

***
 
### Vector

In progress...

[:arrow_up:Back to top](#content)

***
 
### Queue

In progress...

[:arrow_up:Back to top](#content)

***
 
### Stack

In progress...

[:arrow_up:Back to top](#content)

***
 
### Set

In progress...

[:arrow_up:Back to top](#content)

***
 
### Binary Tree

In progress...

[:arrow_up:Back to top](#content)

***

### Graph

In progress...

[:arrow_up:Back to top](#content)

***
