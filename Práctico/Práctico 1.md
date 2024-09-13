## Ejercicio 0
Demostrá algunos de los siguientes teoremas utilizando los axiomas y teoremas del calculo proposicional listados en el digesto (y cualquier otro teorema que se te ocurra y demuestres, claro). Es importante que utilices la notación utilizada en clases
### a) Idempotencia de la conjunción: p ∧ p ≡ p
==p ∧ p== ≡ p
≡ {A6 Regla Dorada}
p ≡ p ≡ ==p ∨ p== ≡ p
≡ {A9 Idempotencia Disyunción}
p ≡ p ≡ ==p ≡ p==
≡ {Metateorema neutro equivalencia por True}
p ≡ p ≡ ==True==
≡ {A3 Neutro Equivalencia}
==p ≡ p== 
≡ {T1 Reflexividad Equivalencia}
True
### b) Neutro de la conjunción: p ∧ True ≡ p.
==p ∧ True== ≡ p
≡ {A6 Regla Dorada}
==p ≡ True== ≡ p ∨ True ==≡ p==
≡ {Metateorema neutro equivalencia por True}
==True== ≡ p ∨ True
≡ {A3 Neutro Equivalencia}
==p ∨ True==
≡ {T7 Elemento Absorbente de la Disyunción}
True
### c) Absorción de la conjunción: p ∧ (p ∨ q) ≡ p
==p ∧ (p ∨ q)== ≡ p
≡ {A6 Regla Dorada}
p ≡ p ∨ q ≡ ==p ∨ p== ∨ q ≡ p
≡ {A9 Idempotencia Disyunción}
==p ≡ p ∨ q ≡ p ∨ q ≡ p==
≡ {A1 y A2 Asociatividad y Conmutatividad Equivalencia}
==(p ≡ p ∨ q) ≡ (p ≡ p ∨ q)==
≡ {T1 Reflexividad Equivalencia}
True
### d) Absorción de la disyunción: p ∨ (p ∧ q) ≡ p
p ∨ (==p ∧ q==) ≡ p
≡ {A6 Regla Dorada}
==p ∨ (p ≡ q ≡ p ∨ q)== ≡ p
≡ {A5 Distributividad disyunción con equivalencia}
==p ∨ p== ≡ p ∨ q ≡ ==p ∨ p== ∨ q ≡ p
≡ {A9 Idempotencia Disyunción}\
==p ≡ p ∨ q ≡ p ∨ q ≡ p==
≡ {A1 y A2 Asociatividad y Conmutatividad Equivalencia}
==(p ≡ p ∨ q) ≡ (p ≡ p ∨ q)==
≡ {T1 Reflexividad Equivalencia}
True
### e) Debilitamiento para ∧: p∧q ⇒ p
==p ∧ q ⇒ p==
≡ {A11 Definición de Implicación}
==(p ∧ q) ∨ p== ≡ p
≡ {Absorción de la disyunción}
==p ≡ p==
≡ {T1 Reflexividad Equivalencia}
True
### f) Debilitamiento para ∨: p ⇒ p∨q
==p ⇒ p ∨ q==
≡ {A11 Definición de Implicación}
==p ∨ (p ∨ q)== ≡ (p ∨ q)
≡ {Asociatividad ∧ }
==(p ∨ p)== ∨ q ≡ (p ∨ q)
≡ {A9 Idempotencia Disyunción}
==p ∨ q ≡ p ∨ q==
≡ {T1 Reflexividad Equivalencia}
True
### g) Caracterización de ⇒ : p ⇒ q ≡ ¬p∨q
==p ⇒ q== ≡ ¬p ∨ q
≡ {A11 Definición de Implicación}
==p ∨ q== ≡ q ≡ ==¬p ∨ q==
≡ { Conmutatividad ∨}
==q ∨ p ≡ q ≡ q ∨ ¬p==
≡ { Conmutatividad ≡ }
==q ∨ p  ≡ q ∨ ¬p ≡ q==
≡ {Metateorema - Teorema Estrella por true}
True
### h) Contrarrecíproca: p ⇒ q ≡ ¬q ⇒ ¬p
p ⇒ q ≡ ==¬q ⇒ ¬p==
≡ {Definición de de ⇒ }
p ⇒ q ≡ ==¬q  ∨ ¬p ≡ ¬p== 
≡ {Teorema Estrella}
p ⇒ q ≡ ==q  ∨ ¬p==
≡ {Conmutatividad ∧ }
p ⇒ q ≡ ==¬p ∨ q==
≡ {Caracterización de ⇒}
==p ⇒ q ≡ p ⇒ q==
≡ {T1 Reflexividad Equivalencia}
True
### i) De Morgan para ∧: ¬(p∧q) ≡ ¬p∨¬q
¬(==p ∧ q==) ≡ ¬p ∨ ¬q
≡ {A6 Regla Dorada}
¬(p ≡ q ≡ p ∨ q) ≡ ¬p ∨ ¬q
≡ {Definición de negación}
==¬p== ≡ q ≡ p ∨ q ≡ ==¬p ∨ ¬q==
≡ {Teorema Estrella}
==q ≡ p ∨ q ≡ ¬p ∨ q==
≡ {Metateorema Teorema Estrella por True}
True
### j) De Morgan para ∨: ¬(p∨q) ≡ ¬p∧¬q
==¬(p ∨ q)== ≡ ¬p ∧ ¬q
≡ {Teorema Estrella}
==¬(p∨¬q ≡p)== ≡ ¬p ∧ ¬q
≡ {Definición de negación}
p ∨ ¬q ≡ ¬p ≡ ==¬p ∧ ¬q==
≡ {Regla Dorada}
p ∨ ¬q ≡ ==¬p ≡ ¬p== ≡ ¬q ≡ ¬p ∨ ¬q
≡ {Reflexividad Equivalencia}
p ∨ ¬q ≡ ==True== ≡ ¬q ≡ ¬p ∨ ¬q
≡ {Neutro equivalencia}
==p ∨ ¬q ≡ ¬q== ≡ ¬p ∨ ¬q
≡ {Teorema Estrella}
==¬p ∨ ¬q ≡ ¬p ∨ ¬q==
≡ {Reflexividad Equivalencia}
True
## Ejercicio 1
Teniendo en cuenta que xs es una lista de Figuras como describimos anteriormente, describí el significado de las siguientes expresiones utilizando el lenguaje natural.
![[Pasted image 20240820190241.png]]
a) Todos los elemento de xs son rojos
b) Existe un rombo en xs
c) Nada, a lo sumo podemos asumir que xs es una lista no vacía. Veamos que i puede ser igual a j.
d) Existen dos elementos iguales en xs.
e) La sumatoria de los tamaños de los elementos de xs
## Ejercicio 2
Escribí fórmulas para las siguientes expresiones en lenguaje natural
### a) Todas las figuras de xs son amarillas. 
⟨∀i: 0 ≤ i < # xs : ⟨ ∀j: (0 ≤ i < # xs) ∧ i ≠ j : amarillo.(xs.i) ⟩⟩
### b) La suma de los tamaños de todas las figuras de xs es mayor a 10. 
 ⟨Σi: 0 ≤ i < # xs: tam.(xs.i)⟩ > 10
### c) Ninguna figura de xs tiene tamaño menor a 7.
⟨∀i: 0 ≤ i < # xs : tam ≥ 7⟩ 
Tambien se puede usar con un cuantificador existencial y usando la negación.
## Ejercicio 3
Para cada una de las siguientes funciones escribí una expresión que las describa formalmente. Por otro lado, escribí un programa recursivo que compute la función. 
a) paratodo :: [Bool]-> Bool, que verifica que todos los elementos de una lista sean True.
⟨ ∀i: 0 ≤ i < # xs : xs.i = True⟩

```
paratodo :: [Bool]-> Bool
paratodo []  = True
paratodo (x:xs) =  x  && paratodo xs
```

b) sumatoria :: [Int]-> Int, que calcula la suma de todos los elementos de una lista de enteros. 
⟨ Σi: 0 ≤ i < # xs : xs.i⟩
```
sumatoria:: [Int] -> Int
sumatoria [ ] = 0
sumatoria (x:xs) = x + sumatoria xs
```

c) productoria :: [Int]-> Int, que calcula el producto de todos los elementos de la lista de enteros. 
⟨ Πi: 1 ≤ i < # xs : xs.i⟩
```
productoria:: [Int] -> Int
productoria [ ] = 1
productoria (x:xs) = x * sumatoria xs
```
d) factorial :: Int-> Int, que toma un número n y calcula n!. 
⟨ Πi: 1 ≤ i < n : i⟩
```
factorial:: Int -> Int
factorial 1 = 1
factorial x = x * factorial (x-1)
```
==e) Utiliza la función sumatoria para definir, promedio :: [Int]-> Int, que toma una lista de números no vacía y calcula el valor promedio (truncado, usando división entera). ==
div (⟨ Σi: 0 ≤ i < # xs : xs.i⟩) (# xs)
```
promedio:: [Int] -> Int
promedio xs = div (sumatoria xs) (length xs)
```
## Ejercicio 4
Para cada una de las siguientes fórmulas, describí su significado utilizando el lenguaje natural.
### a) ⟨ ∀i : 0 ≤ i < \#xs : xs.i > 0 ⟩
Todos los números de la lista xs son positivos
### b) ⟨ ∃i : ∀i : 0 ≤ i < \#xs : xs.i = x ⟩
En la lista xs existe el elemento x. o Hay un x en xs. x puede ser cualquier cosa, un número, una figura, una palabra, una letra, etc.
### c) ⟨ ∀i : 0 ≤ i < \#xs : ⟨ ∃j: 0 ≤ j < \#ys  : xs.i = ys.j ⟩ ⟩
Todo elemento en xs aparece al menos una vez en ys. O, todos los elementos de xs estan en ys.
### d) ⟨ ∀i : 0 ≤ i < \#xs - 1 : xs.i = xs. (i+1)⟩
Todos los elementos de xs son iguales. Que un elemento sea igual al siguiente, implica que todos los elementos son iguales si utilizamos inductividad. 
## Ejercicio 5
Para cada uno de los ítems del ejercicio anterior. evalúa la fórmula en las siguientes listas:
 a) xs = [-5,-3,4,8]
 b) xs = [11,2,5,8]
 Para el item b), considerar x=5. Para el ítem c), considerar ys = [2,-3,11,5,8]
