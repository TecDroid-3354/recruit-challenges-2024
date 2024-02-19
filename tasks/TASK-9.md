# STEAM Scholarship Challenge | TecDroid 3354
## Task  #9: Pattern Delimitation
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Hard |
| Max Worth | 25 points |
| Language Bonus | C++ (+2 pts) |

You will be given an integer number `n`, followed by an array `A` of `n` integer numbers.
After that, you will be given an integer number `m`, followed by an array `P` of `m` integer numbers.

Now, let us define two things:
- A **sequence** is a set of patterns
- A **pattern** is a set of numbers that follow a particular order

**Examples:**
- `[1, 2, 3]` is the pattern $n+1$
- `[6, 6, 6]` is the pattern $n$
- `[0, -3, -6]` is the pattern $n - 3$
- `[1, 2, 3, 3, 3, 3, 3, 0, -3]` is the sequence that combines all three patterns
	- `[{1, 2, <3}, 3, 3, 3, (3>, 0, -3)]` where:
		- `{} -> n + 1`
		- `<> -> n`
		- `() -> n -3`

Now, you must find how many instances of a particular sequence exists in the array `A`. The sequence you must find is dictated by the array `P`: Each pattern in the sequence will be formed from the formula $n + P_{i}$

This means that if `P = [1, 2, 3]`, then you must find the sequence made from the patterns $n + 1$, $n + 2$ and $n + 3$ in `A`.
#### Example 1
`A = [1, 2, 3, 3, 3, 2, 1]`
`P = [1, 0, -1]`
`Result: 1`

Here, the **sequence** $\{n + 1, n, n - 1\}$ is matched one time:
- `1, 2, 3` is the first **pattern** which follows $n + 1$ because $P_{0} = 1$
- `3, 3, 3` is the second **pattern**, $n$, arising from $P_{1} = 0$
- `3, 2, 1` is the last **pattern**, $n - 1$ because $P_{2} = -1$
- Since these 3 **patterns** are present once *(consecutively)*, then your output should be `1`

#### Example 2
`A = [1, 3, 5, 4, 2, 0, 1, 5, 7, 9, 8, 7]`
`P = [2, -1]`
`Result: 2`

Here, the pattern is matched twice:
- `1, 3, 5` is the first **pattern:** $n + 2$ because $P_{0} = 2$
- `5, 4` is is the second **pattern:** $n - 1$ because $P_{1}=-1$
- The pattern is then **broken** at `4, 2`, *meaning that another pattern may now start*
- `5, 7, 9` initiates another **pattern:** $n + 2$ because $P_{0} = 2$
- `9, 8` is the second **pattern:** $n - 1$ because $P_{1}=-1$

> [!NOTE]
> Note that the amount of consecutive matches for any pattern does not matter. You can have 5 numbers following the first index of the pattern and then just 2 following the second index. `5, 5, 5, 5, 5, 5, 5, 6` **WILL** follow $\{n, n+1\}$

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
| Element value `E` in the arrays | $-2147483648 < E < 2147483647$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 2 | 1 | 0 |
| Efficiency | 5 | 2-4 | 1 |
| No bugs | 4 | 1-3 | 0 |
| No trivial mistakes | 4 | 1-3 | 0 |
| Cleanliness | 5 | 1-4 | 0 |
| Readability | 5 | 1-4 | 0 |
