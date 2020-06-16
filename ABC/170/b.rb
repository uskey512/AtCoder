#!/usr/bin/env ruby
N,M = gets.chomp.split.map(&:to_i)
(0...N+1).each do |i|
  if (i * 2 + (N - i) * 4) == M
    puts "Yes"
    return
  end
end
puts "No"