### a.a)
⟨ ∀i : 0 ≤ i < ==\#xs== : xs.i > 0 ⟩
≡ {calculo el rango sabiendo que \#xs =4 }
⟨ ∀i : 0 ≤ i < 4 : xs.i > 0 ⟩
≡ { aplico el término a cada elemento del rango}
(==xs.0== > 0) ∧ (==xs.1== > 0) ∧ (==xs.2== > 0) ∧ (==xs.3== > 0)
≡ {evaluó las indexaciones con xs = [-5,-3,4,8]}
(==(-5) > 0==) ∧ (==(-3) > 0==) ∧ (==4 > 0==) ∧ (==8 > 0==)
≡ {evalúo las desigualdades}
False ∧  False ∧  True ∧  True
≡ {resuelvo las conjunciones} (tambien puedo hacer asociatividad y usar absorbente de ∧ )
False
### a.b)
⟨ ∀i : 0 ≤ i < ==\#xs== : xs.i > 0 ⟩
≡ {calculo el rango sabiendo que \#xs =4 }
⟨ ∀i : 0 ≤ i < 4 : xs.i > 0 ⟩
≡ { aplico el término a cada elemento del rango}
(==xs.0== > 0) ∧ (==xs.1== > 0) ∧ (==xs.2== > 0) ∧ (==xs.3== > 0)
≡ {evaluó las indexaciones con xs = [11,2,5,8]}
(11 > 0) ∧ (2 > 0) ∧ (5 > 0) ∧ (8 > 0)
≡ {evalúo las desigualdades}
True ∧  True ∧  True ∧  True
≡ {resuelvo las conjunciones} 
True
### b.a)
⟨ ∃i : ∀i : 0 ≤ i < ==\#xs== : xs.i = x ⟩
≡ {calculo el rango sabiendo que \#xs =4 }
⟨ ∃i : ∀i : 0 ≤ i < 4 : xs.i = x ⟩
≡ { aplico el término a cada elemento del rango}
(xs.0 = x) ∨ (xs.1 = x) ∨ (xs.2 = x) ∨ (xs.3 = x) 
≡ {evalúo las indexaciones con xs = [-5,-3,4,8]}
((-5) = x) ∨ ((-3) = x) ∨ (4 = x) ∨ (8 = x) 
≡ {considero x=5 segun enunciado}
((-5) = 5) ∨ ((-3) = 5) ∨ (4 = 5) ∨ (8 = 5) 
≡ {evalúo las igualdades}
False ∨  False ∨ False ∨  False
≡ {resuelvo las disyunciones}
False
### b.b)
⟨ ∃i : ∀i : 0 ≤ i < ==\#xs== : xs.i = x ⟩
≡ {calculo el rango sabiendo que \#xs =4 }
⟨ ∃i : ∀i : 0 ≤ i < 4 : xs.i = x ⟩
≡ { aplico el término a cada elemento del rango}
(xs.0 = x) ∨ (xs.1 = x) ∨ (xs.2 = x) ∨ (xs.3 = x) 
≡ {evalúo las indexaciones con xs = [11,2,5,8]}
(11 = x) ∨ (2 = x) ∨ (5 = x) ∨ (8 = x) 
≡ {considero x=5 segun enunciado}
(11 = 5) ∨ (2 = 5) ∨ (5 = 5) ∨ (8 = 5) 
≡ {evalúo las igualdades}
False ∨  False ∨ True ∨  False
≡ {resuelvo las disyunciones}
True
### c.a)
⟨ ∀i : 0 ≤ i < \#xs  ⟨ ∃j: 0 ≤ j < \#ys  : xs.i = ys.j ⟩ ⟩
≡ {calculo el rango sabiendo que \#xs =4 e \#ys=5}
⟨ ∀i : 0 ≤ i < 4  : ⟨ ∃j: 0 ≤ j < 5  : xs.i = ys.j ⟩ ⟩
≡ { aplico el término a cada elemento del rango}
⟨ ∃j: 0 ≤ j < 5  : xs.0 = ys.j ⟩ ∧  ⟨ ∃j: 0 ≤ j < 5  : xs.1 = ys.j ⟩ ∧  ⟨ ∃j: 0 ≤ j < 5  : xs.2 = ys.j ⟩ ∧  ⟨ ∃j: 0 ≤ j < 5  : xs.3 = ys.j ⟩
≡ {evalúo las indexaciones con xs = [-5,-3,4,8]}
⟨ ∃j: 0 ≤ j < 5  : (-5) = ys.j ⟩ ∧  
⟨ ∃j: 0 ≤ j < 5  : (-3) = ys.j ⟩ ∧  
⟨ ∃j: 0 ≤ j < 5  : 4 = ys.j ⟩ ∧ 
⟨ ∃j: 0 ≤ j < 5 : 8 = ys.j ⟩
≡ { aplico el término a cada elemento del rango}
( (-5) = ys.0) ∨  ((-5) = ys.1) ∨  ((-5) = ys.2) ∨  ((-5) = ys.3) ∨ ((-5) = ys.4) 
∧  
( (-3) = ys.0) ∨  ((-3) = ys.1) ∨  ((-3) = ys.2) ∨  ((-3) = ys.3) ∨ ((-3) = ys.4) 
∧  
( 4 = ys.0) ∨  (4 = ys.1) ∨  (4 = ys.2) ∨  (4 = ys.3) ∨  (4 = ys.4) 
∧ 
( 8 = ys.0) ∨  (8 = ys.1) ∨  (8 = ys.2) ∨  (8 = ys.3) ∨  (8 = ys.4) 
≡ {evalúo las indexaciones con ys = [2,−3,11,5,8]}
( (-5) = 2) ∨  ((-5) = (-3)) ∨  ((-5) = 11) ∨  ((-5) = 5) ∨ ((-5) = 8) 
∧  
( (-3) = 2) ∨  ((-3) = (-3)) ∨  ((-3) = 11) ∨  ((-3) = 5) ∨ ((-3) = 8) 
∧  
( 4 = 2) ∨  (4 = (-3)) ∨  (4 = 11) ∨  (4 = 5) ∨  (4 = 8) 
∧ 
( 8 = 2) ∨  (8 = (-3)) ∨  (8 = 11) ∨  (8 = 5) ∨  (8 = 8) 
≡ {evalúo las igualdades}
( False ∨ False ∨  False ∨  False ∨ False)
∧  
( (-3) = 2) ∨  ((-3) = (-3)) ∨  ((-3) = 11) ∨  ((-3) = 5) ∨ ((-3) = 8) 
∧  
( 4 = 2) ∨  (4 = (-3)) ∨  (4 = 11) ∨  (4 = 5) ∨  (4 = 8) 
∧ 
( 8 = 2) ∨  (8 = (-3)) ∨  (8 = 11) ∨  (8 = 5) ∨  (8 = 8) 
≡ {resuelvo las disyunciones}
False
∧  
( (-3) = 2) ∨  ((-3) = (-3)) ∨  ((-3) = 11) ∨  ((-3) = 5) ∨ ((-3) = 8) 
∧  
( 4 = 2) ∨  (4 = (-3)) ∨  (4 = 11) ∨  (4 = 5) ∨  (4 = 8) 
∧ 
( 8 = 2) ∨  (8 = (-3)) ∨  (8 = 11) ∨  (8 = 5) ∨  (8 = 8) 
≡ {Elemento absorbente de la disyunción}
False
### c.b)
⟨ ∀i : 0 ≤ i < \#xs  ⟨ ∃j: 0 ≤ j < \#ys  : xs.i = ys.j ⟩ ⟩
≡ {calculo el rango sabiendo que \#xs =4 e \#ys=5}
⟨ ∀i : 0 ≤ i < 4  : ⟨ ∃j: 0 ≤ j < 5  : xs.i = ys.j ⟩ ⟩
≡ { aplico el término a cada elemento del rango}
⟨ ∃j: 0 ≤ j < 5  : xs.0 = ys.j ⟩ ∧  ⟨ ∃j: 0 ≤ j < 5  : xs.1 = ys.j ⟩ ∧  ⟨ ∃j: 0 ≤ j < 5  : xs.2 = ys.j ⟩ ∧  ⟨ ∃j: 0 ≤ j < 5  : xs.3 = ys.j ⟩
≡ {evalúo las indexaciones con xs = [11,2,5,8]}
⟨ ∃j: 0 ≤ j < 5 : 11 = ys.j ⟩ ∧  
⟨ ∃j: 0 ≤ j < 5 : 2 = ys.j ⟩ ∧  
⟨ ∃j: 0 ≤ j < 5 : 5 = ys.j ⟩ ∧ 
⟨ ∃j: 0 ≤ j < 5 : 8 = ys.j ⟩
≡ { aplico el término a cada elemento del rango}
( (11 = ys.0) ∨ (11 = ys.1)  ∨ (11 = ys.2) ∨ (11 = ys.3) ∨ (11 = ys.4) )
∧  
( (2 = ys.0) ∨ (2 = ys.1)  ∨ (2 = ys.2) ∨ (2 = ys.3) ∨ (2 = ys.4) )
∧  
( (5 = ys.0) ∨ (5 = ys.1)  ∨ (5 = ys.2) ∨ (5 = ys.3) ∨ (5 = ys.4) )
∧ 
( (8 = ys.0) ∨ (8 = ys.1)  ∨ (8 = ys.2) ∨ (8 = ys.3) ∨ (8 = ys.4) )
≡ {evalúo las indexaciones con ys = [2,−3,11,5,8]}
( (11 = 2) ∨ (11 = (-3))  ∨ (11 = 11) ∨ (11 = 5) ∨ (11 = 8 ) )
∧  
( (2 = 2) ∨ (2 = (-3))  ∨ (2 = 11) ∨ (2 = 5) ∨ (2 = 8 ) )
∧  
( (5 = 2) ∨ (5 = (-3))  ∨ (5 = 11) ∨ (5 = 5) ∨ (5 = 8 ) )
∧ 
( (8 = 2) ∨ (8 = (-3))  ∨ (8 = 11) ∨ (8 = 5) ∨ (8 = 8 ) )
≡ {evalúo las igualdades}
( False ∨ False  ∨ True ∨ False ∨ False )
∧  
( True) ∨ False  ∨ False ∨ False ∨ False )
∧  
( False ∨ False  ∨ False ∨ True ∨ False )
∧ 
( False ∨ False  ∨ False ∨ False ∨ True)
≡ {Absorbente de disyunción x5}
True
∧  
True
∧  
True
∧ 
True
≡ { evalúo las conjunciones}
True

### d.a)
⟨ ∀i : 0 ≤ i < \#xs - 1 : xs.i = xs. (i+1)⟩
≡ {calculo el rango sabiendo que \#xs =4 }
⟨ ∀i : 0 ≤ i < \4 - 1 : xs.i = xs. (i+1)⟩
≡ {aritmética}
⟨ ∀i : 0 ≤ i < 3 : xs.i = xs. (i+1)⟩
≡ { aplico el término a cada elemento del rango}
(xs.0 = xs. (0+1)) ∧  (xs.1 = xs. (1+1)) ∧  (xs.2 = xs. (2+1))
≡ {aritmética}
(xs.0 = xs.1) ∧  (xs.1 = xs.2) ∧  (xs.2 = xs.3)
≡ {evalúo las indexaciones con xs = [-5,-3,4,8]}
((-5) = (-3)) ∧  ((-3) = 4)) ∧  (4 = 8)
≡ {evalúo las igualdades}
False ∧  False ∧  False 
≡ {resuelvo las disyunciones}
False
### d.b)
⟨ ∀i : 0 ≤ i < \#xs - 1 : xs.i = xs. (i+1)⟩
≡ {calculo el rango sabiendo que \#xs =4 }
⟨ ∀i : 0 ≤ i < \4 - 1 : xs.i = xs. (i+1)⟩
≡ {aritmética}
⟨ ∀i : 0 ≤ i < 3 : xs.i = xs. (i+1)⟩
≡ { aplico el término a cada elemento del rango}
(xs.0 = xs. (0+1)) ∧  (xs.1 = xs. (1+1)) ∧  (xs.2 = xs. (2+1))
≡ {aritmética}
(xs.0 = xs.1) ∧  (xs.1 = xs.2) ∧  (xs.2 = xs.3)
≡ {evalúo las indexaciones con xs = [11,2,5,8]}
(11 = 2) ∧  (2 = 5) ∧  (5= 8)
False ∧  False ∧  False 
≡ {resuelvo las disyunciones}
False
## Laboratorio 3
A partir de las expresiones de los ejercicios 4a, 4b y 4d:
==**a) Identifica las variables libres de cada expresión y el tipo de cada una.**==

Duda: en la b y c las variables no tienen necesariamente un solo tipo, pero deben cumplir con la propiedad de ser comparables. Es necesario ver el concepto de polimorfismo.

**b) Definí funciones que tomen como argumento las variables libres identificadas y devuelvan el resultado de la expresión.** Atención: Tené en cuenta que en algunos casos es necesario definir funciones auxiliares.
**c) Evaluá las funciones tomando como argumento los valores señalados en 5.**
Me lo voy a saltar...


> **Observación**:
> Dada una expresión E, el conjunto de las variables libres de E se de notara con FV.E
> Dada una expresión E, el conjunto de las variables ligadas de E se denotara con BV.E

**a) ⟨∀i : 0 ≤i<#xs: xs.i >0⟩**
a) 
FV.E = ∅ 
BV.E = {i}
i: Int
b) 
```
todospositivos:: [Int] -> Bool
todospositivos [] = True
todospositivos (x:xs) = (x > 0) && todospositivos xs
```
c)


