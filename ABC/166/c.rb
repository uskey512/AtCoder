#!/usr/bin/env ruby
N,M = gets.split.map(&:to_i)
H = gets.split.map(&:to_i)
h = H.dup
MAP = M.times.map { gets.split.map(&:to_i) }

(0...M).each do |i|
  a = MAP[i][0] - 1
  b = MAP[i][1] - 1
  if H[a] == H[b]
    h[a] = h[b] = 0
  elsif H[a] < H[b]
    h[a] = 0
  else
    h[b] = 0
  end
end
res = 0
(0...N).each do |i|
  res += 1 if h[i] != 0
end
puts res