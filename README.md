# Prefix-Sum-algorithm
Efficient approach using Prefix Sum Array :

1 : Run a loop for 'm' times, inputting 'a' and 'b'.
2 : Add 100 at index 'a' and subtract 100 from index 'b+1'.
3 : After completion of 'm' operations, compute the prefix sum array.
4 : Scan the largest element and we're done.
What we did was adding 100 at ‘a’ because this will add 100 to all elements while taking prefix sum array. Subtracting 100 from ‘b+1’ will reverse the changes made by adding 100 to elements from ‘b’ onward.

For better understanding :


After I operation -
A : 0 100 0 0 -100 
Prefix Sum Array : 0 100 100 100 0

After II operation -
A : 100 100 0 -100 -100
Prefix Sum Array : 100 200 200 100 0

After III operation -
A : 200 100 -100 -100 -100
Prefix Sum Array : 200 300 200 100 0

Final Prefix Sum Array : 200 300 200 100 0 

The required highest element : 300
Applications of prefix sum algorithm

