fn print_number(i: u32) {
    if i <= 0 { 
        return;
    }
    println!("{}",i);
    print_number(i - 1);
}

fn main() {
    print_number(10);
}
