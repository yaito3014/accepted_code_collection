// URL: https://atcoder.jp/contests/abs/submissions/16512367
// Date: Sat, 05 Sep 2020 04:11:04 +0000
// Language: Haskell (GHC 8.8.3)
main = do
  a <- readLn :: IO Int
  [b, c] <- map read . words <$> getLine :: IO [Int]
  s <- getLine
  putStrLn $ show (a + b + c) ++ " " ++ s
