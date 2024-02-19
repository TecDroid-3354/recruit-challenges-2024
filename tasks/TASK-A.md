# STEAM Scholarship Challenge | TecDroid 3354
## Task  #10: The other tower of Hanoi
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Hard |
| Max Worth | 30 points |
| Language Bonus | C++ (+2 pts), Haskell (+5 pts) |

You will be given a number $r$,and after that you will receive $r$ numbers $N$. After that, for every number in $N$, you will receive a set of $N_{i}$ numbers $M$. Lastly, you will receive one final number $p$.

> [!NOTE]
**From Wikipedia:** 
>
**The Tower of Hanoi** is a mathematical game or puzzle **consisting of three rods and a number of discs of various diameters**, which can slide onto any rod. The puzzle begins with the discs stacked on one rod in order of decreasing size, the smallest at the top, thus approximating a conical shape. The objective of the puzzle is to move the entire stack to one of the other rods, obeying the following rules
>
> - Only one disc may be moved at a time.
> - Each move consists of taking the upper disc from one of the stacks and placing it on top of another stack or on an empty rod.
> - No disc may be placed on top of a disc that is smaller than it.

Your tower will **not** begin with all discs stacked on top of one singular rod, but rather dispersed amongst all three rods.

- The value $r$ will indicate the amount of rods on the game
- The number set $N$ will indicate that there are $N_{i}$ discs in rod $i$
- The number set $M$ indicates the diameter $M_{j}$ of the disc $j$ at rod $i$
- The value $p$ will indicate the rod in which the discs must be stacked

> [!NOTE]
> The lower the index of a disc, the higher it is on the disc stack

You must output the **minimal amount of moves** it takes to move all discs to the first rod.
### Example
The input
`3 2 2 1 2 4 1 5 3 2`
- $3$ rods
- $2$ discs in the first rod
- $2$ discs in the second rod
- $1$ disc in the last rod
- The discs in the first rod have diameters $2, 4$
- The discs in the second rod have diameters $1, 5$
- The disc in the last rod has diameter $3$
- You must sort the discs in rod $2$

`Rod Count: 3`, `Target Rod: 2`   
`Rod 1: 2, 4` `Rod 2: 1, 5` `Rod 3: 3`

This is represented as:

| Rod 1 | Rod 2 | Rod 3 |
| ---- | ---- | ---- |
| 2 | 1 |  |
| 4 | 5 | 3 |

Following the rules of the game, here's an example of how it could be solved:
- $0$ `Rod 1: 2, 4` `Rod 2: 1, 5` `Rod 3: 3`
- $1$ `Rod 1: 4` `Rod 2: 1, 5` `Rod 3: 2, 3`
- $2$ `Rod 1: 4` `Rod 2: 5` `Rod 3: 1, 2, 3`
- $3$ `Rod 1:` `Rod 2: 4, 5` `Rod 3: 1, 2, 3`
- $4$ `Rod 1:` `Rod 2: 1, 4, 5` `Rod 3: 2, 3`
- $5$ `Rod 1: 2` `Rod 2: 1, 4, 5` `Rod 3: 3`
- $6$ `Rod 1: 1, 2` `Rod 2: 4, 5` `Rod 3: 3`
- $7$ `Rod 1: 1, 2` `Rod 2: 3, 4, 5` `Rod 3:`
- $8$ `Rod 1: 2` `Rod 2: 3, 4, 5` `Rod 3: 1`
- $9$ `Rod 1: ` `Rod 2: 2, 3, 4, 5` `Rod 3: 1`
- $10$ `Rod 1: ` `Rod 2: 1, 2, 3, 4, 5` `Rod 3:`

This was done in **10 moves**. That should be your output.

Furthermore, if the problem has no solution because any movement would violate the rules of the game, then you should output: `No Solution`

### Alternative (See Rubric)
If you do not want to or can't do the above exercise then you can do this alternative.
if you choose to take the alternative route, you must print the step-by-step output in the following format:

```
Original Step 1 Step 2 Step 3 Step 4
| | |    | | |  | | |  | | |  | | |
| | |    | | |  | | |  | | |  | | |
| | |    | | |  | | 1  | | 1  | 1 |
2 1 |    | 1 2  | | 2  | 4 2  | 4 2
4 5 3    4 5 3  4 5 3  | 5 3  | 5 3

Step 5 Step 6 Step 7 Step 8 Step 9 
| | |  | | |  | | |  | | |  | | |
| | |  | | |  | | |  | | |  | 2 |
| 1 |  | | |  | 3 |  | 3 |  | 3 |
| 4 |  1 5 |  1 4 |  | 4 |  | 4 |
2 5 3  2 4 3  2 5 |  2 5 1  | 5 1

Step 10
| 1 |
| 2 |
| 3 |
| 4 |
| 5 | 
```

> [!NOTE]
> You must split into another column every $5$ steps

> [!TIP]
> The move-set doesn't have to be optimal, but it has to complete the problem

### Samples
| Input | Output |
| ---- | ---- |
| `3 2 2 1 2 4 1 5 3 2` | `10` |
| `5 6 3 1 4 8` | `No Solution` |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Count $r$ | $1 \leq r \leq 10^6, r \in \mathbb{Z}$ |
| Position  $p$ | $1 \leq p \leq r, p \in \mathbb{Z}$ |
| Element count in $N$ | $\|N\| = r$ |
| Max value of $N_{i}$ | $1 \leq N_{i} \leq 10^3, N_{i} \in \mathbb{Z}$ |
| Element count in $M$ | $\|M\| = N_{i}$ |
| Max value of $M_{j}$ | $1 \leq M_{j} \leq \sum_{1}^{i}N_{i}, M_{j} \in \mathbb{Z}$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 2 | 1 | 0 |
| Efficiency | 6 | 1-5 | 0 |
| No bugs | 5 | 1-4 | 0 |
| No trivial mistakes | 5 | 1-4 | 0 |
| Cleanliness | 6 | 1-5 | 0 |
| Readability | 6 | 1-5 | 0 |
