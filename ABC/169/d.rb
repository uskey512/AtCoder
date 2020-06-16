#!/usr/bin/env ruby
require 'prime'

factors = gets.to_i.prime_division
result = 0

factors.each do |i|
  a = 1
  while a <= i[1]
    i[1] -= a
    a += 1
    result += 1
  end
end

puts result

