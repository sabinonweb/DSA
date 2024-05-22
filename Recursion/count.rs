fn main() {
    let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
    println!("{}", count(&arr[..]));
}

fn count(arr: &[u32]) -> u32 {
    if arr.len() == 0 {
        return 0;
    } 
    return 1 + count(&arr[1..]);
}
