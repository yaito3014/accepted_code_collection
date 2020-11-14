// URL: https://codeforces.com/contest/1431/submission/98382568
// Date: Sat, 14 Nov 2020 13:45:12 +0000
// Language: Kotlin
﻿fun main() {
  val t = readLine()!!.toInt()
  (1..t).forEach {
    val n = readLine()!!.toInt()
    val ans = readLine()!!
      .split(" ")
      .map { it.toLong() }
      .sortedDescending()
      .mapIndexed { i, v -> (i + 1) * v }
      .max()
    println(ans)
  }
}
