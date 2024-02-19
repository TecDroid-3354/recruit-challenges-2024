# STEAM Scholarship Challenge | TecDroid 3354
## Task  #11: How did we get here?
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Hard |
| Max Worth | 30 points |
| Language Bonus | None |

You will be given an integer number $n$, $m$ and $l$. These will be the dimensions of a 3-dimensional space. Then, you will be given a number $O$ followed by $O$ triplets $t$ of numbers which will represent coordinates in the 3D space. The set of all triplets is named $T$.

Finally, you will be given a triplet $A$ and a triplet $B$ of integer numbers.

> [!INFO]
> A triplet is a set of three values $(x, y, z)$.

You will have to determine the shortest distance possible from $A$ to $B$ taking into account that you cannot go through any of the points in $T$.

### Example
For the input `3 3 3 5 1 1 1 0 1 1 1 0 1 0 1 0 1 0 0 0 0 0 1 1 0`, you can find:
- $5$ obstacles at:
	- $(1, 1, 1)$
	- $(0, 1, 1)$
	- $(1, 0, 1)$
	- $(0, 1, 0)$
	- $(1 0 0)$
- Point $A$ at $(0, 0, 0)$
- Point $B$ at $(1, 1, 0)$

Ideally, the least number of steps to get from $A$ to $B$ is of $8$ steps.

images here lol
### Samples
| Input | Output |
| ---- | ---- |
| `3 3 3 5 1 1 1 0 1 1 1 0 1 0 1 0 1 0 0 0 0 0 1 1 0` | `8` |


### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |


### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 2 | 1 | 0 |
| Efficiency | 6 | 1-5 | 0 |
| No bugs | 5 | 1-4 | 0 |
| No trivial mistakes | 5 | 1-4 | 0 |
| Cleanliness | 6 | 1-5 | 0 |
| Readability | 6 | 1-5 | 0 |
