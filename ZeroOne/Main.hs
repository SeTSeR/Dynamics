module Main where

fibonacci :: Int -> Int
fibonacci x | x<=1 = x+1
fibonacci x | x>1 = fibonacci (x-1) + fibonacci (x-2)

main :: IO ()
main = getLine >>= putStrLn . show . fibonacci . read
