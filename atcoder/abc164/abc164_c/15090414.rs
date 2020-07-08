// URL: https://atcoder.jp/contests/abc164/submissions/15090414
// Date: Wed, 08 Jul 2020 15:02:41 +0000
// Language: Rust (1.42.0)
use std::collections::HashSet;

#[proconio::fastout]
fn main() {
    proconio::input! {
        n: usize,
        s: [String;n]
    }
    println!("{}", s.iter().collect::<HashSet<_>>().len());
}
