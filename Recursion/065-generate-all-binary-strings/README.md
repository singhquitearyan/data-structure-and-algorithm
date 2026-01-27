Generate all Binary strings - Given an integer n, return all binary strings of length n that do not contain consecutive 1s. Return the result in lexicographically increasing order.

We need:
Binary strings of length n
No consecutive 1s
Lexicographically increasing order

🧠 Key Idea
At every position, we have two choices:
Put '0'
Put '1'

But we can only put '1' if the previous character was not '1'.

So the rule is:
If previous character is '1', we cannot place '1' again.

🔥 Why This Automatically Gives Lexicographical Order?
If we always:
Try '0' first
Then try '1'
The output will naturally be sorted lexicographically.

Because:
0 < 1

✨ Example
Input:
n = 3

Valid outputs:
000
001
010
100
101


Invalid ones:
011 ❌
110 ❌
111 ❌

🧱 How Recursion Works

We build string step by step.

At each step:

If previous was '1' → only place '0'

Otherwise → try both '0' and '1'
