module Main where

simple :: Int -> Int
simple x | x<=1 = 1
simple x | rem x 2 == 0 = simple (x `div` 2) + simple ((x `div` 2) - 1)
simple x | rem x 2 == 1 = simple ((x-1) `div` 2) - simple ((x-3) `div` 2)

main :: IO ()
main = getLine >>= putStrLn . show . simple . read
