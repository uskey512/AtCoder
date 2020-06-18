#!/usr/bin/env ruby
N = gets.to_i
S = gets.to_s

if S.size < N
  puts S
else
  puts S.slice!(0, N) + "..."
end
