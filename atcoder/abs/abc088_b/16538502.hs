// URL: https://atcoder.jp/contests/abs/submissions/16538502
// Date: Sun, 06 Sep 2020 08:42:09 +0000
// Language: Haskell (GHC 8.8.3)
import Data.List

main = do
  _ <- getLine
  a <- reverse . sort <$> map read . words <$> getLine :: IO [Integer]
  let (alice, bob) = partition (even . snd) (zip a [0..])
      f = (.sum.map fst).(-).sum.map fst
  print $ f alice bob
