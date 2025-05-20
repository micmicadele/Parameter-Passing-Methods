# Inventory and Price Update Program (Explanation Only)

This project demonstrates how functions behave when modifying data in both **Python** and **C**.

---

## ✅ Python Program (`inventory_Surname.py`)

- **add_to_stock(stock_list)**  
  This function receives a list (e.g., `[100, 200, 150]`) and appends the value `75` to it using `append()`.  
  Since lists in Python are mutable and passed by reference, the change is visible outside the function.

- **update_price(price)**  
  This function receives a float value (e.g., `250.0`) and calculates a 10% markup (`275.0`).  
  The result is printed inside the function, but the original value remains unchanged outside the function.  
  This shows that float values in Python are immutable and passed by value (a copy is made).

---

## ✅ C Program (`inventory_Surname.c`)

- **add_to_stock()**  
  This function modifies an integer array by adding `75` at the next available position.  
  Since arrays in C are passed by reference (using pointers), the change is preserved outside the function.  
  A size tracker is also passed using a pointer to keep track of how many elements are in the array.

- **update_price()**  
  This function takes a float value (e.g., `250.0`), calculates a 10% markup (`275.0`), and prints it.  
  Because primitive data types in C are passed by value by default, the original price remains unchanged outside the function.

---

## 🎯 Purpose

- To demonstrate **pass-by-reference** (e.g., list/array) vs. **pass-by-value** (e.g., float).
- To show how data can be modified inside a function (or not), depending on how it is passed.
- Useful for understanding how memory and variables work differently in Python and C.
