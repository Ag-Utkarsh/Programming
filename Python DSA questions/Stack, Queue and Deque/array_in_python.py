# An array in Python is a data structure that can hold a fixed number of elements of the same type. 
# It is implemented using the array module and is more memory efficient than lists for storing a large number 
# of elements of the same type.

from array import array

# Creating an array of integers
arr = array('i', [1, 2, 3, 4, 5])

# Accessing elements of the array
print(arr[0])  # Output: 1

# Inserting elements into the array
arr.insert(0, 0)  # Inserts 0 at index 0
print(arr)  # Output: array('i', [0, 1, 2, 3, 4, 5])

# Removing elements from the array
arr.remove(3)  # Removes the first occurrence of 3
print(arr)  # Output: array('i', [0, 1, 2, 4, 5])

#Arrays in Python are different from lists in that they can only store elements of the same data type, 
# whereas lists can store elements of different data types. Additionally, arrays are more memory efficient
# as they store only the elements, whereas lists also store additional information such as the size 
# and reference to the elements.