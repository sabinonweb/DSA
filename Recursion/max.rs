fn main() {
    let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 73];
    println!("{}", max(&arr[..]));
}

fn max(arr: &[u32]) -> u32 {
    if arr.len() == 2 {
        if arr[0] < arr[1] {
            return arr[1];
        } else {
            return arr[0];
        }
    } 
    let max = max(&arr[1..]);
    return max;
}
