# 0x1A-hash_tables
C hash tables, also known as hash maps, are data structures that allow efficient insertion, deletion, and retrieval of key-value pairs. They are commonly used when there is a need for fast access to data based on a specific key.

In C, hash tables are typically implemented using an array of linked lists or an array of buckets. The general idea is to map the keys to specific indices in the array using a hash function. The hash function takes a key as input and returns an index within the array.

### 0. >>> ht = {}
- It's a function that creates a hash table.
 - Returns a pointer to the newly created hash table
 - If something went wrong, your function should return NULL
