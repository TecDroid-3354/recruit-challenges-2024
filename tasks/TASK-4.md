# STEAM Scholarship Challenge | TecDroid 3354
## Task  #4: Duplicate Removal
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Low |
| Max Worth | 10 points |
| Language Bonus | C (+1 pt) |

You will be given **one** number `n`, and then you will be given `n` integer numbers (`E`). Your program mustthen read them into an array `A`.

You must remove every duplicate member from the array, leaving you only with unique values.

> [!TIP]
**Bonus (+1 pt)** 
Sort the array without using language built-ins

### Samples
| Input | Output |
| ---- | ---- |
| **No Bonus**<br>`13`<br>`2 3 6 6 8 3 2 5 88 3 2 5 31` | **Order is irrelevant**<br>`88 31 5 8 6 3 2 `<br> |
| **W/Bonus**<br>`13`<br>`2 3 6 6 8 3 2 5 88 3 2 5 31` | **Order is relevant**<br>`2 3 5 6 8 31 88 `<br> |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Count `n` | $1 < n < 10^6$ |
| Elements `E` | $-2147483648 < E < 2147483647$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 1 | 1 | 0 |
| Efficiency | 2 | 1 | 0 |
| No bugs | 1 | 1 | 0 |
| No trivial mistakes | 2 | 1 | 0 |
| Cleanliness | 2 | 1 | 0 |
| Readability | 2 | 1 | 0 |
