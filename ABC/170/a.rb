#!/usr/bin/env ruby
N = gets.chomp.split.map(&:to_i)
result = 0
N.each do |n|
  result += 1
  if n == 0
    puts result
    return
  end
end
