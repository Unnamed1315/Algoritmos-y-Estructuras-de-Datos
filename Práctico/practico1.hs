-- Laboratorio 7
paraTodo :: [a] -> (a -> Bool) -> Bool
paraTodo [ ] t = True
paraTodo (x:xs) t = t x && paraTodo xs t

existe :: [a] -> (a-> Bool) -> Bool
existe [ ] t = False
existe (x:xs) t = t x || existe xs t

sumatoria ::  [a] -> (a-> Int) -> Int
sumatoria [ ] t = 0
sumatoria (x:xs) t = t x + sumatoria xs t

productoria ::  [a] -> (a-> Int) -> Int
productoria [ ] t = 1
productoria (x:xs) t = t x * productoria xs t

--hagamos de cuenta de que hice el laboratorio 8

-- Laboratorio 9
esPar :: Int-> Bool
esPar x = mod x 2 == 0

todosPares :: [Int]-> Bool
todosPares (x:xs) = paraTodo (x:xs) esPar

todosPares2 :: [Int]-> Bool
todosPares2 xs = all even xs

--
esMultiplo :: Int -> Int -> Bool
esMultiplo x y = mod x y == 0

hayMultiplo :: Int-> [Int]-> Bool 
hayMultiplo n xs = existe xs (\y -> esMultiplo y n)

hayMultiplo2 :: Int-> [Int]-> Bool 
hayMultiplo2 n xs = any (\y-> esMultiplo y n) xs
--
sumaCuadrados :: Int-> Int
sumaCuadrados n = sum (map (^2) [1..n])

potencia :: Int -> Int -> Int
potencia x 1 = x
potencia x n = x * potencia x (n-1)

sumaCuadra2 :: Int-> Int
sumaCuadra2 n = sum (map (\x->potencia x 2) [1..n])

sumaCuadra3 :: Int-> Int
sumaCuadra3 n = sumatoria [1..n] (\x->potencia x 2)

--
existeDivisor::Int-> [Int]-> Bool
existeDivisor n ls = existe ls (\x-> mod n x == 0)
--
esPrimo :: Int -> Bool
esPrimo x = not (existeDivisor x [2..(x-1)])

esPrimo2 :: Int -> Bool
esPrimo2 x  | x > 1 = not (existeDivisor x [2..(x-1)])
            | otherwise = False
--
factorial :: Int -> Int
factorial n = product [1..n]

factorial2 :: Int -> Int
factorial2 n = productoria [1..n] (*1)
--
multiplicaPrimos :: [Int]-> Int
multiplicaPrimos xs = product (filter esPrimo xs)

multiplicaPrimos2 :: [Int]-> Int
multiplicaPrimos2 xs = productoria (filter esPrimo xs) (*1)

-- 
fib:: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)

fib2:: Float -> Float
fib2 z = fromIntegral (round (((1 + sqrt 5) / 2)**z/sqrt 5))

esfib :: Int -> Bool
esfib n = existe [0..n+1] (\x-> fib x == n)

esfib2 :: Float -> Bool
esfib2 n = existe [0..n+1] (\x-> fib2 x == n)

todosFib :: [Float]-> Bool
todosFib xs = paraTodo xs esfib2
--
duplicaLista1:: [Int] -> [Int]
duplicaLista1 [] = []
duplicaLista1 (x:xs) = x *2 : duplicaLista1 xs

duplicaLista2:: [Int] -> [Int]
duplicaLista2 xs = map (*2) xs
--
listaPrima1:: [Int] -> [Int]
listaPrima1 [] = []
listaPrima1 (x:xs)  | esPrimo x = x: listaPrima1 xs
                    | otherwise = listaPrima1 xs

listaPrima2:: [Int] -> [Int]
listaPrima2 xs = filter esPrimo xs

--
primIgualesA1:: (Eq a) => a -> [a] -> [a]
primIgualesA1 a [] = []
primIgualesA1 a (x:xs)  | a == x = a : primIgualesA1 a xs
                        | otherwise = primIgualesA1 a []

primIgualesA:: (Eq a) => a -> [a] -> [a]
primIgualesA a xs = takeWhile (==a) xs
--
primIguales1:: (Eq a) => [a] -> [a]
primIguales1 [] = []
primIguales1 (x:xs) = x : takeWhile (==x) xs

primIguales2:: (Eq a) => [a] -> [a]
primIguales2 xs = filter (== head xs) xs

primIguales3:: (Eq a) => [a] -> [a]
primIguales3 xs = primIgualesA (head xs) xs
--
cuantGen :: (b-> b-> b)-> b-> [a]-> (a-> b)-> b
cuantGen op z [] t = z
cuantGen op z (x:xs) t = (t x) `op` (cuantGen op z xs t)
--
primQueCumplen::[a]->(a->Bool)->[a]
primQueCumplen [] t= []
primQueCumplen ls t = takeWhile t ls

f :: Int-> Int-> Int-> Int
f 1 2 3= 1 + 2 + 3