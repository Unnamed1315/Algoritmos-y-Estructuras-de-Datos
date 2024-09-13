-- Laboratorio 1
sum_cuad:: [Int] -> Int
sum_cuad [] = 0
sum_cuad (x:xs)  = (x*x) + sum_cuad xs

iga:: Int -> [Int] -> Bool
iga e [ ] = True
iga e (x:xs) = (x==e) && iga e xs

exp':: Int -> Int -> Int
exp' x 0 = 1
exp' x n = x * (exp' x (n-1))

sum_par:: Int -> Int
sum_par 0 = 0
sum_par n   | (mod n 2 == 0) = sum_par (n-1) + n
            | (mod n 2 /= 0) = sum_par (n-1)

cuantos:: (a->Bool)->[a]-> Int
cuantos p [] = 0
cuantos p (x:xs)| p x = 1 + cuantos p xs
                | not (p x) = cuantos p xs

--Laboratorio 2    
--a y b        
data Carrera = Matematica | Fisica | Computacion | Astronomia
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Computacion"
titulo Astronomia = "Licenciatura en Astronomia"

{-
titulo n = case n of
    Matematica    -> "Licenciatura en matematica"
    Fisica        -> "Licenciatura en fisica"
    Computacion   -> "Licenciatura en computacion"
    Astronomia    -> "Licenciatura en astronomia"
-}

{-Tambien  hay una tercera forma 

titulo n|n == Matematica = "Licenciatura en Matematica"
        |n == Fisica = "Licenciatura en Fisica"
        |n == Computacion = "Licenciatura en Computacion"
        |n == Astronomia = "Licenciatura en Astronomia"

Pero no sirve, creo que es porque Carrera no es Eq
-}        

--c y d
{-
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si
    deriving(Eq, Ord, Bounded)
-}
cifradoAmericano:: NotaBasica -> Char
{-
cifradoAmericano Do = 'C'
cifradoAmericano Re = 'D'
cifradoAmericano Mi = 'E'
cifradoAmericano Fa = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La = 'A'
cifradoAmericano Si = 'B'
-}
cifradoAmericano n = case n of 
                            Do -> 'C'
                            Re -> 'D'
                            Mi -> 'E'
                            Fa -> 'F'
                            Sol -> 'G'
                            La -> 'A'
                            Si -> 'B'

--Laboratorio 3
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si
    deriving(Eq, Ord, Bounded, Show)

--Laboratorio 3
--a
minimoElemento:: (Ord a) => [a] -> a
minimoElemento [x] = x
minimoElemento (x:xs) = min x (minimoElemento xs)
--b
minimoElemento':: (Bounded a, Ord a) => [a] -> a
minimoElemento' [ ] = maxBound
minimoElemento' (x:xs) = min x (minimoElemento' xs)

--Laboratorio 5
--a
-- Sinónimos de tipo
type Altura = Int
type NumCamiseta = Int

-- Tipos algebráicos sin parámetros (aka enumerados)
data Zona = Arco | Defensa | Mediocampo | Delantera
data TipoReves = DosManos | UnaMano
data Modalidad= Carretera | Pista | Monte | BMX
data PiernaHabil= Izquierda | Derecha
-- Sinónimo
type ManoHabil = PiernaHabil

--Deportista es un tipo algebráico con constructores paramétricos
data Deportista = Ajedrecista
                | Ciclista Modalidad
                | Velocista Altura
                | Tenista TipoReves ManoHabil Altura
                | Futbolista Zona NumCamiseta PiernaHabil Altura

--b 
{-¿Cuál es el tipo del constructor ciclista?
El constructor ciclista es del tipo deportista, ya que al utilizarlo en una expresión, genera un valor del tipo deportista.
-}

--c

contarVelocistas :: [Deportista] -> Int
contarVelocistas [] = 0
contarVelocistas ((Velocista _):xs) = 1 + contarVelocistas xs
contarVelocistas (_:xs) = contarVelocistas xs

{-
contarFutbolistas :: [Deportista] -> Zona -> Int
contarFutbolistas [] z = 0
contarFutbolistas ((Futbolista x _ _ _):xs) z | z == x = 1 + contarFutbolistas xs z
                                              | z /= x = contarFutbolistas xs z
contarFutbolistas (_:xs) z = contarFutbolistas xs z

Esta opción es valida si uso 
data Zona = Arco | Defensa | Mediocampo | Delantera
    deriving(Eq)
-}
contarFutbolistas :: [Deportista] -> Zona -> Int
contarFutbolistas [] z = 0
contarFutbolistas ((Futbolista x _ _ _):xs) z = cntMismaZona x z + contarFutbolistas xs z
    where
        cntMismaZona:: Zona -> Zona -> Int
        cntMismaZona Arco Arco = 1
        cntMismaZona Defensa Defensa = 1
        cntMismaZona Mediocampo Mediocampo = 1
        cntMismaZona Delantera Delantera = 1
        cntMismaZona _ _ = 0
contarFutbolistas (_:xs) z = contarFutbolistas xs z

contarFutbolistas2 :: [Deportista] -> Zona -> Int
contarFutbolistas2 [] z = 0
contarFutbolistas2 xs z = length (filter (mismaZona z) xs)
    where
        mismaZona:: Zona -> Deportista -> Bool
        mismaZona Arco (Futbolista Arco _ _ _) = True
        mismaZona Defensa (Futbolista Defensa _ _ _) = True
        mismaZona Mediocampo (Futbolista Mediocampo _ _ _) = True
        mismaZona Delantera (Futbolista Delantera _ _ _) = True
        mismaZona z _ = False


