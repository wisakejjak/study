## About
This repository has been created to store all the tutorial projects I've written.
I will try to place each tutorial project in C and C++.
All these projects consist of search and sorting algorithms, which are the basis for other more complex projects. Also, these projects consist Data Structures.
It's also a great opportunity to learn Git, Markdown for readme and just help beginners learn C/C++.

<a name="Content"></a>
 
 ## Content
 

### 1. Searching algorithms
  * [Linear search](#Linear_search)
  * [Binary search](#Binary_search)
### 2. Sorting algorithms
  * [Quicksort](#Quicksort)
  * [Merge sort](#Merge_sort)
  * [In-place merge sort](#In_place_merge_sort)
  * [Introsort](#Introsort)
  * [Heapsort](#Heapsort)
  * [Insertion sort](#Insertion_Sort)
  * [Block sort](#Block_Sort)
  * [Timsort](#Timsort)
  * [Selection sort](#Selection_Sort)
  * [Cubesort](#Cubesort)
  * [Shellsort](#Shellsort)
  * [Bubble sort](#Bubble_sort)
  * [Exchange sort](#Exchange_sort)
  * [Tree sort](#Tree_sort)
  * [Cycle sort](#Cycle_sort)
  * [Library sort](#Library_sort)
  * [Patience sorting](#Patience_sorting)
  * [Smoothsort](#Smoothsort)
  * [Strand sort](#Strand_sort)
  * [Tournament sort](#Tournament_sort)
  * [Cocktail shaker sort](#Cocktail_shaker_sort)
  * [Comb sort](#Comb_sort)
  * [Gnome sort](#Gnome_sort)
  * [Odd-even sort](#Odd–even_sort)
### 3. Data Structures
  * [Array](#Array)
  * [String](#String)
  * [List](#List)
  * [Vector](#Vector)
  * [Queue](#Queue)
  * [Stack](#Stack)
  * [Set](#Set)
  * [Binary Tree](#Binary_Tree)
  * [Graph](#Graph)


## 1. Searching algorithms


<a name="Linear_search">

### Linear search

</a>

A linear search sequentially checks each element of the list until it finds an element
that matches the target value. 
If the algorithm reaches the end of the list, the search terminates unsuccessfully.

#### Algorithm

1. Start at the beginning.
2. Compare the first element with the target.
3. If the current element matches the target value, the search is successful.
4. If the current element does not match the target value, move to the next element.
5. Repeat steps 3 and 4.
6. If you reach the end of the list without finding a match, the target value is not present in the list or array.

[:arrow_up:Back to top](#Content)

***

<a name="Binary_search">

### Binary search

</a>

Binary search compares the target value to the middle element of the array. 
  If they are not equal, the half in which the target cannot lie is eliminated
  and the search continues on the remaining half, again taking the middle element
  to compare to the target value, and repeating this until the target value is found. 
  If the search ends with the remaining half being empty, the target is not in the array.

#### Algorithm

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
     
[:arrow_up:Back to top](#Content)

***

## 2. Sorting algorithms

<a name="Quicksort">

### Quicksort

</a>

Quicksort (Tony Hoare) is a divide-and-conquer algorithm. It works by selecting a 
'pivot' element from the array and partitioning the other elements into two
sub-arrays, according to whether they are less than or greater than the pivot.

#### Algorithm

1.  Choose a pivot element from the array. This pivot element will be used to partition the array into two halves.
2. Reorder the array so that all elements smaller than the pivot come before the pivot, and all elements greater than the pivot come after it. This process is called partitioning. After this step, the pivot element will be in its final sorted position.
3. Recursively apply the above steps to the sub-array of elements that are smaller than the pivot and the sub-array of elements that are greater than the pivot.
4. Repeat steps 1 to 3 until the entire array is sorted. This means recursively applying the algorithm to the smaller sub-arrays until they contain only one element (which is already considered sorted).

![quicksort.gif](/sort/quick_sort/quicksort.gif)

[:arrow_up:Back to top](#Content)

***

<a name="Merge_sort">

### Merge sort

</a>

Merge Sort is a popular sorting algorithm that follows the divide-and-conquer principle. It works by dividing the input array into smaller sub-arrays, sorting them separately, and then merging them back together to obtain a sorted array.

#### Algorithm

 1. **Divide.** The input array is recursively divided into two halves until we reach the base case, which is when the array contains only one element or is empty.
 2. **Conquer.** Once the array is divided into individual elements, the merging process begins. The two sub-arrays are merged by comparing the elements at corresponding positions and placing them in the correct order. This is done recursively until all sub-arrays are merged.
 3. **Merge.** To merge the sub-arrays, we create an auxiliary array to store the sorted elements. We maintain three pointers: `i` for the left sub-array, `j` for the right sub-array, and `k` for the auxiliary array. At each step, we compare the elements at positions `i` and `j`. The smaller element is placed in the auxiliary array at position `k`, and the corresponding pointer is incremented. This process continues until all elements have been merged.
 4. **Copy.** After merging all the sub-arrays, the sorted elements are stored in the auxiliary array. We copy these elements back into the original input array, replacing the unsorted elements with the sorted ones.



![mergesort.gif](/sort/merge_sort/merge_sort.gif)

[:arrow_up:Back to top](#Content)
***

<a name="In_place_merge_sort">

### In-place merge sort

</a>

In progress...


#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)

***

<a name="Introsort">
 
### Introsort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Heapsort">
 
### Heapsort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Insertion_Sort">

### Insertion sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Block_Sort">
 
### Block sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Timsort">
 
### Timsort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Selection_Sort">

### Selection sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Cubesort">
 
### Cubesort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Shellsort">
 
### Shellsort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Bubble_sort">
 
### Bubble sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Exchange_sort">
 
### Exchange sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Tree_sort">

### Tree sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Cycle_sort">

### Cycle sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Library_sort">
 
### Library sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Patience_sorting">
 
### Patience sorting

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Smoothsort">

### Smoothsort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Strand_sort">
 
### Strand sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Tournament_sort">

### Tournament sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Cocktail_shaker_sort">

### Cocktail shaker sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Comb_sort">
 
### Comb sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Gnome_sort">
 
### Gnome sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Odd–even_sort">

### Odd-even sort

</a>

In progress...

#### Algorithm

In progress...

[:arrow_up:Back to top](#Content)

***

## 3. Data Structures


<a name="Array">

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

</a>

[:arrow_up:Back to top](#Content)

***

<a name="String">
 
### String

</a>

In progress...

[:arrow_up:Back to top](#Content)
***

<a name="List">
 
### List

</a>

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Vector">
 
### Vector

</a>

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Queue">
 
### Queue

</a>

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Stack">
 
### Stack

</a>

In progress...

[:arrow_up:Back to top](#Content)
***

<a name="Set">
 
### Set

</a>

In progress...

[:arrow_up:Back to top](#Content)
***
<a name="Binary_Tree">
 
### Binary Tree

</a>

In progress...

[:arrow_up:Back to top](#Content)
***

<a name="Graph">

### Graph

</a>

In progress...

[:arrow_up:Back to top](#Content)
***
