// URL: https://atcoder.jp/contests/abs/submissions/18096667
// Date: Sat, 14 Nov 2020 13:18:53 +0000
// Language: Kotlin (1.3.71)
fun main() {
  val (n, y) = readLine()!!.split(" ").map { it.toInt() }
  var ans = listOf(-1, -1, -1)
  (0..n).forEach o@{ oit ->
    (0..n - oit).forEach {
      if (10000 * oit + 5000 * it + 1000 * (n - oit - it) == y) {
        ans = listOf(oit, it, (n - oit - it))
        return@o
      }
    }
  }
  println(ans.joinToString(" "))
}
