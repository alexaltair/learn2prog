# Declare what kind of Array
function quicksort{T}(array::Array{T})
    if length(array) < 2
        return array
    end

    pivot = choose_pivot(array)
    beginning, middle, ending = T[], T[], T[]
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

function choose_pivot(array::Array)
    array[rand(1:length(array))]
end

function choose_pivot{T<:Number}(array::Array{T})
    array[1]/2.0 + array[end]/2.0
end

quicksort_static{T}(array::Array{T}) = quicksort_static(array, 1, length(array))

function quicksort_static{T}(array::Array{T}, start_index, end_index)
    if start_index >= end_index
        return nothing
    end

    pivot = array[start_index]

    start_pointer = start_index + 1
    end_pointer = end_index

    while start_pointer <= end_pointer
        if array[start_pointer] < pivot
            array[start_pointer-1] = array[start_pointer]
            array[start_pointer] = pivot
            start_pointer += 1
            if start_pointer > end_pointer
                end_pointer -= 1
            end
        else
            temp = array[end_pointer]
            array[end_pointer] = array[start_pointer]
            array[start_pointer] = temp
            end_pointer -= 1
            if start_pointer > end_pointer
                start_pointer += 1
            end
        end
    end

    quicksort_static(array, start_index, end_pointer)
    quicksort_static(array, start_pointer, end_index)

    nothing
end


@time begin
    quicksort_static(rand(Int64, 40_000_000))
    gc()
    nothing
end

@time begin
    quicksort(rand(Int64, 40_000_000))
    gc()
    nothing
end
