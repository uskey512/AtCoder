#!/usr/bin/env ruby
N,M,X = gets.chomp.split.map(&:to_i)
MAP = N.times.map { gets.split.map(&:to_i) }

ans  = 1e8
all  = 1<<N
mask = 0
while mask < all
  ary  = Array.new(M,0)
  cost = 0
  (0...N).each do |i|
    if mask>>i&1 == 1
      (0...M).each do |j|
        ary[j] += MAP[i][j+1]
      end
      cost += MAP[i][0]
    end
  end
  ok = true
  (0...M).each do |i|
    if ary[i] < X
      ok = false
      break
    end
  end
  if ok
    ans = [ans, cost].min
  end
  mask += 1
end

puts ans == 1e8 ? -1 : ans
