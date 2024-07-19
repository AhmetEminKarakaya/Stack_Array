# Stack Data Structure Using Array

This repository contains the implementation of a stack data structure using an array in C. Stacks are LIFO (Last-In-First-Out) data structures, commonly used in various algorithms and system functions.

## Features

- **Fixed Size:** Uses a predefined maximum size for the stack.
- **LIFO Order:** Ensures last-in-first-out order of processing elements.
- **Efficient Operations:** Provides efficient push and pop operations.

# API Reference

- **HndStack initstack();**
- **int isFull(HndStack hnd);**
- **int isEmpty(HndStack hnd);**
- **void push(HndStack hnd, int val);**
- **int pop(HndStack hnd);**
- **void destroy(HndStack hnd);**
- **void makeempty(HndStack hnd);**
