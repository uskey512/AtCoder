#!/usr/bin/env ruby
n = gets.chomp.to_i
s = ''
loop do
  n -= 1
  s = s + (n % 26 + 'a'.ord).chr.to_s
  n = n / 26
  break if n == 0
end
puts s.reverse