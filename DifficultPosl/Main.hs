module Main where

difficult :: Int -> Int
difficult x | x<=1 = 1
difficult x | rem x 2 == 0 = difficult (x `div` 2) + 1
difficult x | rem x 2 == 1 = difficult (x+1) + difficult ((x-1) `div` 2)

main :: IO ()
main = getLine >>= putStrLn . show . difficult . read
