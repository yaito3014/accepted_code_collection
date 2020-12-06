// URL: https://atcoder.jp/contests/arc110/submissions/18605473
// Date: Sun, 06 Dec 2020 01:01:06 +0000
// Language: Rust (1.42.0)
use proconio::input;
use num::integer::lcm;

fn main() {
  input! { n: u64, }
  let ans = (2..=n).fold(1, lcm) + 1;
  println!("{}", ans);
}
