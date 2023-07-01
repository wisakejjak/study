## About
This repository has been created to store all the tutorial projects I've written.
I will try to place each tutorial project in C and C++.
All these projects consist of search and sorting algorithms, which are the basis for other more complex projects. Also, these projects consist Data Structures.
It's also a great opportunity to learn Git, Markdown for readme and just help beginners learn C/C++.
Perhaps later, there will be something in Java.
***
<a name="Content">
 
 ## Content
 
</a>

 1. Searching algorithms
  * [Linear search](#Linear_search)
  * [Binary search](#Binary_search)
 2. Sorting algorithms
  * [Quicksort](#Quicksort)
  * [Merge sort](#Merge_sort)
  * [In-place merge sort](#In_place_merge_sort)
  <!--- * [Introsort](#Introsort)
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
3. [Data Structures](#Data_Structures)
  * [Array](#Array)
  * [String](#String)
  * [List](#List)
  * [Vector](#Vector)
  * [Queue](#Queues)
  * [Stack](#Stack)
  * [Set](#Set)
  * [Binary Tree](#Binary_Tree)
  * [Graph](#Graph)
--->

***

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
Insertion sort works by partitioning the array into two sections: a sorted section and an
unsorted section. The algorithm iterates through the unsorted section, selecting one
element at a time and inserting it into its correct position within the sorted section.
This process continues until the entire array is sorted.

#### Algorithm

1. Start with the 2nd element of the array.
2. Compare the 2nd element with the 1st element (the only element in the sorted section).
3. If the 2nd element is smaller, swap them so that they are in the correct order.
4. Move to the 3rd element and compare it with the elements in the sorted section.
5. Continuously compare the current element with the elements in the sorted section, moving from right to left, until you find the correct position for the current element.
6. Insert the current element into its correct position within the sorted section by shifting all larger elements one position to the right.
7. Repeat steps 4-6 for all the remaining unsorted elements.
8. Once all elements have been processed, the array will be sorted.

[:arrow_up:Back to top](#Content)
***

<a name="In_place_merge_Sort">

### In-place merge sort

</a>

#### Algorithm



[:arrow_up:Back to top](#Content)

***

<!---<a name="Introsort"></a>
### Introsort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Heapsort"></a>
### Heapsort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Insertion_Sort"></a>
### Insertion sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Block_Sort"></a>
### Block sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Timsort"></a>
### Timsort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Selection_Sort"></a>
### Selection sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Cubesort"></a>
### Cubesort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Shellsort"></a>
### Shellsort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Bubble_sort"></a>
### Bubble sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Exchange_sort"></a>
### Exchange sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Tree_sort"></a>
### Tree sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Cycle_sort"></a>
### Cycle sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Library_sort"></a>
### Library sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Patience_sorting"></a>
### Patience sorting
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Smoothsort"></a>
### Smoothsort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Strand_sort"></a>
### Strand sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Tournament_sort"></a>
### Tournament sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Cocktail_shaker_sort"></a>
### Cocktail shaker sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Comb_sort"></a>
### Comb sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Gnome_sort"></a>
### Gnome sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
<a name="Odd–even_sort"></a>
### Odd-even sort
#### Algorithm
[:arrow_up:Back to top](#Content)
***
--->
