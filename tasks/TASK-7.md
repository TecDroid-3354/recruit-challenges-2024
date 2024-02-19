# STEAM Scholarship Challenge | TecDroid 3354
## Task  #7: Vector Magic
### Metadata
| Spec | Value |
| ---- | ---- |
| Difficulty | Medium |
| Max Worth | 18 points |
| Language Bonus | C (+2 pts), C++(+2pts), Kotlin (+1 pts) |

You will be given an integer number `n`, followed by `n` sets of 4 values each. Each of these values will represent a vector in 3D space.

Now, in linear algebra, there are three main ways to define a vector:
#### From Cartesian Coordinates
Built from 3 values $x$, $y$ and $z$

![Cartesian Coordinates Example](https://upload.wikimedia.org/wikipedia/commons/thumb/6/69/Coord_system_CA_0.svg/240px-Coord_system_CA_0.svg.png)

#### From Cylindrical Coordinates
Built from one distance $\rho$, one angle $\varphi$, and one height $z$ 

![Cylindrical Coordinates Example](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0e/Coord_system_CY_1.svg/240px-Coord_system_CY_1.svg.png)

When the reference plane is the $xy$-plane, a cylindrical vector may be converted to Cartesian coordinates through the following formulae:
$x = \rho\cos(\varphi)$

$y=\rho\cos(\varphi)$

$z=z$

#### From Cylindrical Coordinates
Built from two angles $\theta, \varphi$ and one distance $r$

![Spherical Coordinates Example](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f9/Kugelkoord-lokb-e.svg/240px-Kugelkoord-lokb-e.svg.png)
When using mathematical (not physical) conventions, one may convert a spherical vector to Cartesian coordinates through the following formulae:

$x = r\sin(\theta)\cos(\varphi)$

$y = r\sin(\theta)\sin(\varphi)$

$z=r\cos(\theta)$

You can also obtain spherical coordinates from Cartesian coordinates through:

$r = \sqrt{x^{2} + y^{2} + z^{2}}$

$\theta = \arccos{\frac{z}{r}}$

$\varphi = \text{sgn}(y)\arccos{\frac{x}{\sqrt{x^{2} + y^{2}}}}$


Now, armed with this knowledge, for each of the 4 values you receive, **one will be a character** and **the rest will be floating point values**.
- If the character is `'C'`, then you will receive Cartesian coordinates in the order $x, y, z$
- If the character is `'c'`, then you will receive Cylindrical coordinates in the order $\rho, \varphi, z$
- If the character is `'s'`, then you will receive Spherical coordinates in the order $r, \theta, \varphi$

### Examples
- `'C' 3 4 5` is the vector $<3, 4, 5>$ in Cartesian coordinates
- `'c' 6 3.1415926 5` is the vector $<6, \pi^{R}, 5>$ in cylindrical coordinates
	- It is also $<-6, 0, 5>$ in Cartesian coordinates
- `'s' 10 6 7` is the vector $<10, 6^{R}, 7^{R}>$ in spherical coordinates
	- It is also $<1.04, 0.13, 9.95>$ in Cartesian coordinates

What you must do is parse all of the given vectors, turn them into Cartesian vectors and sum them. Finally, you must output the resulting value **in spherical coordinates** in the order $r, \theta, \phi$

> [!NOTE]
> The sum of two Cartesian vectors is simple. Just sum their components.
> $<1, 4, 6> + <7, -2, 4> = <8, 2, 10>$

> [!WARNING]
> All angle values are in radians

### Samples
| Input | Output |
| ---- | ---- |
| `2`<br>`'C' 1 4 6`<br>`'C' 7 -2 4` | `12.961 0.6896 0.245` |
| `4`<br>`'C' 5 9 2.2`<br>`'s' 10, 1.5707 0.7853`<br>`'c' 5 0.13 2`<br>`'s' 1 1 1` | `25.137 1.381 0.7837` |

### Input Specifications
| Input Type or Name | Spec |
| ---- | ---- |
| Number `n` | $0 < n < 10^6$ |
| Vector components `v` | $-2147483648 < v < 2147483647$ |

### Rubric
| Criterion | Excellent | Expected | Lacking |
| ---- | ---- | ---- | ---- |
| Output OK | 2 | 1 | 0 |
| Efficiency | 4 | 1-3 | 0 |
| No bugs | 2 | 1 | 0 |
| No trivial mistakes | 3 | 1-2 | 0 |
| Cleanliness | 3 | 1 - 2 | 0 |
| Readability | 4 | 1 - 2 | 0 |
