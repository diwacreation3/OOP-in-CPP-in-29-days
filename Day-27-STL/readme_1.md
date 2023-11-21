# Introduction to iterators in C++

An iterator is an object like pointer that points to an elements inside the container. We can use iterators to move through the contents of the containers. they can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular using them. Iterators play a critical role in connecting algorithm with containers along with the manipulation of data stored inside the containers. The most obvious form of an iterator is a pointer. A pointer can point to elements in an array and can iterate through them using the increment operator (++). But, all iterators do not have similar functionality as that of pointers. Depending upon the functionality of iterators they can be classified into five categories, as shown in the diagram below with the outer one being the most powerful one and consequently the inner one is the least powerful in terms of functionality.

![](/images/img-5.png)

### Types of iterators
Based upon the functionality of the iterators, they can be classified into five major categories:

1. input iterators: They are weakest of all iterators and have very limited functionlity. they can only used in single-pass algorithms i.e those alogorithms which process the cointainer sequentially, usch that no element is accessed more than once.

1. Output iterators: just like input iterators, they are also very limited in their functionality and can only be used in single-pass algorithm, but not for accessing elements, but for being assigned elements.

1. Forward iterator: They are higher in the hierarchy than input and output iterators and contain all the fetures present in thee two iterators. But, as the name suggets, they also can only move in a forward direction and that too one step at a time.

1. Bidirectonal iterators: They have all the features of ofrward iterators along wit h tha fact that they overcome the drawback of forward iterators as they can move in both the directions, that is why their name is bidirectional.

1. random-Access iterators: they are the most powerful iterators. They are not limited to moving seqentially as their name suggests, they can randomly access any elements inside the container. they are the ones whose functionality are same as pointer. 

