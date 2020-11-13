// URL: https://atcoder.jp/contests/abs/submissions/18081327
// Date: Fri, 13 Nov 2020 14:56:36 +0000
// Language: Kotlin (1.3.71)
fun main() {
  val (a, b, c, x) = (0..3).map{readLine()!!.toInt()}
  var ans = 0
  for (i in (0..a))
    for (j in (0..b))
      for (k in (0..c))
        if (i * 500 + j * 100 + k * 50 == x)
          ++ans
  println(ans)
}
