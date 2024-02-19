# STEAM Scholarship Challenge | TecDroid 3354
## Task  #3: Quadratic Formula
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Low |
| Max Worth | 9 points |
| Language Bonus | None |

In this task, you must create a program that receives three floating point numbers $a$, $b$ and $c$. These numbers are the coefficients in the formula: $ax^2 + bx + c$

If you're unfamiliar with this equation, one can solve for $x$ using the following formula: $\frac{-b \pm \sqrt{b^{2}-4ac}}{2a}$. You must create a program that solves for $x$ in $ax^2 + bx + c$ using this, or any other method.

You must include the value of $x_1$ and $x_2$ if they exist as well as the solution count.

Your output must be in the following format -> **One line containing:**
- Solution count
- Solution $x_{1}$ if it exists
- Solution $x_{2}$ if it exists
- If $a=0$, only write `undefined`

> [!IMPORTANT]
The quadratic formula may have $0$, $1$ or $2$ real solutions. Keep in mind that:
>
>- $b^{2} - 4ac > 0 \iff 2$ real solutions
>- $b^{2} - 4ac = 0 \iff 1$ real solution
>- $b^{2} - 4ac < 0 \iff 0$ real solutions

> [!TIP]
**Bonus (+1 pt)**
>
If $a = 0$ then solve for the only root in $bx + c$.


### Samples
| Input | Output |
| ---- | ---- |
| `1 5 6` | `2 -2 -3`<br> |
| `-1 10 -25` | `1 5`<br> |
| `1 1 3` | `0` |
| **No Bonus**<br>`0 6 3` | `Undefined` |
| **W/Bonus**<br>`0 6 3` | `1 -0.5` |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Number $a$ | $-10^{17} < a < 10^{17}, a \in \mathbb{R}$ |
| Number $b$ | $-10^{17} < b < 10^{17}, b \in \mathbb{R}$ |
| Number $c$ | $-10^{17} < c < 10^{17}, c \in \mathbb{R}$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 1 | 1 | 0 |
| Efficiency | 1 | 1 | 0 |
| No bugs | 1 | 1 | 0 |
| No trivial mistakes | 2 | 1 | 0 |
| Cleanliness | 2 | 1 | 0 |
| Readability | 2 | 1 | 0 |
