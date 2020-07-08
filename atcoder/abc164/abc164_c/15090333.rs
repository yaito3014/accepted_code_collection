// URL: https://atcoder.jp/contests/abc164/submissions/15090333
// Date: Wed, 08 Jul 2020 15:00:02 +0000
// Language: Rust (1.42.0)
#[proconio::fastout]
fn main() {
    proconio::input! {
        n: usize,
        mut s: [String;n]
    }
    let mut s: Vec<String> = s;
    s.sort();
    let mut ans = 0;
    let mut prv = String::new();
    for v in s {
        if prv != v {
            ans += 1;
        }
        prv = v;
    }
    println!("{}", ans);
}
