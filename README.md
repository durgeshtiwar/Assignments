1.  First loop → runs N times → O(N).
    Second loop → runs M times → O(M).
    Total = O(N + M).
    Space Complexity = O(1) (only variables a, b, i, j).
    Time = O(N + M), Space = O(1)
    Answer: Time = O(N + M), Space = O(1)

2.  Outer loop runs N times.
    Inner loop runs from N down to i → about (N - i) iterations.
    Answer: O(N²)

3.  Outer loop: runs from n/2 to n → ~n/2 = O(n) iterations.
    Inner loop: j doubles each time (2, 4, 8, …, ≤ n) → O(log n) iterations.
    Total = O(n \* log n)
    Answer: O(n log n)

4.  Outer loop: runs n/2 = O(n) times.
    Middle loop: condition → j + n/2 <= n ⇒ j <= n/2 ⇒ ~n/2 = O(n) iterations.
    Inner loop: k doubles ⇒ O(log n) iterations.
    Total = O(n _ n _ log n) = O(n² log n).
    Answer: O(n² log n)

5.  Θ(n log n)
6.  Θ(n² log n)
7.  Θ(n²)
8.  (n² log n)
9.  Θ(n²)
10. Θ(n²)
