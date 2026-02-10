You are given an integer array nums.

A subarray is called balanced if the number of distinct even numbers in the subarray is equal to the number of distinct odd numbers.

Return the length of the longest balanced subarray.

 

Example 1:

Input: nums = [2,5,4,3]

Output: 4

Explanation:

The longest balanced subarray is [2, 5, 4, 3].
It has 2 distinct even numbers [2, 4] and 2 distinct odd numbers [5, 3]. Thus, the answer is 4.
Example 2:

Input: nums = [3,2,2,5,4]

Output: 5

Explanation:

The longest balanced subarray is [3, 2, 2, 5, 4].
It has 2 distinct even numbers [2, 4] and 2 distinct odd numbers [3, 5]. Thus, the answer is 5.
Example 3:

Input: nums = [1,2,3,2]

Output: 3

Explanation:

The longest balanced subarray is [2, 3, 2].
It has 1 distinct even number [2] and 1 distinct odd number [3]. Thus, the answer is 3.
 

Constraints:

1 <= nums.length <= 1500
1 <= nums[i] <= 105

#EXPLANATION OF QUES:
You’re given an array nums.

You need to find the longest contiguous subarray where:

✅ Number of distinct even numbers

✅ Number of distinct odd numbers

And then return the length of that subarray.

🚨 Important Points

Subarray → must be contiguous (no skipping elements).

We count distinct numbers, not total occurrences.

We separate them by:

Even numbers

Odd numbers

🧠 What does "distinct" mean?

Distinct = unique values.

Example:

[2, 2, 4, 4]
Distinct even numbers = {2, 4}
Count = 2 (not 4!)

📌 Example 1
nums = [2,5,4,3]


Whole array:

Even numbers → {2,4} → 2 distinct
Odd numbers → {5,3} → 2 distinct

Since 2 = 2 ✅ Balanced

Length = 4

📌 Example 2
nums = [3,2,2,5,4]


Whole array:

Even → {2,4} → 2 distinct
Odd → {3,5} → 2 distinct

Balanced ✅

Length = 5

📌 Example 3
nums = [1,2,3,2]


Check whole array:

Even → {2} → 1 distinct
Odd → {1,3} → 2 distinct

Not balanced ❌

Now check subarray [2,3,2]:

Even → {2} → 1
Odd → {3} → 1

Balanced ✅

Length = 3

🎯 So what are we really doing?

We must:

Try different subarrays.

For each subarray:

Track distinct even numbers

Track distinct odd numbers

If counts match → update maximum length.
