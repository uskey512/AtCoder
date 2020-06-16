#!/usr/bin/env ruby
N,M = gets.chomp.split(" ").map(&:to_s)
Ni = N.to_i
Mi, Mf = M.split(".").map(&:to_i)
M100 = Mi * 100 + Mf

puts Ni*M100/100