# STEAM Scholarship Challenge | TecDroid 3354
## Task  #5: Find or Insert
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Low |
| Max Worth | 10 points |
| Language Bonus | None |

You will be given an integer number $n$, followed by an **ordered** set $S$ of $n$ integer numbers
After that, you will be given a number $v$. You must determine the following:

- If $v$ is within the elements in $S$, then print its index
- If $v$ is not within the elements in $S$, then print the index of where it would be if it were to be inserted **in a sorted manner**

> [!NOTE]
If the language you are using starts indexing at `1` instead of `0`, Please make sure to perform the necessary modifications to match the samples.

### Samples
| Input | Output |
| ---- | ---- |
| `4 1 3 5 6 5` | `2` |
| `4 1 3 5 6 2` | `1` |
| `4 1 3 5 6 7` | `4` |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Count `n` | $1 \leq n \leq 10^{6}, n \in \mathbb{Z}$ |
| Size of $S$ | $\|S\| = n$ |
| Max value of $S_{i}$ | $-10^{6} < S_{i} < 10^{6}, S_{i} \in \mathbb{Z}$ |
| Target $v$ | $-10^{6} \leq v \leq 10^{6}, v \in \mathbb{Z}$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 1 | 1 | 0 |
| Efficiency | 2 | 1 | 0 |
| No bugs | 1 | 1 | 0 |
| No trivial mistakes | 2 | 1 | 0 |
| Cleanliness | 2 | 1 | 0 |
| Readability | 2 | 1 | 0 |
