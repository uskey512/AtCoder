#!/usr/bin/env ruby
def dfs(idx, c, ary)
  if idx == N
    (0...M).each do |i|
      return 1e8 if ary[i] < X
    end
    return c
  end
  newary = ary.dup
  (0...M).each do |i|
    newary[i] += MAP[idx][i+1]
  end

  [
      dfs(idx + 1, c, ary),
      dfs(idx + 1, c + MAP[idx][0], newary)
  ].min
end

N,M,X = gets.chomp.split.map(&:to_i)
MAP = N.times.map { gets.split.map(&:to_i) }
res = dfs(0, 0, Array.new(M, 0))
puts res == 1e8 ? -1 : res



