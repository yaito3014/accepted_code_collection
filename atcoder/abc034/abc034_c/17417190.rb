// URL: https://atcoder.jp/contests/abc034/submissions/17417190
// Date: Fri, 16 Oct 2020 04:25:03 +0000
// Language: Ruby (2.7.1)
# from chicken1925
$mod = 1000000007
$fac = Array.new(5700000,0)
$finv = Array.new(5700000,0)
$inv = Array.new(5700000,0)
public
def COMinit
  $fac[0],$fac[1],$finv[0],$finv[1],$inv[1] = 1,1,1,1,1;
  (2..5700000).each do |i|
    $fac[i] = $fac[i - 1] * i % $mod
    $inv[i] = $mod - $inv[$mod % i] * ($mod / i) % $mod
    $finv[i] = $finv[i - 1] * $inv[i] % $mod
  end
  return
end
def COM(n,k)
  if n < k
    return 0
  end
  if n < 0 || k < 0
    return 0
  end
  $fac[n] * ($finv[k] * $finv[n - k] % $mod) % $mod
end


n,k = gets.split.map(&:to_i)
n -= 1
k -= 1
n += k
self.COMinit
puts COM(n,k)
