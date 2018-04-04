# CST126_01 - Plastic spoons and strings

**Class ID:** Cottonee

**Assignement ID:** CST126_01

**Unresolved Issues:**

**Notes:**


---

**Purpose:**  
	Practice working with pointers  
	Practice working with the heap  

**Goal:**

  Create a string function that identifies the location of a character within a string.  The FIND function 
  should locate character within a text string, and return the number of first location of the character 
  within the text string.  
	
	Your program has the following restrictions.  

	  - The text function should take a pointer to a char for the string.  
	  - You may not use any string functions or cstring functions.  If you need these functions, 
	    you should write them yourself.  
	  -   You may only use pointers / pointer arithmetic to access your strings
			(hint:  I wrote my own strlen and strcopy functions using pointer arithmetic.)
	  - The FIND function should be case sensative.
	  - Your FIND function should return a -1 if the character isn't found.
	  - Your FIND function should handle an empty string. 
	  - Use human indexed format not C++ indexing.  So the first character is position 1.
	  - You clean your heap up before you exit the program.  No memory leaks.

---

Output Format  
=============

\-\- _input string_ \-\-    
_char_ is in position nn  

Testing Data  
=============
Run your program with the following test data:

**String:**  "I was born with a plastic spoon in my mouth."  
**Characters:**  i, I, w, z, r     

**String:**  ""  
**Character:** y  

Sample Output
=============

Given the test set above, the output would be:

-----

\-\- I was born with a plastic spoon in my mouth. \-\-  
i is in position 13  
I is in position 1  
w is in position 3  
z is in position -1  
r is in position 9  

\-\-  \-\-  
y is in position -1    
