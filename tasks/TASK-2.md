# STEAM Scholarship Challenge | TecDroid 3354
## Task  #2: Static Calculator

### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Trivial |
| Max Worth | 8 points |
| Language Bonus | None |

In this task, you must create a program that receives two floating-point numbers `a` and `b` from the user. The program must then output the value for adding, subtracting, multiplying and dividing them together.

> [!IMPORTANT]
If $b=0$ then your division output must be `undefined`.

### Samples
| Input | Output |
| ---- | ---- |
| <br>`1 2`<br> | `1 + 2 = 3`<br>`1 - 2 = -1`<br>`1 * 2 = 2`<br>`1 / 2 = 0.5` |
| <br>`-5 6`<br> | `-5 + 6 = 1`<br>`-5 - 6 = -11`<br>`-5 * 6 = -30`<br>`-5 / 6 = -0.8333333`<br> |
| `3 0` | `3 + 0 = 3`<br>`3 - 0 = 3`<br>`3 * 0 = 0`<br>`3 / 0 = undefined` |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Number `a` | $2.2250738585072014E-308 < a < 1.79769313486231570e+308$ |
| Number `b` | $2.2250738585072014E-308 < b < 1.79769313486231570e+308$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 1 | 1 | 0 |
| Efficiency | 1 | 1 | 0 |
| No bugs | 1 | 1 | 0 |
| No trivial mistakes | 1 | 1 | 0 |
| Cleanliness | 2 | 1 | 0 |
| Readability | 2 | 1 | 0 |
