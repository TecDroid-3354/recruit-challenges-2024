# STEAM Scholarship Challenge | TecDroid 3354
## Task  #4: Duplicate Removal
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Low |
| Max Worth | 10 points |
| Language Bonus | C (+1 pt) |

You will be given **one** number $n$, and then you will be given $n$ integer numbers (The whole set of numbers will be called $E$). You must remove every duplicate member from the given numbers, leaving you only with unique values.

> [!TIP]
**Bonus (+2 pts)** 
>
Sort the array **without** using language built-ins

### Samples
| Input | Output |
| ---- | ---- |
| **No Bonus**<br>`13 2 3 6 6 8 3 2 5 88 3 2 5 31` | **Order is irrelevant**<br>`88 31 5 8 6 3 2 `<br> |
| **W/Bonus**<br>`13 2 3 6 6 8 3 2 5 88 3 2 5 31` | **Order is relevant**<br>`2 3 5 6 8 31 88 `<br> |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Count $n$ | $1 < n < 10^{15}, n \in \mathbb{Z}$ |
| Size of $E$ | $\|E\| = n$ |
| Max value of $E_{i}$ | $-10^{6} < E_{i} < 10^{6}, E_{i} \in \mathbb{Z}$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 1 | 1 | 0 |
| Efficiency | 2 | 1 | 0 |
| No bugs | 1 | 1 | 0 |
| No trivial mistakes | 2 | 1 | 0 |
| Cleanliness | 2 | 1 | 0 |
| Readability | 2 | 1 | 0 |
