#!/usr/bin/env ruby
N,K = gets.chomp.split.map(&:to_i)
p = gets.chomp.split.map(&:to_i).sort
sum = 0

K.times do |i|
  sum += p[i]
end
puts sum