// URL: https://atcoder.jp/contests/abc164/submissions/15090523
// Date: Wed, 08 Jul 2020 15:07:17 +0000
// Language: Rust (1.42.0)
use std::io::*;

fn main() {
    let mut s = String::new();
    stdin().read_to_string(&mut s).unwrap();
    println!("{}", s.lines().skip(1).collect::<std::collections::HashSet<_>>().len());
}
