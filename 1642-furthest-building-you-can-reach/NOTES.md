i<n-1 for test case
[14,3,19,3]
17
0
​
if i didnt put = condition in heights[i]>heights[i+1]
then this happens,remember if we try to excess top of priority queue when it is empty , then it shows undefined behaviour ,basically it picks the last value,even if it is poped
​
i= 0, 6 74, count is 0
i= 2, 6 74, count is 1
i= 3, 5 74, count is 2
i= 3, 6 70, count is 2
i= 3, 7 65, count is 2
i= 3, 8 60, count is 2
i= 3, 9 55, count is 2
i= 3, 10 50, count is 2
i= 3, 11 45, count is 2
i= 3, 12 40, count is 2
i= 3, 13 35, count is 2
i= 3, 14 30, count is 2
i= 3, 15 25, count is 2
i= 3, 16 20, count is 2
i= 3, 17 15, count is 2
i= 3, 18 10, count is 2
i= 3, 19 5, count is 2
​