***b) ⟨∃i : 0 ≤i<#xs: xs.i =x⟩*** 
a) 
FV.E = {x} 
BV.E = {i}
i: Eq a
b) Sea x:=n 
```
existeenxs :: Eq a => a -> [a] -> Bool
existeenxs n [] = False
existeenxs n (x:xs) = (n == x) || existeenxs n xs
```
c)

**c) ⟨∀i : 0 ≤i<#xs: ⟨∃j :0≤j <#ys: xs.i=ys.j ⟩⟩**
a) 
FV.E = ∅ 
BV.E = {i,j}
i: Eq a
j: Eq a
b)
```
xsenys :: Eq a => [a] -> [a] -> Bool
xsenys [] _ = True 
xsenys (x:xs) ys = existeenxs x ys && xsenys xs ys 
```
c)

>a) xs = [-5,-3,4,8]
>b) xs = [11,2,5,8]

## Ejercicio 6 
Escribí fórmulas para las siguientes expresiones en lenguaje natural.
 a) Todos los elementos de xs e ys son iguales (¡ojo! ¡sujeta a interpretación!).
- ⟨ ∀i : 0 ≤ i < ( \#xs - 1) : xs.i = xs.(i+1)⟩ ∧  ⟨ ∀j : 0 ≤ j < (\#ys -1) : ys.j = xs.(j+1)⟩ 
  xs=[6,6,6,6] ys=[4,4,4,4,4,4]
- ⟨∀i: 0 ≤ i <  \#xs : ⟨ ∀j : 0 ≤ j < \#xs: xs.i = xs.j⟩ ⟩ ∧ 
  ⟨∀k: 0 ≤ k <  \#xs : ⟨ ∀l : 0 ≤ l < \#xs: xs.k = xs.l⟩ ⟩
  xs=[6,6,6,6] ys=[4,4,4,4,4,4]
- ⟨ ∀i : 0 ≤ i < ( \#xs - 1) : ⟨ ∀j 0 ≤ j < (#ys) : xs.i = xs.(i+1) ∧  ys.j = ys.(j+1) ∧  xs.i=ys.j ⟩ ⟩ 
  xs=[6,6,6,6] ys=[6,6,6,6,6]
  
nota: Me venía preguntando porque usar length xs -1, es para usar solo una variable. La primera y segunda opción son lo mismo pero contemplando las dos formas. Es algo que vimos el cuatrimestre pasado pero me lo olvide durante las vacaciones ¯\\\_(ツ)\_/¯

 b) Todos los elementos de xs ocurren en ys.
⟨ ∀i: 0 ≤ i < \#xs : ⟨ ∃j : 0 ≤ j < \#ys : xs.i = xs.j ⟩⟩
 c) Todos los elementos de xs ocurren en ys en la misma posición
 ⟨ ∀i: 0 ≤ i < \#xs : ⟨ ∃j : 0 ≤ j < \#ys : xs.i = xs.j ∧  i=j⟩⟩

nota: tengo un lapsus mental con respecto a los cuantificadores universales y existenciales, creo que no esta bien pero tampoco tengo la capacidad como para comprobarlo.
## Ejercicio 7
Para cada una de las siguientes fórmulas, describí su significado utilizando el lenguaje natural.
### a) ⟨ Π i :1 ≤ i ≤n : i⟩
Factorial de n
### b) $$\frac{\langle Σi:0 \leq i ≤ \#xs : xs.i \rangle }{\#xs}$$
Promedio de la sumatoria de los elementos de una lista xs.
### c) ⟨ Max i : 0 ≤ i< \#xs : xs.i ⟩ < ⟨ Min i:  0 ≤ i < \#ys : ys.i ⟩
- Tenemos las listas xs e ys
- El rango es desde 0 hasta el largo de xs **==Y==** desde 0 hasta el largo de ys. 
  ¿Qué pasa si \#xs ≠ \#ys?
Se intuye que lo que se quiere decir es que el número más grande en la lista xs, es menor que el número más chico de la lista ys. Sin embargo hay que plantearse que pasa si la longitud de ambas listas es distintas. Honestamente creo que se debería usar una variable j para lo que refiere a ys.
### d) ⟨ ∃i, j : (2 ≤ i < n) ∧  (2 ≤ j < n) : i * j = n ⟩
n es un número no primo. O eso podemos razonar desde el teorema fundamental de la aritmética que establece que todo número n puede escribirse como producto de número de primos.

## Ejercicio 8
Para cada uno de los items del ejercicio anterior, evalúa respectivamente con los siguientes valores:
### a) n =5. 
⟨ Π i :1 ≤ i ≤n : i⟩
= {reemplazo n:=5}
⟨ Π i :1 ≤ i ≤ 5 : i⟩
= {aplico el término a cada elemento del rango}
1 \* 2 \* 3 \*4 \* 5
={aritmética}
120
### b) xs =[6,9,3,9,8]. 
$$\frac{\langle Σi:0 \leq i ≤ \#xs : xs.i \rangle }{\#xs}$$
= {calculo el rango sabiendo que \#xs = 5}
$$\frac{\langle Σi:0 \leq i ≤ 5 : xs.i \rangle }{5}$$
= {aplico el término a cada elemento del rango}
$$\frac{ xs.0 + xs.1 + xs.2 + xs.3 + xs.4}{5}$$
= { evalúo las indexaciones}
$$\frac{ 6 + 9 + 3 + 9 +8}{5}$$
= {aritmética}
$$\frac{ 35}{5}$$
= {aritmética}
$$ 7 $$
### c) xs =[−3,9,8],ys = [6,7,8]. 
⟨ Max i : 0 ≤ i< ==\#xs== : xs.i ⟩ < ⟨ Min i:  0 ≤ i < ==\#ys== : ys.i ⟩
= {calculo el rango sabiendo que \#xs=3 e \#ys=3 }
⟨ Max i : 0 ≤ i< 3 : xs.i ⟩ < ⟨ Min i:  0 ≤ i < 3 : ys.i ⟩
= {aplico el término a cada elemento del rango y evalúo las indexaciones}
max -3 max 9 8< min 6 min 7 8
9 < 6
= {lógica}
False
### d) n=5.
⟨ ∃i, j : (2 ≤ i < n) ∧  (2 ≤ j < n) : i * j = n ⟩
≡ {reemplazo n:=5}
⟨ ∃i, j : (2 ≤ i < 5) ∧  (2 ≤ j < 5) : i * j = 5 ⟩
≡ {Esto es imposible debido al teorema fundamental de la aritmética, 5 es un número primo, solo puede expresado como 5\*1, pero 1 esta fuera del rango}
False
## Laboratorio 4
A partir de las expresiones del ejercicio 7
**a) Identificá las variables libres de cada expresión y el tipo de cada una.** 
1. FV.E = {n} ∧ n:: Int
2. FV.E = ∅
3. FV.E = ∅
4. FV.E = {n} ∧ n::Int

**b) Definí funciones que tomen como argumento las variables libres identificadas y devuelvan el resultado de la expresión. Atención: Tené en cuenta que en algunos casos es necesario definir varias funciones.**
1. 
```
factorial:: Int -> Int
factorial 1 = 1
factorial x = x * factorial (x-1)
```
2. No es aplicable. No tiene variables libres.
3. No es aplicable. No tiene variables libres.
4. No se como hacerlo. Necesito negar una función que me diga si un número es primo. ¬(isPrime n)
**c) Evaluá las funciones tomando como argumento los valores señalados en el ejercicio 8**
## Ejercicio 9
Suponiendo que $f: [A] \rightarrow Bool$ es una función fija cualquiera, y $xs: [A]$, caracteriza con una cuantificación la siguiente función recursiva.
$alguno.f[A] \rightarrow Bool$
$algunof.[ ] = False$
$algunof.(x \triangleright xs) = f.x ∨  algunof.xs$

