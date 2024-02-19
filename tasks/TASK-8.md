# STEAM Scholarship Challenge | TecDroid 3354
## Task  #8: Prime Factors of a Prime Factor Sum
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Medium |
| Max Worth | 17 points |
| Language Bonus | None |

You will be given a number `n`, followed by `n` integer numbers. You must find all prime factors of each number store them together **avoiding any duplicate values**

You must them sum these values together and obtain the prime factors of the result. You must do this for as many times as there is more than one prime factor in the result. In the end, you must output the amount of times that you took the prime factors of a number.

### Example
`15, 32, 57, 93`
- The prime factors of $15$ are $3, 5$
- The prime factors of $32$ are $2, 2, 2, 2, 2$
- The prime factors of $57$ are $3, 19$
- The prime factors of $93$ are $3, 31$
When put into a set of numbers all together, the list becomes $\{2, 3, 5, 19, 31\}$. The sum of these values is $60$.

By this point, we have taken the prime factors of a number once,  thus our count is $1$

Now, take the prime factors of $60$. The result is $2, 2, 3, 5$. Take all unique values and sum them. $\sum_{0}^{i}S = 10$. The prime factors of $10$ are $2, 5$, values which are already unique. This is the second time we have taken the prime factors of a number, thus our count is $2$

Finally, the sum of the values in $\{2, 5\}$ is $7$. Taking the prime factors yields $7$ and our count rises to $3$. Since the amount of prime factors we obtained is $1$, the program stops here and the count you should output is $3$


### Samples
| Input | Output |
| ---- | ---- |
| `19` | `4181` |
| `16` | `987` |
| `0` | `0` |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Number `n` | $0 < n < 10^6$ |
| Values `v` | $-2147483648 < v < 2147483647$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 2 | 1 | 1 |
| Efficiency | 4-5 | 2-3 | 1 |
| No bugs | 2 | 1 | 0 |
| No trivial mistakes | 2 | 1 | 0 |
| Cleanliness | 3 | 1 - 2 | 0 |
| Readability | 3 | 1 - 2 | 0 |
