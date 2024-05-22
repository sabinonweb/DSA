fn main() {
    println!("{}", factorial(7));
}

fn factorial(i: u32) -> u32 {
    if i == 1 {
        return 1;
    } else {
        return i * factorial(i - 1);
    }
}
