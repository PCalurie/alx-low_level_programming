# 0x1A-hash_tables
C hash tables, also known as hash maps, are data structures that allow efficient insertion, deletion, and retrieval of key-value pairs. They are commonly used when there is a need for fast access to data based on a specific key.

In C, hash tables are typically implemented using an array of linked lists or an array of buckets. The general idea is to map the keys to specific indices in the array using a hash function. The hash function takes a key as input and returns an index within the array.

### 0. >>> ht = {}
- It's a function that creates a hash table.
 - Returns a pointer to the newly created hash table
 - If something went wrong, your function should return NULL

### 1. djb2
* a hash function implementing the djb2 algorithm.
 - It uses a simple calculation to generate a new hash value based on the current character. The expression ((hash << 5) + hash) is equivalent to multiplying the hash value by 33, which is a commonly used multiplier in hash functions. The + c part adds the ASCII value of the current character to the hash calculation.

### 2. key -> index
- a function that gives you the index of a key.

### 3. >>> ht['betty'] = 'cool'
- a function that adds an element to the hash table.

### 4. >>> ht['betty']
* a function that retrieves a value associated with a key.

### 5. >>> print(ht)
- a function that prints a hash table.

### 6. >>> del ht
- a function that deletes a hash table.
### 100. PHP STRUCTURES
![python](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/253/php.png)
- PHP uses a technique using a hash function where through employing a proccess called chainning.
- This method simply stores all elements having the same hash in a linked list. When a key is looked up PHP will calculate the hash and then go through the linked list of “possible” values until it finds the matching entry.
![python](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230710%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230710T075213Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8beb2c92fcd4398aa921b406cbf44dd8fdc2b7e609881093e281e4b0844bfbbd)
