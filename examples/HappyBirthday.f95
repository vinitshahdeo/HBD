program HappyBirthday 
    implicit none
    
    character (len = 16)::ciphertext
    ciphertext = "Hyraa typbh!pid!"
    call decode (ciphertext)
    
end program HappyBirthday

subroutine decode (ciphertext)
    implicit none
    character (len = 16)::ciphertext
    integer::encodedChar
    integer::series
    integer::progress
    character::plaintext(16)
    integer::sentinel
    
    progress = 1
    print *, "Decoding: ", real(0) / 32 * 100, "% done"
    do series = 1, 4
        do encodedChar = series, 16, 4
            plaintext(progress) = ciphertext(encodedChar: encodedChar)
            print *, "Decoding: ", real(progress) / 16 * 100, "% done"
            progress = progress + 1
            call sleep(1)
        end do
    end do
    
    do series = 1, 16
        write(*, "(a1)", advance='no') plaintext(series)
    end do
end subroutine decode
