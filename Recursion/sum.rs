fn main() {
    let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
    println!("sum {:?}", sum(&arr[..]));
}

fn sum(arr: &[i32]) -> i32 { 
    if arr.len() ==  0 {
        return 0;
    } 
    return sum(&arr[1..]) + arr[0]; 
}
