#!/usr/bin/env ruby
N,K = gets.split.map(&:to_i)
ary = Array.new(N,0)
(0...K).each do
  d = gets.chomp.to_i
  a = gets.split.map(&:to_i)
  a.each do |i|
    ary[i-1] += 1
  end
end
z = 0
ary.each do |i|
  z += 1 if i == 0
end
puts z
