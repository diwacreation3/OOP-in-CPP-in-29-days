# The C++ Standard template Library(STL)

The Standard Template Library(STL) is a set of C++ template class to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. it is a generalized library and so, its components are parameterized. Working knowledge of template classes is a prequisite for owrking with STL.

The C++ Standard Template Library(STL) is a collections of algorithms, data structures, and other components that can be used to simplify the development of C++ programs. The STL provides a range of containers such as vectors, lists and maps as well as algorithms for searching, sorting and manipulating data.

One of the key benefits of the STL is that it provides a way to write generic reusable code that can be applied to different data types. this means that you can write an algorithms once, and then use it with different types of data without having to write seprate code for each type.

### Some of the key components of the STL include:

1. Containers : the STL provides a range of container such as vector, list, map, set, and stack, which can be used to store and manipulate data.
1. Algorithms : The STL provides a range of algorithms, such as sort, find and binary_search, which can be used to manipulate data stores in containers.
1. iterators : Iterators are the objects that provide way to traverse the elements of  container. the STL provides a range  of iterators, such as forward_iterator, bidirectional_iterator, and random_access_iterator, that can be used with different types of containers.

1. Function Objects : Function Objects also known as functors, are objects that can be used as function arguments to algorithms. They provide a way to pass a function to an algorithm,  allowing you to customize its behaviour
1. Adapters : Adapeters are components that modify the behaviour of other components in the STL. For example the reverse_iterator adapter can be used to reverse the order of elements in a container.

By using the STL, you can simplify your code, reduce the likelihood of errors, and improve the performance of your programs.

## STL has 4 components 
- Algorithms 
- Containers 
- Functors
- iterators

### 1. Algorithm 

The header algoritms defines a collection of function specially designed to be used on a range of elements. They act on conatiners aand provide means for various operations for the contents of the containers.

- Algorithm

    - Sorting
    - Searching
    - partation Operations
- Numeric 

    - valArray class

### 2. Containers

Containers or container classes store objects and data. Yhere are in total seven standards "first-class" container and three container adaptor classes and only sevem header files that provide access to these containers or container adaptors.

- Sequence Containers: Implement data structures that cna be accessed in a sequqntial manner. 

    - vector
    - list
    - deque
    - arrays
- Container Adaptors: Provide a different interface for sequntial containers.
    - queue
    - priority_queue
    - stack

- Associative Containers: Implemment sorted dat structures that can be structures that can be quickly searched 
    - set
    - multiset
    - map
    - multimap

- Unordered Associative Containers: Implement unordered data structures that can be quckly serached 
    - unordered_set (introduced in C++ 11 )
    - unordered_multiset (introduced in C++ 11 )
    - unordered_map (introduced in C++ 11 )
    - unordered_multimap (introduced in C++ 11 )


### 3. Functors
The STL includes classes that overloaded the function call operator. Instances of such classes are called function objects or functors. Functors allow the working of the associated function to be customized with the help of parameters to be passesd.

### 4. iterators
As the name suggests, iterators are used for working on a sequence of values. They are the major feature that allow generality in STL.

