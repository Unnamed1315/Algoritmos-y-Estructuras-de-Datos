Nota importante: Usar ! para indices en lugar de puntos. Es verdad que en el práctico sale con puntos, pero la notación preferida por el profesor son los "!", esto no lo supe sino hasta que ya había terminado el práctico 🤷‍♂️

## Ejercicio 1
Dado el programa:
![[Pasted image 20240911114832.png]]
### a)¿Qué hace esta función? Escriba en lenguaje natural el problema que resuelve. 
Esta función suma los elementos de una lista de números.
### b) Escriba una especificación de la función con una expresión cuantificada. 
⟨Σi: 0 ≤ i < \#xs : xs!!i⟩
### c) Verifique que esta especificación vale para toda lista xs. 

#### Caso Base: (xs = \[ ])
sum. \[ ] =⟨Σi: 0 ≤ i < ==\#\[ ]== : \[ ]!!i⟩
={def. de #\[ ]}
sum. \[ ] =⟨Σi: ==0 ≤ i < 0== : \[ ]!!i⟩
={lógica}
sum. \[ ] = ===⟨Σi: False : \[ ]!!i⟩==
={A1 rango vacío}
sum. \[ ] = 0
={def de sum caso vacío}
0 = 0
={reflexividad}
True
#### Paso Inductivo: (Pruebo para una lista x▷xs)
HI: sum.xs = ⟨Σi: 0 ≤ i < \#xs : xs!!i⟩ 

sum.(x▷xs) = ⟨Σi: 0 ≤ i < ==\#(x▷xs)== : (x▷xs)!!i⟩
={def de length (x▷xs)}
sum.(x▷xs) = ==Σi: 0 ≤ i < \#xs +1: (x▷xs)!!i⟩==
={teorema e22b}
sum.(x▷xs) = xs!!0 + ⟨ Σ i : 0 ≤ i < \#xs : ==(x▷xs)!!(i+1)==⟩
={def de !!}
sum.(x▷xs) = ==xs!!0 + ⟨ Σ i : 0 ≤ i < \#xs : xs!!i⟩==
={HI}
sum.(x▷xs) = ==xs!!0== + sum.xs
={def de xs!!0}
==sum.(x▷xs)== = x + sum.xs
={def de sum caso recursivo}
==x + sum.xs = x + sum.xs==
={reflexividad}
True
### d) Derive la definición de la función a partir de su especificación. ¿Esta derivación es parecida a la demostración en el punto 1c?
Recordemos la especificación de sum:
```
sum.xs = ⟨Σi: 0 ≤ i < #xs : xs!!i⟩ 
```
Tenemos una expresión cuantificada, es decir que tenemos una cantidad indeterminada de términos operados entre sí. Es por esto que debemos definir sum como una función recursiva de la forma:
```
Caso Base:
sum.[] ≐ ???
Paso Inductivo:
sum.(x▷xs) ≐ ??? // Donde posiblemente aparezca el llamado recursivo "sum.xs"
```
#### Caso Base
==sum.\[ ]==
={especificación de sum}
⟨Σi: 0 ≤ i < \#\[ ] : \[ ]!!i⟩
={def. de #\[ ]}
⟨Σi: ==0 ≤ i < 0== : \[ ]!!i⟩
={lógica}
 ===⟨Σi: False : \[ ]!!i⟩==
={A1 rango vacío}
 0
#### Paso Inductivo
HI: sum.xs = ⟨Σi: 0 ≤ i < \#xs : xs!!i⟩

sum.(x▷xs)
={especificación de sum}
⟨Σi: 0 ≤ i < ==\#(x▷xs)== : (x▷xs)!!i⟩
={def de length (x▷xs)}
⟨Σi: 0 ≤ i < \#xs + 1 : (x▷xs)!!i⟩
={teorema e22b+def de length con i=0}
x + ⟨ Σ i : 0 ≤ i < \#xs : ==(x▷xs)!!(i+1)==⟩
={def de length}
x + ==⟨ Σ i : 0 ≤ i < \#xs : xs!!i⟩==
={HI}
x + sum.xs


Resultado final:
```
sum:: [Num] -> Num
sum.[] ≐ 0
sum.(x▷xs) ≐ x + sum xs
```

Si, la derivación es muy similar.
## Ejercicio 2
A partir de las siguientes especificaciones, describir en lenguaje natural qué describe la expresión, dar el tipo de cada función y derivar una solución algorítmica para cada caso.
### a) sum_cuad.xs = ⟨ Σi : 0≤i<\#xs : xs.i\∗xs.i⟩ 
Esta función recibe una lista de números y devuelve la sumatoria de sus cuadrados.
#### Derivación
```
Caso Base:
sum_cuad.[] ≐ ???
Paso Inductivo
sum_cuad.(x▷xs) ≐ ??? // Sabemos que debe incluir la llamada recursiva sum_cuad.xs
```
**Caso Base**
sum_cuadr.\[ ]
={especificación de sum_cuadr}
⟨ Σi : 0 ≤ i< \#\[ ] : \[ ].i\*\[ ].i⟩
={def de \#}
⟨ Σi : 0 ≤ i< 0 : \[ ].i\*\[ ].i⟩
={lógica}
⟨ Σi : False : \[ ].i\*\[ ].i⟩
={Rango vacío}
0
**Paso Inductivo**
**H.I.:** sum_cuad.xs =  Σi : 0≤i<\#xs : xs.i\∗xs.i⟩ 
sum_cuad.(x▷xs)
={especificación de sum_cuadr}
⟨Σi : 0≤i<==\#(x▷xs)== : (x▷xs).i\∗(x▷xs).i⟩ 
={def de length}
==⟨Σi : 0≤i<\#xs +1 : (x▷xs).i\∗(x▷xs).i⟩==
={teorema e22b}
(x\*x) + ⟨Σi : 0≤i<\#xs : ==(x▷xs).(i+1)==\∗==(x▷xs).(i+1)==⟩
={def length x2}
(x\*x) + ==⟨Σi : 0≤i<\#xs : xs.i\∗xs.i⟩==
={H.I.}
(x\*x) + sum_cuad.xs
Resultado final:
```
sum_cuad:: [Int] -> Int
sum_cuad.[] ≐ 0
sum_cuad.(x▷xs)  ≐ (x\*x) + sum_cuad.xs
```
### b) iga.e.xs = ⟨∀i : 0 ≤ i < \#xs : xs.i = e⟩ 
Esta función indica si todos los elementos de una lista xs son iguales a una variable e.
#### Derivación
```
Caso base:
iga.e.[] ≐ ???
Paso inductivo:
iga.e.(x▷xs) ≐ ??? (seguramente va a aparecer la llamda recursiva "iga.e.xs")
```
**Caso Base**
==iga.e.\[ ]==
={especificación de iga}
⟨ ∀i: 0 ≤ i < ==\#\[ ]== : \[ ]!i = e ⟩
={definición de #}
⟨ ∀i: ==0 ≤ i < 0==: \[ ]!i = e ⟩
={lógica}
==⟨ ∀i: False: \[ ]!i = e ⟩==
={rango vacío}
True

**Paso Inductivo**
HI: iga.e.xs = ⟨ ∀i: 0 ≤ i < \#xs : xs!i = e ⟩

==iga.e.(x▷xs)==
={especificación}
⟨ ∀i: 0 ≤ i < ==\#(x▷xs)== : (x▷xs)!i = e ⟩
={definición de #}
==⟨ ∀i: 0 ≤ i < \#xs +1 : (x▷xs)!i = e ⟩==
={teorema e22b}
(x=e) ∧  ==⟨ ∀i: 0 ≤ i < \#xs : (x▷xs)!(i+1) = e ⟩==
={H.I.}
(x=e) ∧  iga.e.xs

Resultado final:
```
iga:: Int -> [Int] -> Bool
iga.e.[ ] ≐ True
iga.e.(x▷xs) ≐ (x=e) ∧ iga.e.xs
```
### c) exp.x.n = x^n 
Esta función toma un número x y lo multiplica n veces por sí mismo.

La especificación es problemática. Asi que asumo:
exp.x.n = x^n = ⟨ Πi : 0 ≤ i < n : x⟩
#### Derivación
```
Caso base:
exp.x.0 ≐ ???
Paso inductivo:
exp.x.n ≐ ???
```
**Caso Base**
==exp.x.0==
={especificación de exp}
⟨ Πi : ==0 ≤ i < 0== : x⟩
={lógica}
==⟨ Πi : False : x⟩==
={Rango vacío}
1
**Paso Inductivo**
HI:  exp.x.n = x^n= ⟨ Πi : 0 ≤ i < n : x⟩

==exp.x.(n+1)==
={especificación de n}
==⟨ Πi : 0 ≤ i < n+1 : x⟩==
={teorema e22a}
x \* ==⟨ Πi : 0 ≤ i < n : x⟩ ==
={H.I.}
x \* exp.x.n

Resultado final:
```
exp:: Int -> Int -> Int
exp.x.0 ≐ 1
exp.x.(n+1) ≐ x * exp.x.n
```
### d) sum_par.n = ⟨ Σi : 0≤i≤n∧par.i : i⟩ 
donde par.i = i mod 2 = 0. 
Esta función toma un número n y suma los números pares entre 0 y el mismo número.
#### Derivación

```
Caso Base
sum_par.0=???
Paso Inductivo
sum_par.n=???
```
**Caso Base**
==sum_par.0==
={esp de sum_par.0}
⟨ Σi : ==0≤i≤0==∧par.i : i⟩
={antisimetria}
⟨ Σi : ==i=0 ∧ par.i== : i⟩
={evalúo los elementos del rango en el término}
0
**Paso Inductivo**
**H.I.:** sum_par.n = ⟨ Σi : 0≤i≤n∧par.i : i⟩ 

sum_par.(n+1)
={especificación de sum_par}
⟨ Σi : 0≤ i≤ n+1 ∧ par.i : i⟩ 
={lógica}
⟨ Σi : ==(0≤ i ≤ n ∨ i = n+1) ∧ par.i== : i⟩ 
={distributividad de ∧ con ∨}
==⟨ Σi : ((0≤ i ≤ n) ∧ par.i) ∨ ((i = n+1)∧ par.i ) : i⟩ ==
={partición de rango}
==⟨ Σi : (0≤ i ≤ n) ∧ par.i: i⟩== + ⟨ Σi : (i = n+1)∧ par.i : i⟩
={H.I.}
sum_par.n +⟨ Σi : (i = n+1)∧ par.i : i⟩
={rango unitario y condición}
sum_par.(n+1)+( par.(n+1) → (n+1)
			□ ¬par.(n+1) → 0
			)

Resultado final:
```
par:: Int -> Bool
par.i = i mod 2 = 0

sum_par:: Int -> Int
sum_par.0 ≐ 0
sum_par.(n+1) ≐ ( par.(n+1) → sum_par.n + (n+1)
				□ ¬par.(n+1) → sum_par.n
				)
```
### e) cuantos.p.xs = ⟨N i : 0 ≤ i < \#xs : p.(xs.i)⟩
cuenta cuantos elementos de la lista xs cumplen con el predicado p
#### Derivación
```
Caso Base:
cuantos.p.[] ≐ ???
Caso Inductivo:
cuantos.p.(x▷xs) ≐ ???
```
**Caso Base**
==cuantos.p.\[ ]==
={especificación de cuantos.p.\[ ]}
⟨N i : 0 ≤ i < ==\#\[ ]== : p.(\[ ]!i)⟩
={def de \#}
⟨N i : ==0 ≤ i < 0== : p.(\[ ]!i)⟩
={lógica}
==⟨N i : False : p.(\[ ]!i)⟩==
={rango vacío}
0

**Paso Inductivo**
**H.I.:** cuantos.p.xs = ⟨N i : 0 ≤ i < \#xs : p.(xs!i)⟩

cuantos.p.(x▷xs)
={especificación de cuantos.p.(x▷xs)}
⟨N i : 0 ≤ i < ==\#(x▷xs)== : p.((x▷xs)!i)⟩
={def de #}
⟨N i : ==0 ≤ i < \#xs +1==: p.((x▷xs)!i)⟩
={lógica}
==⟨N i : (1 ≤ i < \#xs+1) ∨ (i=0): p.((x▷xs)!i)⟩==
={partición de rango}
==⟨N i : 1 ≤ i < \#xs+1: p.((x▷xs)!i)⟩== + ⟨N i : i=0: p.((x▷xs)!i)⟩
={cambio de variable i→i+1}
⟨N i : 1 ≤ i +1 < \#xs+1: p.(==(x▷xs)!(i+1)==)⟩ + ⟨N i : i=0: p.((x▷xs)!i)⟩
={def de \#}
⟨N i : ==1 ≤ i +1 < \#xs+1==: p.(xs.i)⟩ + ⟨N i : i=0: p.((x▷xs)!i)⟩
={algebra}
==⟨N i : 0 ≤ i < \#xs: p.(xs!i)⟩== + ⟨N i : i=0: p.((x▷xs)!i)⟩
={H.I.}
cuantos.p.xs + ==⟨N i : i=0: p.((x▷xs)!i)⟩==
={TN4 rango unitario }
cuantos.p.xs + ( p.x → 1 
			□ ¬p.x) -> 0
		    )
Resultado final:
```
cuantos:: (a->Bool)->[a]-> Int
cuantos.p.[] ≐ 0
cuantos.p.(x▷xs) ≐  ( p.x → 1 + cuantos.p.xs
					□ ¬p.x → cuantos.p.xs
					)
```




## Ejercicio 3
No

## Laboratorio 1
Definí en Haskell las funciones derivadas en el ejercicio 2 y evalúa las mismas en los ejemplos utilizados en el ejercicio 3.
### a)
```
sum_cuad:: [Int] -> Int
sum_cuad [] = 0
sum_cuad (x:xs)  = (x*x) + sum_cuad xs
```
### b)
```
iga:: Int -> [Int] -> Bool
iga e [ ] = True
iga e (x:xs) = (x==e) && iga e xs
```
### c)
```
exp':: Int -> Int -> Int
exp' x 0 = 1
exp' x n = x * (exp' x (n-1))
```
### d)
```
sum_par:: Int -> Int
sum_par 0 = 0
sum_par n   | (mod n 2 == 0) = sum_par (n-1) + n
            | (mod n 2 /= 0) = sum_par (n-1)
```
### e)
```
cuantos:: (a->Bool)->[a]-> Int
cuantos p [] = 0
cuantos p (x:xs)| p x = 1 + cuantos p xs
                | not (p x) = cuantos p xs
```
## Ejercicio 4
Derivá las siguientes funciones.
### 1) f: Num→Nat→Num computa la suma de potencias de un número, esto es:
$$f.x.n=\langle Σ i: 0 \leq i < n : x^{i}\rangle$$
f suma las potencias de un número
#### Derivación
Necesitamos hacer inducción en n. Mi programa va a tener la forma:
```
Caso base:
sum_pot.x.0 ≐ ???
Caso recursivo:
sum_pot.x.(n+1) ≐ ???? (en términos de sum_pot.x.n)
```
##### Caso Base
==sum_pot.x.0==
={especificación}
⟨ Σi: ==0≤ i < 0== : x\^i ⟩
={lógica}
⟨ Σi: False : x\^i ⟩
={rango vacío}
0
##### Paso inductivo
Hipótesis Inductiva: `sum_pot.x.n = ⟨ Σi: 0≤ i < n : x^i ⟩`

==sum_pot.x.(n+1)==
={especificación}
==⟨ Σi: 0≤ i < (n+1) : x\^i ⟩==`
={teorema e22a}
==⟨Σ i : 0 ≤ i < n+ : x^i⟩== +x\^n
={hipotesis inductiva}
sum_pot.x.n +==x\^n==
={x\^n no es programable por lo tanto introduzco modularización exp.x.n=x^n}
sum_pot.x.n +exp.x.n

##### Derivación de exp
Especificación: exp.x.n = x^n = ⟨ Πi : 0 ≤ i < n : x⟩
###### Caso Base
==exp.x.0==
={especificación de exp}
⟨ Πi : ==0 ≤ i < 0== : x⟩
={lógica}
==⟨ Πi : False : x⟩==
={Rango vacío}
1
###### Paso Inductivo
HI:  exp.x.n = x^n= ⟨ Πi : 0 ≤ i < n : x⟩

==exp.x.(n+1)==
={especificación de n}
==⟨ Πi : 0 ≤ i < n+1 : x⟩==
={teorema e22a}
x \* ==⟨ Πi : 0 ≤ i < n : x⟩ ==
={H.I.}
x \* exp.x.n

#### Resultado Final
```
sum_pot.x.0 ≐ 0
sum_pot.x.(n+1) ≐ sum_pot.x.n + exp.x.n

exp:: Int -> Int -> Int
exp.x.0 ≐ 1
exp.x.(n+1) ≐ x * exp.x.n
```
### b) pi : Nat → Num computa la aproximación del número π
$pi.n = 4 \cdot \langle Σ i : 0 \leq i < n : (-1)^{i} / (2 \cdot i + 1)\rangle$

Ayuda: Modularizar dos veces. La segunda con exp del ejercicio [[Práctico 2#c) exp.x.n = x n]]

pi.n
={especificación de pi}
4 \* ⟨ Σ i :0 ≤ i < n : (-1)^i / (2 \* i +1)⟩
={introduzco modularización con pi2.n =⟨ Σ i :0 ≤ i < n : (-1)^i / (2 \* i +1)⟩}
4 * pi2.n 

Termina la derivación de pi ya que obtuve una expresión programable.
#### Resultado Parcial
```
pi : Nat → Num
pi.n ≐ 4 * pi2.n
```
#### Derivación pi2
pi2.n =  ⟨ Σ i :0 ≤ i < n : (-1)^i / (2 \* i +1)⟩

Hago inducción sobre n.
##### Caso Base
pi2.0
={especificación}
⟨ Σ i : ==0 ≤ i < 0== : (-1)^i / (2 \* i +1)⟩
={lógica}
⟨ Σ i : False : (-1)^i / (2 \* i +1)⟩
={rango vacío}
0
##### Paso inductivo
HI: pi2.n =  ⟨ Σ i :0 ≤ i < n : (-1)^i / (2 \* i +1)⟩

pi2.(n+1)
={especificación}
⟨ Σ i :==0 ≤ i < (n+1)== : (-1)^i / (2 \* i +1)⟩
={separación de término ==0 ≤ i < (n+1)== ≡ ==i=n+1 ∨ 0≤ i < n==}
⟨ Σ i :==i=n+1 ∨ 0≤ i < n== : (-1)^i / (2 \* i +1)⟩
={partición de rango}
⟨ Σ i : i=n+1 : (-1)^i / (2 \* i +1)⟩ + ==⟨ Σ i : 0≤ i < n : (-1)^i / (2 \* i +1)⟩==
={hipotesis inductiva}
⟨ Σ i : i=n+1 : ==(-1)^i== / (2 \* i +1)⟩ + pi2.n
={introduzco modularización (-1)\^i = exp.(-1).i }
⟨ Σ i : i=n+1 : exp.(-1).i / (2 \* i +1)⟩ + pi2.n
={rango unitario}
exp.(-1).(n+1) / (2 \* (n+1) +1) + pi2.n

Tengo una expresión programable. Voy a obviar la derivación de exp al haber sido hecha con anterioridad.
#### Resultado Final
```
pi : Nat → Num
pi.n ≐ 4 * pi2.n

pi2: Nat → Num
pi2 0 = 0
pi2 (n+1) = exp.(-1).(n+1) / (2 * (n+1) + 1) + pi2.n

exp:: Int -> Int -> Int
exp.x.0 ≐ 1
exp.x.(n+1) ≐ x * exp.x.n
```
### c)  f : Nat → Nat computa el cubo de un número natural x utilizando únicamente sumas. La especificación es muy simple: f.x = x\^3 .
Ayuda: usar inducción y modularización dos veces.

#### Derivación
Hago inducción sobre x

##### Caso Base
cubo.0
={especificación}
0\^3
={aritmética}
0

##### Paso Inductivo:
HI: cubo.x = x\^3

cubo.(x+1)
={especificación}
(x+1)\^3
={aritmética binomio cubo}
==(x+1) \* (x+1)== \* (x+1)
={aritmética}
==(x^2 + 2 x + 1) \* (x+1)==
={aritmética}
x^3 + x^2 +  2x + x^2 + x + 1
={aritmética}
==x^3== + 3 \* x^2 + 3\* x + 1
={hipotesis inductiva}
cubo.x + 3 \* ==x^2== + 3\* x + 1
={introduzco modularización cuadrado.x = x^2}
cubo.x + ==3 \* cuadrado.x== + 3\* x + 1
={def de 3\*x}
cubo.x + cuadrado.x + cuadrado.x + cuadrado.x + ==2\* x== + 1
={def de 3\*x}
cubo.x + cuadrado.x + cuadrado.x + cuadrado.x + x + x +x + 1

Llegue a una expresión programable
#### Resultado Parcial
```
cubo: Nat → Nat
cubo.0 = 0
cubo.(x+1) = cubo.x + cuadrado.x + cuadrado.x + cuadrado.x + x + x +x + 1
```
#### Derivación cuadrado.x
cuadrado.x = x\^2
##### Caso Base
cuadrado.0
={especificación}
0\^2
={aritmética}
0
##### Paso Inductivo
HI: cuadrado.x = x\^2

==cuadrado.(x+1)==
={especificación}
==(x+1)\^2==
={aritmética}
==(x+1)\*(x+1)==
={aritmética}
==x\^2== + 2 \* x + 1
={hipotesis inductiva}
cuadrado.x + ==2 * x== + 1
={def de \*}
cuadrado.x + x + x + 1

Llegue a una expresión programable
#### Resultado Final
```
cubo: Nat → Nat
cubo.0 = 0
cubo.(x+1) = cubo.x + cuadrado.x + cuadrado.x + cuadrado.x + x + x +x + 1

cuadrado: Nat → Nat
cuadrado.0 = 0
cuadrado.(x+1) = cuadrado.x + x + x + 1
```
### f.xs = ⟨ ∃i : 0 < i ≤ \#xs : ⟨ Πj : 0 ≤ j <  \#(xs↓i): (xs ↓i)!j ⟩ = xs!(i-1) ⟩















