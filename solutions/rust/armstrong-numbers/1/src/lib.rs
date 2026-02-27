pub fn is_armstrong_number(num: u32) -> bool {
    let number = num;
    let number_vector :Vec<u32> = number.to_string().chars().filter_map(|num| num.to_digit(10)).collect();
    let mut armstrongnumber :u128= 0;
    let number_length = number_vector.len();
    for x in number_vector{
        armstrongnumber+=x.pow(number_length as u32) as u128;
    }
    return armstrongnumber == number as u128;
    
    unimplemented!("true if {num} is an armstrong number")
}