¿⟨∃i: 0 ≤ i \#xs : f(xs.i) (lo que vaya aca tiene que ser un Bool)⟩?
No entendí que quiere decir caracterizar. El enunciado dice que tenemos una función f, menciona un polimorfismo o algo asi. Es evidente que se trate de un cuantificador existencial que hace "algo" muy en general. Sabemos que False es el neutro de ∨  y en el último renglón tenemos una función recursiva que imita el comportamiento del cuantificador existencial. 
## Ejercicio 10 
Definí recursivamente una función $todos: [Bool] \rightarrow Bool$ que verifica que todos los elementos de una lista son $True$, es decir, que satisface la siguiente especificación:
$todos.xs \equiv \langle ∀i : 0 \leq i < \#xs : xs.i \rangle$
```
todos :: [Bool] -> Bool
todos [] = True
todos (x:xs) = x && todos xs
```
## Ejercicio 11
Escribí fórmulas para describir formalmente las siguientes expresiones en lenguaje natural.
**Preguntas:** ¿Qué tipo debe tener cada variable libre para que la expresión tenga sentido? ¿Qué tipo tiene cada expresión?
### a) n es potencia de 2.
La variable libre tiene que ser un Int y la expresión tiene que ser Bool. 
(∃i: 2 ≤ i< n : 2^i = n)
### b) n es el elemento más grande de xs.
La variable libre tiene que ser un int y la expresión tiene que ser Bool. 
El tema aca es que si uso el cuantificador max me va a devolver un número y no es lo que yo quiero.
⟨∀i : 0 ≤ i < \#xs ∧  xs.i ≠ n: xs.i < n⟩ Me devuelve True
¿⟨∀i : 0 ≤ i < \#xs ∧  xs.i ≠ n: max xs.i n = n⟩? Me devuelve True
n = ⟨Max i : 0 ≤ i < \#xs ∧ n ∈ xs: i⟩ El cuantificador me devuelve el máximo de xs y luego lo compara si ese máximo es n.
### c) El producto de los elementos pares de xs.
Creo que no tiene variable libre. Quiero que me devuelva un entero.
⟨Πi : mod (xs!!i) 2 = 0 : xs!!i⟩
⟨Πi : 0 ≤ i < \#xs  ∧ mod (xs!!i) 2 = 0 : xs!!i⟩
### d) La suma de los elementos en posición par de xs.
Creo que no tiene variable libre. Quiero que me devuelva un entero. ¿Qué entendemos por posición par? ¿Usamos la lógica haskell donde contamos desde el primer elemento es el ceroésimo?
⟨Σi : 0 ≤ i < \#xs  ∧ mod (i+1) 2 = 0 : xs!!i⟩
⟨Σi : mod (i+1) 2 = 0 : xs!!i⟩
## Laboratorio 6 
**a) Identificá las variables libres de cada expresión y el tipo de cada una.** (Eh no)
**b) Definí funciones que tomen como argumento las variables libres identificadas y devuelvan el resultado de la expresión. Atención: Tené en cuenta que en algunos casos es necesario definir varias funciones.** 
### a)
No me sale, por el mismo motivo que el de los primos, necesito establecer una función que me de una lista de números (la de las potencias de 2) y ver si n pertenece a esa lista. 
### b)
```
maximo :: [Int] -> Int
maximo [x] = x
maximo (x:xs) = max x (maximo xs)

masgrande :: Int -> [Int] -> Bool
masgrande n xs = maximo xs == n
```
### c)
```
productopares :: [Int] -> Int
productopares [] = 1
productopares (x:xs)| mod x 2 == 0 = x * productopares xs
                    | otherwise = productopares xs
```
### d)
```
sumaIndicePar :: [Int] -> Int 
sumaIndicePar [] = 0
sumaIndicePar (x:y:xs) = y + sumaIndicePar xs
```
## Ejercicio 12
**Calculá los rangos** de las siguientes cuantificaciones como conjuntos de posibles valores. Tomar n= 10, xs = [-3,9,8,9], ys = [6,9,3]. Usá tuplas cuando haya más de una variable cuantificada.
### a) ⟨ Πi : 1 ≤ i ≤ n ∧  i mod 3 = 1  : i ⟩
={evalúo n = 10}
⟨ Πi : 1 ≤ i ≤ 10 ∧  i mod 3 = 1  : i ⟩
={calculo el rango}
⟨ Πi : i ∈ {1, 4, 7, 10} : i ⟩

