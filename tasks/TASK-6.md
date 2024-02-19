# STEAM Scholarship Challenge | TecDroid 3354
## Task  #5: Pattern Delimitation
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Medium |
| Max Worth | 16 points |
| Language Bonus | C++ (+2 pts) |

You will be given an integer number `n`, followed by an array `A` of `n` integer numbers
Then, you will be given an integer number `m`, followed by an array `P` of `m` integer numbers.

`P` will indicate a number pattern that could or could not be in `A` such that, for any number in `A`,  the next numbers will be a result of adding the numbers in pattern `P` an indefinite number of times.

You must print the amount of times that the pattern is matched in the whole of array `A`

#### Example 1
`A = [1, 2, 3, 3, 3, 2, 1]`
`P = [1, 0, -1]`
`Result: 1`
Here, the pattern is matched one time:
- `1, 2, 3` is `n, n + 1, n + 2`, increasing by `1` as is indicated by `P[0]`
- `3, 3, 3` is `n, n, n`, changing by `0` as isindicated by `P[1]`
- `3, 2, 1` is `n, n-1, n-2`, decreasing by `1` as is indicated by `P[2]`


#### Example 2
`A = [1, 3, 5, 4, 2, 0, 1, 5, 7, 9, 8]`
`P = [2, -1]`
`Result: 2`
Here, the pattern is matched twice:
- `1, 3, 5` is `n, n+2, n+4` and `P[0]` is `2`
- `5, 4` is `n, n-1` and `P[1]` is `-1`
- The pattern repeats at `5, 7, 9, 8`
- `5, 7, 9` is `n, n+2, n+4` and `P[0]` is `2`
- `9, 8` is `n, n-1` and `P[1]` is `-1`
	- Note that the amount of consecutive matches does not matter. You can have 5 numbers following the first index of the pattern and then just 2 following the second index

### Samples
| Input | Output |
| ---- | ---- |
| `6`<br>`3, 4, 3, 2, 0, -1`<br>`2`<br>`1,-1` | `2` |
| `4`<br>`9, 4, 1, 1`<br>`2`<br>`5, 2` | `0` |
| `6`<br>`0, -1, 1, 0, 0, 0`<br>`3`<br>`-1, 2, -1, 0` | `1` |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Count `n` | $1 < n < 10^6$ |
| Count `m` | $1 < m < 100$ |
| Elements `E` in the arrays | $-2147483648 < E < 2147483647$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 2 | 2 | 0 |
| Efficiency | 3 | 1 - 2 | 0 |
| No bugs | 3 | 1 | 0 |
| No trivial mistakes | 2 | 1 | 0 |
| Cleanliness | 3 | 1 - 2 | 0 |
| Readability | 3 | 1 - 2 | 0 |
