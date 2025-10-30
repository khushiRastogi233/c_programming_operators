Question 1:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int a = 5, b = 2, c;
    c = a++ + ++b;
    printf("%d %d %d", a, b, c);
    return 0;
}
A) 5 3 7
B) 6 3 8
C) 6 2 7
D) 5 2 8

What is your answer? (A/B/C/D)

You said: b


a++ uses the current value of a (5), then increments a to 6.
++b increments b first (from 2 to 3), then uses it.
So, c = 5 + 3 = 8
After this, a = 6, b = 3, c = 8
So, the output is: 6 3 8 (Option B).

Ready for Question 2?

Question 2:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int x = 4, y = 5;
    printf("%d", x+++y);
    return 0;
}
A) 9
B) 8
C) 10
D) Compilation Error

What is your answer? (A/B/C/D)

You said: 9
The expression is x+++y.
This is parsed as (x++) + y, not as x + (++y).
x++ returns 4 (then increments x to 5), and y is 5.
So, 4 + 5 = 9.
Output: 9 (Option A)

Ready for Question 3?

Question 3:
What will be the output of the following code?


#include <stdio.h>
int main() {
    int a = 3, b = 4;
    printf("%d", a+++b++);
    return 0;
}
A) 7
B) 8
C) 6
D) Compilation Error

What is your answer? (A/B/C/D)
7

a+++b++ is parsed as (a++) + (b++)
a++ uses 3 (then a becomes 4)
b++ uses 4 (then b becomes 5)
3 + 4 = 7 gets printed
So, the correct answer is A) 7.

Ready for Question 4?

Question 4:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int a = 10;
    printf("%d", a = a == 10);
    return 0;
}
A) 1
B) 10
C) 0
D) Compilation Error

What is your answer? (A/B/C/D)

You said: 1
1
Explanation:** - `a == 10` evaluates
Correct!

Explanation:

a == 10 evaluates to 1 (true), so the assignment is a = 1.
Therefore, printf("%d", a = a == 10); prints 1.
Correct answer: A) 1

Ready for Question 5?

Question 5:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int a = 1, b = 0, c = 3, d;
    d = a && b || c;
    printf("%d", d);
    return 0;
}
A) 0
B) 1
C) 3
D) Compilation Error

What is your answer? (A/B/C/D)

You said: 1

Explanation:

a && b is 1 && 0 which is 0.
0 || c is 0 || 3 which, in C, any non-zero value is treated as true, so the result is 1.
So, the output is 1 (Option B).

Ready for Question 6?

Question 6:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 0;
    c = a & b | a ^ b;
    printf("%d", c);
    return 0;
}
A) 15
B) 10
C) 5
D) 0

What is your answer? (A/B/C/D)

You said: 15

Explanation:
a = 5 (binary: 0101), b = 10 (binary: 1010)
a & b = 0101 & 1010 = 0000 (0)
a ^ b = 0101 ^ 1010 = 1111 (15)
So, a & b | a ^ b is 0 | 15 = 15
Output: 15 (Option A)

Ready for Question 7?

Question 7:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int x = 2;
    printf("%d", x << 2 + 1);
    return 0;
}
A) 8
B) 16
C) 32
D) 64

What is your answer? (A/B/C/D)

You said: pls make understand
pls make understand
Copilot said: Of course! Let’s break down the logic
Of course! Let’s break down the logic of Question 7:

C
#include <stdio.h>
int main() {
    int x = 2;
    printf("%d", x << 2 + 1);
    return 0;
}
Key concepts:
<< is the left shift operator.
+ is the addition operator.
In C, operator precedence matters: + has higher precedence than <<.
Step-by-step breakdown:
Expression: x << 2 + 1

Operator precedence:
2 + 1 is evaluated first, because + is higher than <<.

So:
x << 3 (since 2 + 1 = 3)

What does x << 3 mean?
This shifts the bits of x (which is 2) to the left by 3 positions.

2 in binary: 00000010
Shift left by 3: 00010000
This is 16 in decimal.
So, the output is 16.
Summary:

Always check operator precedence!
x << 2 + 1 is not x << 2 then + 1, but rather x << (2 + 1).
If you need any more explanations or want to proceed with the next question, let me know!

Question 8:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int a = 8;
    printf("%d", a >> 2 - 1);
    return 0;
}
A) 4
B) 2
C) 1
D) 8

What is your answer? (A/B/C/D)

You said: 4
The expression is a >> 2 - 1
Operator precedence: 2 - 1 = 1, so the expression is a >> 1
8 in binary: 1000
Right shift by 1: 0100 (which is 4 in decimal)
So, the output is 4 (Option A).

Ready for Question 9?

Question 9:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int x = 6, y = 3;
    printf("%d", x > 3 ? x < 5 ? x : y : 0);
    return 0;
}
A) 3
B) 6
C) 0
D) 5

What is your answer? (A/B/C/D)

You said: 3
Explanation:
int x = 6, y = 3;
printf("%d", x > 3 ? x < 5 ? x : y : 0);
x > 3 is 6 > 3 → true
So, we evaluate the middle part: x < 5 ? x : y
x < 5 is 6 < 5 → false
So, it uses y which is 3.
Output: 3 (Option A)

Ready for the final question, Question 10?

Question 10:
What will be the output of the following code?

C
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("%d", a > b && b++ > 5);
    printf("%d", b);
    return 0;
}
A) 0 10
B) 1 11
C) 0 11
D) 1 10

What is your answer? (A/B/C/D)

You said: 010


Explanation:

a = 5, b = 10
First expression: a > b && b++ > 5
a > b is 5 > 10 → false (0)
In C, with && (logical AND), if the first operand is false, the second is not evaluated (short-circuit).
So, b++ > 5 does not execute, and b stays 10.
printf("%d", a > b && b++ > 5); prints 0
printf("%d", b); prints 10
Output: 0 10 (Option A)