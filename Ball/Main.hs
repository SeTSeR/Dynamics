module Main where

ball :: Int -> Int
ball 1 = 1
ball 2 = 1
ball 3 = 2
ball n | n>3 = ball (n-1) + ball (n-2) + ball (n-3)

main :: IO ()
main = getLine >>= putStrLn . show . ball . (+1) . read
