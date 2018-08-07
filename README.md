# Stack Pop Sequence Validation Problem
### This is my solution for this problem that I had to solve for my data Data Struct. &amp; Algorithms course.

#### Problem:
Suppose that an intermixed sequence of 10 push and 10 pop operations are performed on a LIFO stack. The pushes push the letters 0 through 9 in order; the pops print out the return value. Which of the following output sequence(s) could occur? Some of the examples are:

<b>1)</b> "1 0 2 3 4 7 6 5 9 8" is valid by the push/pop sequence of "0 1 - - 2 - 3 - 4 - 5 6 7 - - - 8 9 - -"

<b>2)</b> "0 2 1 3 4 6 9 8 7 5" is valid by the push/pop sequence of "0 - 1 2 - - 3 - 4 - 5 6 - 7 8 9 - - - - "

<b>3)</b> "3 2 4 6 1 8 7 9 5 0" is invalid because When 6 is pushed, both 1 and 5 are still on the stack. So, 5 would be popped before 1.

<b>4)</b> "4 3 2 1 0 5 6 7 8 9" is valid by the push/pop sequence of "0 1 2 3 4 - - - - - 5 - 6 - 7 - 8 - 9 - "

<b>5)</b> "1 2 4 0 3 5 6 8 7 9" is invalid because When 4 is pushed, both 0 and 3 are still on the stack. So, 3 would be
popped before 0.
