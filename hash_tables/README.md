# 0x1A. C - Hash tables

## Description
This project is part of the **Holberton School low-level programming** curriculum.  
It focuses on learning how to implement and use **hash tables** in C.

The main objectives are:
- Understand what hash functions are and how they work.
- Learn about the **djb2** algorithm.
- Understand **collision handling** using chaining.
- Practice dynamic memory allocation and linked list structures.

---

## Files
| File Name | Description |
|------------|-------------|
| `0-hash_table_create.c` | Creates a hash table. |
| `1-djb2.c` | Implements the `djb2` hash function. |
| `2-key_index.c` | Returns the index of a key using the hash function. |
| `3-hash_table_set.c` | Adds an element to the hash table. |
| `4-hash_table_get.c` | Retrieves a value associated with a key. |
| `5-hash_table_print.c` | Prints the hash table. |
| `6-hash_table_delete.c` | Deletes the hash table. |
| `hash_tables.h` | Header file with all function prototypes and structures. |

---

## Compilation
All files will be compiled using:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o hash_table
