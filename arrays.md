# Array
## Introduction
An array is a data structure commonly used in programming to store a group of data consisting of 1 type (int, short, long, string, char, bool, etc).
Because of this, it is commonly used to store values and create other data structure. 
So how do we use array in our program?

#### C++

declaration
int arr[**size**];
to assign values to an array we need the **index**
arr[0]=**value1**;
arr[1]=**value2**;
...
int arr[index]=**(valueindex+1)**;
or we can combine them into
int arr[**size**]={**values**};

we also need to use the index to access the value
arr[**index**]=**valueindex**;
std::cout\<\<arr[**index**];

#### console
valueindex

Now this introduce questions like:
1. Why does the index starts at 0?
2. Why does an array only store 1 type of value?

In this essay I will try to answer it with the best of my abilities.
Enjoy your reading
                                                -steal

## Content

Lets first see how arrays work in the memory

In the memory the array will be stored in the heap
#### Heap
say an array with size of 5, the compiler will allocate memory for the program to use 
...`[value1][value2][value3][value4][value5]`...


