// URL: https://atcoder.jp/contests/abs/submissions/18087266
// Date: Sat, 14 Nov 2020 04:53:40 +0000
// Language: Kotlin (1.3.71)
fun main() {
  readLine()
  val ans = readLine()!!
    .split(" ")
    .map { it.toInt() }
    .sortedDescending()
    .mapIndexed { i, v -> if (i % 2 == 0) v else -v }
    .sum()
  println(ans)
}
