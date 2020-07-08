// URL: https://atcoder.jp/contests/abc164/submissions/15085896
// Date: Wed, 08 Jul 2020 11:55:29 +0000
// Language: Rust (1.42.0)
use std::io::{stdin, Read};
use std::collections::BTreeSet;

fn main() {
    let mut s = String::new();
    stdin().read_to_string(&mut s).unwrap();
    let tree: BTreeSet<&str> = s.lines().skip(1).collect();
    println!("{}", tree.len());
}
