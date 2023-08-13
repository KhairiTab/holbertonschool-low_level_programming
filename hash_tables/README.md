# C - Hash tables

A hash table, also known as a hash map, is a data structure that stores key-value pairs and provides efficient insertion, deletion, and lookup operations. It is widely used in computer science and programming to implement associative arrays or dictionaries, where each key is associated with a value.

The main idea behind a hash table is to use a hash function to map each key to an index in an array. This index is often referred to as a "bucket." By doing so, hash tables achieve constant-time average-case complexity for basic operations like insertion, deletion, and retrieval, making them very efficient for handling large amounts of data.

## Basic Components of a Hash Table:
### Hash Function: 
The hash function takes a key as input and produces an index (or hash code) that determines the location in the underlying array where the associated value will be stored. The goal is to distribute the keys uniformly across the available buckets.

### Array: 
The hash table's core data structure is an array of buckets. Each bucket can hold a key-value pair or a reference to a linked list of key-value pairs if collisions occur (more on this later).

### Collision Handling:
 Collisions occur when two different keys hash to the same index. Since the array has a fixed size, collisions are inevitable. Various collision resolution techniques are used to handle this situation and ensure that all key-value pairs are stored correctly.

### Separate Chaining:
 In this method, each bucket contains a linked list of key-value pairs. When a collision occurs, new entries are added to the linked list at the corresponding bucket.

Open Addressing: Here, when a collision happens, the algorithm searches for the next available (open) bucket and places the new entry there. Common open addressing strategies include linear probing, quadratic probing, and double hashing.

