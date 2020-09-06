// URL: https://atcoder.jp/contests/abs/submissions/16535821
// Date: Sun, 06 Sep 2020 06:40:05 +0000
// Language: Haskell (GHC 8.8.3)
import Data.List

stridedSum [] = (0, 0)
stridedSum [x] = (x, 0)
stridedSum (x:y:zs) = (x + x', y + y')
  where (x', y') = stridedSum zs

main = do
  n <- readLn :: IO Int
  a <- reverse <$> sort <$> map read . words <$> getLine :: IO [Int]
  let (alice, bob) = stridedSum a in print $ alice - bob