¿{1,2,3,4,5,6,7,8,9,10} ∩ {...,-5,-2,1,4,7,10,13,16...}?
{1, 4, 7, 10}
### b) ⟨Σi, j : 0 ≤ i < \#xs ∧  0 ≤ j < \#ys :  xs.i * ys.j ⟩
={calculo los rangos sabiendo que \#xs=4 y \#ys=3}
⟨Σi, j : 0 ≤ i < 4 ∧  0 ≤ j < 3 :  xs.i * ys.j ⟩
={reescribo en términos de ∈}
⟨Σi, j : i ∈ {0,1,2,3} ∧ j∈{0,1,2} :  xs.i * ys.j ⟩
={reescribo en términos de tuplas}
⟨Σi, j : (i,j ) ∈ {(0, 0), (0, 1), (0, 2), (1, 0), (1, 1), (1, 2), (2, 0), (2, 1), (2, 2), (3, 0), (3, 1), (3, 2)} :  xs.i * ys.j ⟩

{(0, 0), (0, 1), (0, 2), (1, 0), (1, 1), (1, 2), (2, 0), (2, 1), (2, 2), (3, 0), (3, 1), (3, 2)}
### c) ⟨ ∀i, j : 0 ≤ i <j < \#xs: xs.i≠xs.j⟩
≡ {calculo \#xs}
 ⟨ ∀i, j : 0 ≤ i <j < 4: xs.i≠xs.j⟩

==i ∈ {0,1, 2} ∧ j ∈{1, 2, 3}== ∧  i < j (calculo las tuplas teniendo en cuenta la primera condición)
(0,1), (0,2), (0,3), ~~(1,1)~~, (1,2), (1,3), ~~(2,1)~~, ~~(2,2)~~, (2,3)
i ∈ {0,1, 2} ∧ j ∈{1, 2, 3} ∧  ==i < j== (calculo las tuplas teniendo en cuenta la segunda condición)
(0,1), (0,2), (0,3), (1,2), (1,3), (2,1)
### d) ⟨ Max as,bs : xs = as ++ bs :: sum.as⟩
= {valuo xs}
 ⟨ Max as,bs : \[-3,9,8,9] = as ++ bs :: sum.as⟩

Rangos posibles: 
\[-3,9,8,9] ++ \[]
\[-3,9,8] ++ \[9]
\[-3,9] ++ \[8,9]
\[-3] ++ \[-9,8,9]
\[] ++ \[-3,9,8,9] -> la sumatoria de vacío es... ¿0?

¿Técnicamente supongo que esta bien? 
### e) ⟨$Σi : 1 ≤ i + 1 < \#xs +1 : (x\triangleright xs).(i+1)$ ⟩
= {aritmética}
⟨$Σi : 0 ≤ i < \#xs: (x\triangleright xs).(i+1)$ ⟩
={calculo \#xs}
⟨$Σi : 0 ≤ i < 4: (x\triangleright xs).(i+1)$ ⟩

**i ∈ {0,1,2,3}**
## Ejercicio 13
Simplifica hasta obtener una expresión sin cuantificador las siguientes expresiones aplicando las propiedades de cuantificadores **rango vacío, rango unitario o término constante** y propiedades básicas de la aritmética. 
### a) ⟨ ∃i: i =3 ∧  i mod 2 = 0 : 2 * i = 6 ⟩
≡{¿?}
⟨ ∃i: 3 mod 2 = 0 : 2 * i = 6 ⟩
≡{def de 3 mod 2}
⟨ ∃i: 1 = 0 : 2 * i = 6 ⟩
≡{ lógica}
⟨ ∃i: False : 2 * i = 6 ⟩
≡{rango vacío}
False
### b) ⟨ Σi : 5 ≤ i ∧  i ≤5 : -2 * i ⟩
={calculo el rango}
⟨ Σi : i = 5 : -2 * i ⟩
={rango unitario}
(-2 * 5)
= -10
### c) ⟨ Π i : 0 < i < 1 : 34 ⟩
={calculo el rango}
⟨ Π i : False : 34 ⟩
={rango vacío}
1
### d) ⟨ Min i : i ≤ 0 ∨  i > 10 : n * (i+2) - n * i ⟩
={distributividad de * con +}
⟨ Min i : i ≤ 0 ∨  i > 10 : ==n * i== + n * 2 ==-n * i== ⟩
={inverso aditivo}
⟨ Min i : i ≤ 0 ∨  i > 10 : n * 2 ⟩
={término constante}
n * 2
### e) ⟨ Max a,as: ==a ▷ as = [ ]== : \#as ⟩
={absurdo, False. (Si le meto un elemento a una lista, casi que por definición esta lista no va a a estar vacía. Si le meto la lista vacía a una lista vacía, el resultado no es $[ \ ]$ sino $[ [ \ ] ]$, e incluso eso es distinto de $[ \ ]$ )}
⟨ Max a,as: False : \#as ⟩
={rango vacío}
-∞ (-∞ es elemento neutro de Max)
## Ejercicio 14 
Aplica **partición de rango** si es que se puede, y si no se puede explicá porqué.
Recordatorio: **⊕ ha de ser idempotente ( a ⊕ a = a)** ó **R y S disjuntos** (no hay i tal que R.i ∧  S.i)
### a) ⟨ Σi : i = 0 ∨  4 > i ≥ 1 : n  * (i+1)⟩
Primero veamos que si R: i ∈ {0} y S: i ∈ {1,2,3}, R y S son disjuntos, es por esto que podemos aplicar partición de rango a pesar de que Σ no es idempotente.
={partición de rango}
⟨ Σi : i = 0 : n  * (i+1)⟩ + ⟨ Σi :  4 > i ≥ 1 : n  * (i+1)⟩
### b) ⟨ ∀i : 3 ≤ |i| ≤ 4 ∨  0 < i < 4 : ¬f.i⟩ 
Vemos que a la izquierda i∈{-4, -3, 3, 4}, mientras que a la derecha i∈{1,2,3}. "R" y "S" no son disjuntos, sin embargo ∀es idempotente, por lo que podemos aplicar partición de rango de todas formas.
≡{partición de rango}
⟨ ∀i : 3 ≤ |i| ≤ 4 : ¬f.i⟩  ∧  ⟨ ∀i :  0 < i < 4 : ¬f.i⟩
### c) ⟨ Σ i : |i| ≤ 1 ∨  0 ≤ 2 \* i < 7 : i \* n ⟩
-  Σ no es idempotente
- Por izquierda tenemos:
  | i | ≤ 1
  i ∈ {-1,0,1}
- Por derecha tenemos:
  0 ≤ 2* i < 7
  i ∈ {0,1,2,3}
Luego no podemos aplicar partición de rango debido a que no se cumple ninguna de las dos condiciones.
### d) ⟨ Πi : ==0 ≤ i < \#xs ∧ (i mod 3 = 0 ∨ i mod 3 = 1)== : 2 * xs.i +1 ⟩ (distribuir primero)
={distributividad de ∧  con ∨ }
⟨ Πi : ( (0 ≤ i < \#xs) ∧ (i mod 3 = 0) )∨ ( (0 ≤ i < \#xs) ∧ (i mod 3 = 1) ) : 2 * xs.i +1 ⟩ 
={partición de rango} (Π no es idempotente pero es claro que R y S son disjuntos, el conjunto de números con resto 1 (en la división por 3) es disjunto con el conjunto de resto 0  (en la división por 3))
⟨ Πi : (0 ≤ i < \#xs) ∧ (i mod 3 = 0)  : 2 \* xs.i +1 ⟩ \* ⟨ Πi :(0 ≤ i < \#xs) ∧ (i mod 3 = 1) : 2 \* xs.i +1⟩ 
## Ejercicio 15
Evalúa las expresiones del ejercicio 14 tomando los siguientes valores de las variables libre : n=3, f.x = |x| < 4, xs = \[-1,1,0,3].
### a) ⟨ Σi : i = 0 ∨  4 > i ≥ 1 : n  * (i+1)⟩
⟨ Σi : i = 0 ∨ 4 > i ≥ 1 : 3 * (i+1)⟩
={partición de rango}
⟨ Σi : i = 0 : 3  * (i+1)⟩ + ⟨ Σi :  4 > i ≥ 1 : 3  * (i+1)⟩
={aplico el término a cada elemento de los rangos}
 3 \* (0+1) +  3 \* (3+1) +  3 \* (2+1) +  3 \* (1+1)
 ={aritmética}
 3 \* 1 +  3 \* 4 +  3 \* 3 +  3 \* 2
  ={aritmética}
   3 +  12 +  9 +  6
={aritmética}
30
### b) ⟨ ∀i : 3 ≤ |i| ≤ 4 ∨  0 < i < 4 : ¬f.i⟩ 
⟨ ∀i : 3 ≤ |i| ≤ 4 ∨  0 < i < 4 : ¬(|i| < 4)⟩ 
≡{partición de rango}
⟨ ∀i : 3 ≤ |i| ≤ 4 : ¬(|i| < 4)⟩  ∧  ⟨ ∀i :  0 < i < 4 : ¬(|i| < 4)⟩
≡{aplico el término a cada elemento del rango}
¬(|-4| < 4) ∧  ¬(|-3| < 4) ∧  ¬(|3| < 4) ∧  ¬(|4| < 4) ∧  ⟨ ∀i :  0 < i < 4 : ¬(|i| < 4)⟩
≡{lógica}
¬False ∧  ¬True ∧  ¬False∧  ¬True ∧  ⟨ ∀i :  0 < i < 4 : ¬(|i| < 4)⟩
≡{def de ¬}
True ∧  False ∧  True ∧  False ∧  ⟨ ∀i :  0 < i < 4 : ¬(|i| < 4)⟩
≡{Absorbente de ∧}
False
### c) ⟨ Σ i : |i| ≤ 1 ∨  0 ≤ 2 \* i < 7 : i \* n ⟩
⟨ Σ i : |i| ≤ 1 ∨  0 ≤ 2 \* i < 7 : i \* 3 ⟩
={aplico el término a cada elemento del rango R={-1,0,1}∩{0,1,2,3} = {0,1} }
(0 \* 3) +(1 \* 3) 
={aritmética}
0 + 3
={aritmética}
3
### d) ⟨ Πi : ==0 ≤ i < \#xs ∧ (i mod 3 = 0 ∨ i mod 3 = 1)== : 2 * xs.i +1 ⟩
={¿calculo? \#xs=4}
⟨ Πi : ==0 ≤ i < 4 ∧ (i mod 3 = 0 ∨ i mod 3 = 1)== : 2 * xs.i +1 ⟩
={distributividad}
⟨ Πi : (0 ≤ i < 4) ∧ (i mod 3 = 0)  : 2 \* xs.i +1 ⟩ \* ⟨ Πi :(0 ≤ i < \4) ∧ (i mod 3 = 1) : 2 \* xs.i +1⟩
={aplico el término a cada elemento del rango}
(2 \* xs.0 +1) \* (2 \* xs.3 +1) \* (2 \* xs.1 +1)
={evalúo las indexaciones con xs = \[-1,1,0,3]}
(2 \* (-1) +1) \* (2 \* 3 +1) \* (2 \* 1 +1)
={aritmética}
(-1 +1) \* (6 +1) \* (2 +1)
={aritmética}
0
## Ejercicio 16
Descubrí el error en la siguiente prueba. Es decir, ¿La supuesta propiedad demostrada, vale para todos los valores posibles de xs? ¿Para que valor o valores de xs falla?
⟨ Σ i : 0 ≤ i < \#xs : xs.i ⟩
={lógica}
⟨ Σ i : i=0 ∨  1 < i < \#xs : xs.i ⟩
={partición de rango disjunto}
⟨ Σ i : i=0 : xs.i ⟩ + ⟨ Σ i : 1 < i < \#xs : xs.i ⟩
= {rango unitario}
xs.0 + ⟨ Σ i : 1 < i < \#xs : xs.i ⟩

Falla con la lista vacía. El error es de lógica.
0 ≤ i < \#xs
≡ 
0 ≤ i ∧  i < \#xs
(0=i < \#xs) ∨ (0 < i < \#xs)
Quiero decir... xs.0 siendo xs \[ ] no funcionaría. Por otro lado. Si a la expresión original podemos aplicar rango vacío con \[ ] y la expresión final nos daría el neutro de Σ, 0.
## Ejercicio 17
Aplica **distributividad**, si es que se puede.
*Recordar:* A6 (Distributividad): ⟨ ⊕i: R.i : T.i ⨂ C⟩
- i no aparece en C
- ⨂ distributivo con ⊕: (a⨂c) ⊕ (b⨂c) = (a⊕b)⨂c
- R es no vacío, o el neutro de ⊕ es absorbente para ⨂
### a) ⟨ Σi : i = 0 ∨ 4 > i ≥ 1 : n \* (i+1) ⟩
Sea C:=n,  "\*" es distributivo con respecto a "+", R es no vacío y n no es una variable ligada.
={Distributividad}
⟨ Σi : i = 0 ∨ 4 > i ≥ 1 : i+1 ⟩ \* n
### b) ⟨ Π i : 3 ≤ |i| ≤ 4 ∨ 0 < i < 4: n + i ⟩
No se puede aplicar distributividad. Π no se puede distribuir con +.
### c) ⟨ ∀i: i =0 ∨ 4 > i ≥ 1 : ¬(f.i ∧ f.n)
≡ {De Morgan}
⟨ ∀i: i =0 ∨ 4 > i ≥ 1 : ¬f.i ∨  ¬f.n⟩
≡{Distributividad} 
	i no aparece en ¬f.n
	∀ se puede distribuir con ∨ 
	R es no vacío
⟨ ∀i: i =0 ∨ 4 > i ≥ 1 : ¬f.i⟩ ∨  ¬f.n
### d) ⟨ Max i : 0 ≤ i < \#xs : x + xs.i ⟩
¿{Distributividad}?
	i no aparece en x
	Max se puede distribuir con +
	 R puede o no ser vacío. Por esto, la propiedad no es valida.
No se puede aplicar distributividad. Es posible si xs ≠ \[ ].
## Ejercicio 18
Calculá los resultados para todos los ítems del ejercicio anterior. Usá **n**=3, **f.x** = (x=0), *x* = -1, **xs** = \[1, 0, 3]
### a) ⟨ Σi : i = 0 ∨ 4 > i ≥ 1 : 3 \* (i+1) ⟩
={Distributividad}
⟨ Σi : i = 0 ∨ 4 > i ≥ 1 :  i+1 ⟩ \* 3
={aplico el término a cada elemento del rango}
( (0 + 1) + (3 + 1) + (2 + 1) + (1 + 1) )\*3
={aritmética}
(1 + 4 + 3 + 2 )\*3
={aritmética}
30
### b) ⟨ Π i : 3 ≤ |i| ≤ 4 ∨ 0 < i < 4: 3 + i ⟩
No se puede aplicar distributividad. Π no se puede distribuir con +.
⟨ Π i : 3 ≤ |i| ≤ 4 ∨ 0 < i < 4: 3 + i ⟩
={aplico el término a cada elemento del rango}
( 3 + 3 ) \* ( 3 + 4 ) \* ( 3 + (-3) ) \* ( 3 + (-4) ) * ( 3 + 1 ) \* ( 3 + 2 )
={aritmética}
6 \* 7 \* 0 \*  -1  \* 4 \* 5
={aritmética}
0
### c) ⟨ ∀i: i =0 ∨ 4 > i ≥ 1 : ¬(f.i ∧ f.3)
≡ {De Morgan}
⟨ ∀i: i =0 ∨ 4 > i ≥ 1 : ¬f.i ∨  ¬f.3⟩
≡{Distributividad} 
	i no aparece en ¬f.n
	∀ se puede distribuir con ∨ 
	R es no vacío
⟨ ∀i: i =0 ∨ 4 > i ≥ 1 : ¬(i=0)⟩ ∨  ¬(3=0)
≡{lógica}
⟨ ∀i: i =0 ∨ 4 > i ≥ 1 : ¬(i=0)⟩ ∨  ¬False
≡ {Def de ¬}
⟨ ∀i: i =0 ∨ 4 > i ≥ 1 : ¬(i=0)⟩ ∨ True
≡ {Absorbente de ∨}
True
### d) ⟨ Max i : 0 ≤ i < \#xs : -1 + xs.i ⟩
⟨ Max i : 0 ≤ i < \#xs : -1 + xs.i ⟩
= {Calculo el rango sabiendo que \#xs=3}
⟨ Max i : 0 ≤ i < 3 : -1 + xs.i ⟩
={Distributividad}
⟨ Max i : 0 ≤ i < 3 : xs.i ⟩ -1
= ¿Que hace Max? ¿Busca el máximo en el rango o busca el máximo en una lista?
3 - 1
={aritmética}
2
## Ejercicio 19
Aplicá el **cambio de variable** indicado, si es que se puede. Explicá porqué puede o no puede aplicarse.
T2 (Cambio de Variable): ⟨ i : R.i : T.i⟩ = ⟨ j :R.(f.j) : T.(f.j)⟩
- f tiene inversa en R
  - biyectiva
- j no aparece en R y T.
### a) ⟨Σi: |i| < 5 : i div 2 ⟩ con i → 2 \* i (o sea f.i = 2 \* i)
⟨Σi: |i| < 5 : i div 2 ⟩
={propongo usar cambio de variable con la función f.i=2\*\i}
⟨Σi: |(f.i)| < 5 : (f.i) div 2 ⟩
={sustituyo f por lo que es}
⟨Σi: |(2\*i)| < 5 : (2\*i) div 2 ⟩

### **Duda 1**
- En todo el práctico la variable a reemplazar se llama i, en lugar de j como en el digesto. ¿Es un error? ¿No se corre el riesgo de mezclar cosas? ¿No estamos arruinando el enunciado de la segunda condición?
- ¿Qué quiere decir que tiene que ser inversa? ¿(2\*i) tiene que ser una función biyectiva o el rango o término deben serlo? Porque es evidente que (2\*i) tiene inversa, pero div no la tiene, al no ser biyectiva.
### b) ⟨ Σi : i mod 2 = 0 ∧  |i| < 5 : i div 2 ⟩ con i → 2 \* i (o sea f.i= 2 \* i) (rango i∈{-4,-2,0,2,4})
={propongo usar cambio de variable con la función f.i=2\*\i}
⟨ Σi : f.i mod 2 = 0 ∧  |f.i| < 5 : f.i div 2 ⟩
={sustituyo f por lo que es} (rango i∈{-2,-1,0,1,2})
⟨ Σi : (2\*i) mod 2 = 0 ∧  |(2\*i)| < 5 : (2\*i) div 2 ⟩
### c) ⟨Πi : 0 < i ≤ \#(x▷xs) : (x▷xs).i⟩ con i → i+1 (o sea f.i = i+1)
Probemos que pasaría con xs:=\[17,25,64,7] y x=45
⟨Πi : 0 < i ≤ \#(x▷xs) : (x▷xs).i⟩ 
={calculo x:xs}
⟨Πi : 0 < i ≤ \#\[45,17,25,64,7]: \[45,17,25,64,7].i⟩ 
={calculo el rango sabiendo \#x:xs}
⟨Πi : 0 < i ≤ \5: \[45,17,25,64,7].i⟩ 
={evaluo los elementos del rango en el término}
17 \* 25 \* 64 \* 7 

probemos con cambio de variable
⟨Πi : 0 < i ≤ \#(x▷xs) : (x▷xs).i⟩
={cambio de variable con i → i+1 }
⟨Π(i+1) : 0 < (i+1) ≤ \#(x▷xs) : (x▷xs).(i+1)⟩
={evaluo x:xs}
⟨Π(i+1) : 0 < (i+1) ≤ \#\[45,17,25,64,7] : \[45,17,25,64,7].(i+1)⟩
={calculo el rango sabiendo las longitud de las listas}
⟨Π(i+1) : 0 < (i+1) ≤ 5 : \[45,17,25,64,7].(i+1)⟩
={aritmética}
⟨Π(i+1) : -1 < i ≤ 4 : \[45,17,25,64,7].(i+1)⟩
={evalúo los elementos del rango en el término}
17 \* 25 \* 64 \* 7 

Me da que es lo mismo.
### d) ⟨Max as : as=\[ ] : \#as⟩ con (a,as) → a▷as (la función es f.(a,as) = a▷as)
No entiendo que es ==f.(a,as)==
⟨Max as : as=\[ ] : \#as⟩
={cambio de variable con f(a,as)=a▷as}
⟨Max a,as : ==a▷as=\[ ]== : \#(a▷as)⟩
={propiedad de listas}
⟨Max a,as : True : \#(a▷as)⟩
={def de #}
⟨Max as : True : \#as +1⟩
={distributividad}
⟨Max as : True : \#as⟩ + 1
## Ejercicio 20
Simplificá el rango y aplicá alguna de las **reglas para la cuantificación de conteo:**
### a) ⟨N a,as : a▷as = xs ∧ xs =\[ ] : \#as =1⟩
⟨N a,as : ==a▷as = xs ∧ xs =\[ ]== : \#as =1⟩
={¿?}
⟨N a,as : ==a▷as = \[ ]== : \#as =1⟩
={Propiedad de listas}
==⟨N a,as : False : \#as =1⟩==
={TN3 Rango vacío}
0
### b) ⟨ N i : i - n = 1 : i mod 2 = 0 ⟩
⟨ N i : ==i - n = 1== : i mod 2 = 0 ⟩
={aritmética}
⟨ N i : ==i = 1 + n== : i mod 2 = 0 ⟩
={rango unitario}
```
⟨ N i : ==i = 1 + n== : i mod 2 = 0 ⟩ =  ( (1+n) mod 2 = 0 → 1
										□ (1+n) mod 2 ≠ 0 → 0
										)
```
(depende de que valor tome n)

Alternativamente
==⟨ N i : i - n = 1 : i mod 2 = 0 ⟩==
={Definición de conteo}
⟨ Σ i : ==i - n = 1== ∧  i mod 2 = 0 : 1 ⟩
={aritmética}
⟨ Σ i : ==i = 1 + n ∧  i mod 2 = 0== : 1 ⟩
={propiedad mágica de iguales}
⟨ Σ i : (n+1) mod 2 = 0 : 1 ⟩
Ahora, no podemos aplicar A5 Término constante porque no sabemos si R es no vacío, n es una variable libre.
### c) ⟨ N i : i = 0 ∨  1 ≤ i < \#xs + 1 : (x▷xs).i mod 2 = 0 ⟩
==⟨ N i : i = 0 ∨  1 ≤ i < \#xs + 1 : (x▷xs).i mod 2 = 0 ⟩==
={TN5 Partición de rango}
⟨ N i : i = 0 : (x▷xs).i mod 2 = 0 ⟩ + ⟨ N i : 1 ≤ i < \#xs + 1 : (x▷xs).i mod 2 = 0 ⟩


⟨ Σ i : i = 0 ∧ (x▷xs).i mod 2 = 0 : 1⟩ + ⟨ N i : 1 ≤ i < \#xs + 1 : (x▷xs).i mod 2 = 0 ⟩

⟨ Σ i :  (x▷xs).0 mod 2 = 0 : 1⟩ + ⟨ N i : 1 ≤ i < \#xs + 1 : (x▷xs).i mod 2 = 0 ⟩

⟨ Σ i : x mod 2 = 0 : 1⟩ + ⟨ N i : 1 ≤ i < \#xs + 1 : (x▷xs).i mod 2 = 0 ⟩
## Ejercicio 21
**Demostrá la siguiente propiedad:**
⟨ Σi : 0 ≤ i < ==\#(x▷xs)==: T.((x▷xs).i)⟩ = T.x + ⟨ Σi: 0 ≤ i < \#xs : T.(xs.i) ⟩
={def de length}
⟨ Σi : 0 ≤ i < \#xs + 1: T.(==(x▷xs).i)==⟩ = T.x + ⟨ Σi: 0 ≤ i < \#xs : T.(xs.i) ⟩
={lógica de la tierra ancestral de los algoritmos}
⟨ Σi : 0 ≤ i < \#xs + 1: T.(==xs.(i-1)==⟩ = T.x + ⟨ Σi: 0 ≤ i < \#xs : T.(xs.i) ⟩
={prop 22b + viaje en el tiempo (todavía no demostre 22b)}
T.x + ⟨ Σi : 0 ≤ i < \#xs: T.(xs.(==i-1+1)==⟩ = T.x + ⟨ Σi: 0 ≤ i < \#xs : T.(xs.i) ⟩
={aritmética}
T.x  + ⟨ Σi : 0 ≤ i < \#xs: T.(xs.i⟩ = T.x + ⟨ Σi: 0 ≤ i < \#xs : T.(xs.i) ⟩
={reflexividad}
True

⟨ Σi : 0 ≤ i < \#(x▷xs): T.((x▷xs).i)⟩ = ==T.x== + ⟨ Σi: 0 ≤ i < \#xs : T.(xs.i) ⟩
={rango unitario}
⟨ Σi : 0 ≤ i < \#(x▷xs): T.((x▷xs).i)⟩ =  ==⟨ Σi: i=x : T.(xs.i) ⟩ + ⟨ Σi: 0 ≤ i < \#xs : T.(xs.i) ⟩==
={partición de rango}
⟨ Σi : 0 ≤ i < \#(x▷xs): T.((x▷xs).i)⟩ = ⟨ Σi: 0 ≤ i < \#xs ∨ i=x : T.(xs.i) 
={l}


## Ejercicio 22
Demostrá los siguientes teoremas útiles para la materia.
Supone que ⊕ es un cuantificador asociado a un operador genérico ⊕, que es conmutativo y asociativo (Así como el ∀ es el cuantificador asociado a la conjunción :y) y n: Nat.
### a) ⟨ ⊕i : 0 ≤ i < n + 1 : T.i ⟩ = ⟨ ⊕i : 0 ≤ i < n : T.i ⟩ ⊕ T.n
⟨ ⊕i : 0 ≤ i < n + 1 : T.i ⟩ = ⟨ ⊕i : 0 ≤ i < n : T.i ⟩ ⊕ ==T.n==
={Rango Unitario}
⟨ ⊕i : 0 ≤ i < n + 1 : T.i ⟩ = ⟨ ⊕i : 0 ≤ i < n : T.i ⟩ ⊕ ⟨ ⊕i : i = n : T.i ⟩
={Partición de rango disjunto}
⟨ ⊕i : 0 ≤ i < n + 1 : T.i ⟩ = ⟨ ⊕i : ==i=n ∨ 0 ≤ i < n== : T.i ⟩
={lógica}
⟨ ⊕i : ==0 ≤ i < n + 1== : T.i ⟩ = ⟨ ⊕i : 0 ≤ i ≤ n : T.i ⟩
={lógica}
⟨ ⊕i : 0 ≤ i ≤ n : T.i ⟩ = ⟨ ⊕i : 0 ≤ i ≤ n : T.i ⟩
={reflexividad}
True
### b) ⟨ ⊕i : 0 ≤ i < n + 1 : T.i ⟩ = T.0 ⊕ ⟨ ⊕ i : 0 ≤ i < n : T.(i+1)⟩

## Ejercicio 23
 (**Rango unitario generalizado**) Sea ⊕ un cuantificador asociado a un operador conmutativo y asociativo. Probá las siguiente regla de rango unitario generalizado (Z no depende de i ni de j):
==⟨ ⊕ i, j :  i = Z ∧ R.i.j: T.i.j ⟩== = ⟨ ⊕ j : R.Z.j : T.Z.j ⟩ 
={Anidado}
==⟨ ⊕i : i=Z : ⟨ ⊕j : R.i.j: T.i.j⟩ ⟩== = ⟨ ⊕ j : R.Z.j : T.Z.j ⟩
={rango unitario}
⟨ ⊕j : R.Z.j: T.Z.j⟩ = ⟨ ⊕ j : R.Z.j : T.Z.j ⟩
={Reflexividad}
True
## Ejercicio 24
Podemos definir un cuantificador de conteo N utilizando la sumatoria:
⟨ N i : R.i : T.i ⟩ ≐ ⟨ Σ i : R.i ∧ T.i : 1⟩

Demostrá que **⟨ Σ i : R.i ∧ T.i : k⟩ = ⟨ N i : R.i : T.i ⟩ \* k**

⟨ Σ i : R.i ∧ T.i : k⟩ = ⟨ N i : R.i : T.i ⟩ \* k
={neutro de \ * k}
⟨ Σ i : R.i ∧ T.i : 1 \* k⟩ = ⟨ N i : R.i : T.i ⟩ \* k
={distributividad}
⟨ Σ i : R.i ∧ T.i : 1⟩ \* k = ⟨ N i : R.i : T.i ⟩ \* k
={def de conteo}
⟨ N i : R.i : T.i ⟩ \* k = ⟨ N i : R.i : T.i ⟩ \* k
## Ejercicio 25
Demostrá la siguiente relación entre los cuantificadores de máximo y mínimo cuando R es no vacío:
n = ⟨ Min i : R.i : -T.i ⟩ ≡  ==n = -⟨Max i : R.i : T.i ⟩==
≡ {multiplico por -1 en ambos lados}
n = ⟨ Min i : R.i : -T.i ⟩ ≡  ==-n = ⟨Max i : R.i : T.i ⟩==
={T1 Propiedad de máximo y mínimo}
==n = ⟨ Min i : R.i : -T.i ⟩== ≡  ⟨∃i: R.i -n = T.i⟩ ∧ ⟨∀i: R.i : F.i ≤ -n ⟩
≡{T1 Propiedad de máximo y mínimo}
⟨∃i: R.i : n = T.i⟩ ∧ ⟨∀i: R.i : n ≤ F.i ⟩ ≡  ⟨∃i: R.i : -n = T.i⟩ ∧ ⟨∀i: R.i : ==F.i ≤ -n== ⟩
≡{Multiplico por -1 en ambos lados}
⟨∃i: R.i : n = T.i⟩ ∧ ⟨∀i: R.i : n ≤ F.i ⟩ ≡  ⟨∃i: R.i : -n = T.i⟩ ∧ ⟨∀i: R.i : ==F.i ≥ n ==⟩
≡{Reescritura}
⟨∃i: R.i : n = T.i⟩ ∧ ⟨∀i: R.i : n ≤ F.i ⟩ ≡  ⟨∃i: R.i : -n = T.i⟩ ∧ ⟨∀i: R.i : n≤ F.i ⟩
## Ejercicio 26
Demostrá los siguientes teoremas sobre ∀, utilizando los axiomas y teoremas del digesto:
### a) Intercambio de ∀i (generalizada)
==⟨∀i : R.i ∧ S.i : T.i⟩== ≡ ⟨∀i : R.i : S.i ⇒ T.i⟩
≡{A8 Intercambio)
⟨∀i : : (R.i ∧ S.i) ⇒ T.i⟩ ≡ ==⟨∀i : R.i : S.i ⇒ T.i⟩==
≡{A8 Intercambio)
⟨∀i : : (R.i ∧ S.i) ⇒ T.i⟩ ≡ ⟨∀i : : R.i ⇒(S.i ⇒ T.i)⟩
≡ 
==(R.i ∧ S.i) ⇒ T.i== ≡ R.i ⇒(S.i ⇒ T.i)
≡{Caracterización de la implicación}
¬(R.i ∧ S.i) ∨ T.i ≡ R.i ⇒==(S.i ⇒ T.i)==
≡{Caracterización de la implicación}
¬(R.i ∧ S.i) ∨ T.i ≡ ==R.i ⇒(¬S.i ∨ T.i)==
≡{Caracterización de la implicación}
==¬(R.i ∧ S.i) ==∨ T.i ≡ ¬R.i ∨(¬S.i ∨ T.i)
≡{De Morgan}
¬R.i ∨ ¬S.i ∨ T.i ≡ ¬R.i ∨(¬S.i ∨ T.i)
≡{Asociatividad}
¬R.i ∨ ¬S.i ∨ T.i ≡ ¬R.i ∨¬S.i ∨ T.i
≡{Reflexividad}
True

### b) Instanciación de ∀:
⟨∀i : : T.i⟩ ⇒ T.x, Cuando x no esta cuantificada.
¿Cómo sería la regla de instanciación para ∃? Enunciala y demostrala.
## Ejercicio 27/Lab 7
 - Definí recursivamente las siguientes funciones.
 - Programá las funciones definidas en el ejercicio 27. Para definir los tipos en haskell lo podes hacer de la siguiente manera.
### a)  paratodo’ :: [a]-> (a-> Bool)-> Bool
La función paratodo, que dada una lista de valores xs : [A] y un predicado T : A → Bool, determina si todos los elementos en xs hacen verdadero el predicado T, es decir:
$$ paratodo: [A] \rightarrow (A \rightarrow Bool) \rightarrow Bool$$
$$ paratodo.xs.T\equiv \langle ∀i: 0 \leq i < \#xs : T(xs.i) \rangle$$
```
paraTodo :: [a] -> (a -> Bool) -> Bool
paraTodo [ ] y = True
paraTodo (x:xs) t = t x && paraTodo xs t
```
### b)  existe : [A] → (A → Bool) → Boo
La función existe, que dada una lista de valores xs : [A] y un predicado T : A → Bool, determina si
 algún elemento en xs hace verdadero el predicado T, es decir:
$$ existe: [A] \rightarrow (a \rightarrow Bool)\rightarrow Bool$$
$$ existe.xs.T \equiv \langle ∃i:0 \leq i < \#xs : T.(xs.i) \rangle $$
```
existe :: [a] -> (a-> Bool) -> Bool
existe [ ] t = False
existe (x:xs) t = t x || existe xs t
```
### c) sumatoria : [A] → (A → Num) → Num
La función sumatoria, que dada una lista de valores xs: \[A] y una función T: A → Num (Toma elementos de A y devuelve números), calcula la suma de la aplicación de T a los elementos en xs es decir:
$$ sumatoria: [A] \rightarrow (A \rightarrow Num) \rightarrow Num$$
$$ sumatoria.xs.T = \langle \sum:0 \leq i < \#xs : T.(xs.i) \rangle $$
```
sumatoria ::  [a] -> (a-> Int) -> Int
sumatoria [ ] t = 0
sumatoria (x:xs) t = t x + sumatoria xs t
```
### d) productoria : [A] → (A → Num) → Num
La función productoria, que dada una lista de valores xs : \[A] y una función T: A → Num, calcula el producto de la aplicación de T a los elementos de xs, es decir:
$$ productoria: [A] \rightarrow (A \rightarrow Num) \rightarrow Num$$
$$ productoria.xs.T = \langle \prod:0 \leq i < \#xs : T.(xs.i) \rangle $$
```
productoria ::  [a] -> (a-> Int) -> Int
productoria [ ] t = 1
productoria (x:xs) t = t x * productoria xs t
```
## Laboratorio 9
Utilizando las funciones del Laboratorio 7, programa las siguientes funciones por composición, sin usar recursión ni análisis por casos. Tené en cuenta que puede ser necesario definir funciones auxiliares para que las definiciones sean más claras.
### a) todosPares :: [Int]-> Bool verifica que todos los números de una lista sean pares.

```
esPar :: Int-> Bool
esPar x = mod x 2 == 0

todosPares :: [Int]-> Bool
todosPares (x:xs) = paraTodo (x:xs) esPar
```
### b) hayMultiplo :: Int-> [Int]-> Bool verifica si existe algún número dentro del segundo parámetro que sea múltiplo del primer parámetro.
```
esMultiplo :: Int -> Int -> Bool
esMultiplo x y = mod x y == 0

hayMultiplo :: Int-> [Int]-> Bool 
hayMultiplo n xs = existe xs (\y -> esMultiplo y n)

hayMultiplo2 :: Int-> [Int]-> Bool 
hayMultiplo2 n xs = any (\y-> esMultiplo y n) xs
```
### c) sumaCuadrados :: Int -> Int
dado un número no negativo n, calcula la suma de los primeros n cuadrados, es decir $\langle \sum i : 0 \leq i < n : i^{2} \rangle$

```
sumaCuadrados :: Int-> Int
sumaCuadrados n = sum (map (^2) [1..n])

potencia :: Int -> Int -> Int
potencia x 1 = x
potencia x n = x * potencia x (n-1)

sumaCuadra2 :: Int-> Int
sumaCuadra2 n = sum (map (\x->potencia x 2) [1..n])

sumaCuadra3 :: Int-> Int
sumaCuadra3 n = sumatoria [1..n] (\x->potencia x 2)

```

### d) Programar la función `existeDivisor::Int-> [Int]-> Bool`, que dado en entero `n` y una lista `ls` , devuelve `True` si y solo si, existe algún elemento en `ls` que divida a `na`. 
```
existeDivisor::Int-> [Int]-> Bool
existeDivisor n ls = existe ls (\x-> mod x n == 0)
```
### e) Utilizando la función del apartado anterior, definí la función esPrimo:: Int-> Bool, que dado un entero n, devuelve True si y solo si n es primo. Ayuda: En Haskell se puede escribir la lista que contiene el rango de números entre n y m como \[n..m].
```
esPrimo :: Int -> Bool
esPrimo x = not (existeDivisor x [2..(x-1)])

esPrimo2 :: Int -> Bool
esPrimo2 x  | x > 1 = not (existeDivisor x [2..(x-1)])
            | otherwise = False
```

### f) ¿Se te ocurre como redefinir factorial (ej. 3d) para evitar usar recursión?
```
factorial :: Int -> Int
factorial n = product [1..n]

factorial2 :: Int -> Int
factorial2 n = productoria [1..n] (*1)
```
### g) Programar la función `multiplicaPrimos :: [Int]-> Int` que calcula el producto de todos los números primos de una lista.
```
multiplicaPrimos :: [Int]-> Int
multiplicaPrimos xs = product (filter esPrimo xs)

multiplicaPrimos2 :: [Int]-> Int
multiplicaPrimos2 xs = productoria (filter esPrimo xs) (*1)

```

### h) Programar la función esFib :: Int-> Bool, que dado un entero n, devuelve True si y sólo si n está en la sucesión de Fibonacci.
```
fib:: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)

fib2:: Float -> Float
fib2 z = fromIntegral (round (((1 + sqrt 5) / 2)**z/sqrt 5))

esfib :: Float -> Bool
esfib n = existe [0..n+1] (\x-> fib2 x == n)
```
### i) Utilizando la función del apartado anterior, defin´ı la funci´on todosFib :: [Int]-> Bool que dada una
 lista xs de enteros, devuelva si todos los elementos de la lista pertenecen (o no) a la sucesi´on de Fibonacci.
## Ejercicio 28
- Realizan operaciones sobre listas
- Equivale a \[2,-3,7,3,-7].
- Equivale a \[1,6,2].
## Ejercicio 29/Laboratorio 10
Programá una función que dada una lista de números xs, devuelve la lista que resulta de duplicar cada valor de xs.
### a) Definila usando recursión
```
duplicaLista1:: [Int] -> [Int]
duplicaLista1 [ ] = []
duplicaLista1 (x:xs) = x *2 : duplicaLista1 xs
```
### b) Definila utilizando la función map
```
duplicaLista2:: [Int] -> [Int]
duplicaLista2 xs = map (*2) xs
```
## Laboratorio 11
Programá una función que dada una lista de números `xs` , calcula una lista que tiene como elementos aquellos números de `xs` que son primos.
```
listaPrima1:: [Int] -> [Int]
listaPrima1 [ ] = []
listaPrima1 (x:xs)  | esPrimo x = x: listaPrima1 xs
                    | otherwise = listaPrima1 xs

listaPrima2:: [Int] -> [Int]
listaPrima2 xs = filter esPrimo xs
```

## Laboratorio 12
```
primIgualesA1:: (Eq a) => a -> [a] -> [a]
primIgualesA1 a [] = []
primIgualesA1 a (x:xs)  | a == x = a : primIgualesA1 a xs
                        | otherwise = primIgualesA1 a []

primIgualesA2:: (Eq a) => a -> [a] -> [a]
primIgualesA2 a xs = takeWhile (==a) xs
```
## Laboratorio 13
 La función `primIguales` toma una lista y devuelve el mayor tramo inicial de la lista cuyos
 elementos son todos iguales entre sí. 
```
primIguales1:: (Eq a) => [a] -> [a]
primIguales1 [] = []
primIguales1 (x:xs) = x : takeWhile (==x) xs

primIguales2:: (Eq a) => [a] -> [a]
primIguales2 xs = filter (== head xs) xs

primIguales3:: (Eq a) => [a] -> [a]
primIguales3 xs = primIgualesA (head xs) xs
```
 Honestamente no entendí que quiere.
##  Ejercicio 30 / Laboratorio 14
 
```
cuantGen :: (b-> b-> b)-> b-> [a]-> (a-> b)-> b
cuantGen op z [] t = z
cuantGen op z (x:xs) t = (t x) `op` (cuantGen op z xs t)
```
## Laboratorio 15
Definí una función primeros que cumplen, `primQueCumplen::[a]->(a->Bool)->[a]`, tal que, dada una lista `ls` y un predicado `p`, devuelve el tramo inicial de `ls` que cumple `p`.
```
primQueCumplen::[a]->(a->Bool)->[a]
primQueCumplen [] t= []
primQueCumplen ls t = takeWhile t ls
```

## Laboratorio 16

a) ¿Bien tipado? Lo de abajo es una tupla, las tuplas puede contener cosas de distinto tipo. De todas formas sería preferible escribir `f (a, b)`  para saber que hablamos de tuplas. Aunque puede que no esta mal porque asi diferenciamos del tipo.
```
f :: (a, b)-> ...
f (x , y) = ...
```
b) Mal tipado.  `f (a, b)` es útil si solamente vamos a trabajar sobre una tupla,  no sobre una lista. 
```
f :: [(a, b)]-> ...
f (a , b) = ...
```
c) Puede funcionar, depende de que se quiera hacer con la tupla. Probablemente usar `f ((a,b):xs)` sería más útil. Para poder sacar elementos de la tupla deberíamos usar operadores como fst o snd, al no haber referencias para matchear patrones.
```
f :: [(a, b)]-> ...
f (x:xs) = ...
```
d) Funcionar como funcionar, funciona, pero creo que preferiría escribir: `f ( (a, b) : (c,d) : xs )` 
```
f :: [(a, b)]-> ...
f ((x, y) : ((a, b) : xs)) = ...
```
e)  Funcionar como funcionar, funciona, evidentemente estamos restringiendo el primer elemento de la tupla a un 0. Tal vez para un análisis por casos sea útil.
```
f :: [(Int, a)]-> ...
f [(0, a)] = ...
```
f) Esta mal. En el patrón `1` es un número, no una variable `a` cualquiera. Posiblemente `f ((1, x) : xs)` es lo deseable.
```
 f :: [(Int, a)]-> ...
 f ((x, 1) : xs) = ...
```
g) Esta bien, a probablemente sea un operador matemático. 
``` 
 f :: (Int-> Int)-> Int-> ...
 f a b = ...
 ```
 h) Esta bien, a probablemente sea un operador matemático. Podría escribir algo del estilo: `f (^2) 3`. Desconozco la utilidad, pero poder como poderse se puede. 
 ```
 f :: (Int-> Int)-> Int-> ...
 f a 3 = ...
 ```
i) Esta mal. Probablemente arriba querríamos `f :: Int-> Int-> Int-> ...`. Sabra dios en que caso sera útil.
 ```
 f :: (Int-> Int)-> Int-> ...
 f 0 1 2 = ...
```
## Laboratorio 17
Para las siguientes declaraciones de funciones, da al menos una definición cuando sea posible. ¿Podés dar alguna otra definición alternativa a la que diste en cada caso?
**`a) f :: (a, b)-> b`**
`f (x,y) = x`
**`b) f :: (a, b) -> c`**
`f (x,y) = sonCoprimos x y`
**`c) f :: (a-> b)-> a-> b`**
`f (operador) x = operador x` Donde el operador puede ser algo como fromIntegral (Convierte un número de un tipo a otro dependiendo de como este declarada la función). No se.
**`d) f :: (a-> b)-> [a]-> [b]`**
No se, lo mismo de antes pero aplicado a una lista.
``