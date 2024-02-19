# STEAM Scholarship Challenge | TecDroid 3354
## Task  #11: How did we get here?
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Hard |
| Max Worth | 30 points |
| Language Bonus | x86_64 ASM (+100 pts) |

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

![IMAGE_1](https://github.com/TecDroid-3354/steam-scholarship-challenges/blob/main/resources/points-3d-1.png?raw=true)

![IMAGE_2](https://github.com/TecDroid-3354/steam-scholarship-challenges/blob/main/resources/points-3d-2.png?raw=true)

![IMAGE_3](https://github.com/TecDroid-3354/steam-scholarship-challenges/blob/main/resources/points-3d-3.png?raw=true)

- Green points are paths
- Red points are obstacles
- The blue point is $A$
- The orange point is $B$
### Samples
| Input | Output |
| ---- | ---- |
| `3 3 3 5 1 1 1 0 1 1 1 0 1 0 1 0 1 0 0 0 0 0 1 1 0` | `8` |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| $n, m, l$ | $1 \leq n \leq 10^3, n \in \mathbb{Z}$<br>$1 \leq m \leq 10^3, m \in \mathbb{Z}$<br>$1 \leq l \leq 10^3, l \in \mathbb{Z}$ |
| $O$ | $1 \leq O < 10^6, O \in \mathbb{Z}$ |


### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 2 | 1 | 0 |
| Efficiency | 7 | 1-6 | 0 |
| No bugs | 5 | 1-4 | 0 |
| No trivial mistakes | 6 | 1-5 | 0 |
| Cleanliness | 5 | 1-4 | 0 |
| Readability | 5 | 1-4 | 0 |
