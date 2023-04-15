<h2><a href="https://practice.geeksforgeeks.org/problems/why-is-melody-so-chocolaty0446/0">Why is Melody so chocolaty?</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Chunky gets happy by eating Melody.<br>
Given an array of N elements, each element represents happiness chunky get by eating melody.<br>
Chunky knows why melody is so chocolaty but will only tell you once you tell him the Max happiness he can get by eating <strong>two adjacent melodies</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>â€‹Input :</strong> arr[ ] = {1, 2, 3, 4, 5}
<strong>Output :</strong> 9
<strong>Explanation:</strong>
At index 0, arr[0] + arr[1] = 3
At index 1, arr[1] + arr[2] = 5
At index 2, arr[2] + arr[3] = 7
...
In this way, <strong>9</strong> will be the answer.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>â€‹Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {1, 2, 3, 4} <strong>
Output :</strong>  7</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>max_adjacent_sum()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, and return the maximum happiness. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ N ≤ 10<sup>5</sup><br>
-10<sup>7</sup>&nbsp;≤ A[i] ≤ 10<sup>7</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;