function quicksort(array)
  if length(array) < 2
    return array
  end

  pivot = choose_pivot(array)
  beginning, middle, ending = Int64[], Int64[], Int64[]
  for element in array
    if element < pivot
      push!(beginning, element)
    elseif element == pivot
      push!(middle, element)
    else
      push!(ending, element)
    end
  end
  beginning = quicksort(beginning)
  ending = quicksort(ending)
  beginning = append!(beginning, middle)
  append!(beginning, ending)
end

function choose_pivot(array)
  (array[1] + array[end])/2.0
end
