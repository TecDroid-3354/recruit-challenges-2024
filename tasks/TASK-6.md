# STEAM Scholarship Challenge | TecDroid 3354
## Task  #6: Fast Fibonacci Sequence
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Medium |
| Max Worth | 15 points |
| Language Bonus | Haskell (+1 pts), Julia (+1 pts) |

You will be given a number `n` and you must calculate the `n`<sup>th</sup> Fibonacci number.

> [!CAUTION]
> If your program times out **then your answer's *output* and *efficiency* will be marked as lacking.** That's the catch. (See rubric)

> [!NOTE]
**From Wikipedia:** 
>
>In mathematics, the **Fibonacci sequence** is a **sequence in which each number is the sum of the two preceding ones**. Numbers that are part of the Fibonacci sequence are known as Fibonacci numbers, commonly denoted $F_{n}$ . **The sequence commonly starts from 0 and 1**, although some authors start the sequence from 1 and 1 or sometimes (as did Fibonacci) from 1 and 2.
>
> **Starting from 0 and 1, the sequence begins:**
> $0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, \ldots$

> [!IMPORTANT]
>We will start from $0$ and $1$.

> [!TIP]
> **Bonus (+3 pts)** 
The program is recursive and still doesn't time out

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

### Output Specifications
| Output Type or Name | Spec |
| ---- | ---- |
| Execution time $T$ | $T \leq 2s$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 2 | 1 | 1 |
| Efficiency | 3 | 2 | 1 |
| No bugs | 2 | 1 | 0 |
| No trivial mistakes | 2 | 1 | 0 |
| Cleanliness | 3 | 1 - 2 | 0 |
| Readability | 3 | 1 - 2 | 0 |
