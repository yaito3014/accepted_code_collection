// URL: https://atcoder.jp/contests/abc176/submissions/18918046
// Date: Mon, 21 Dec 2020 04:22:13 +0000
// Language: Rust (1.42.0)
use proconio::input;
use num::bigint::BigInt;

fn main() {
  input!{ n: String }
  let bi = BigInt::parse_bytes(&n.into_bytes(), 10).unwrap();
  if bi % 9 == 0.into() {
    println!("Yes");
  } else {
    println!("No");
  }
}
