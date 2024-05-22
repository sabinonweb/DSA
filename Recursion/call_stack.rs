fn main() {
    // main function is in the top of the stack
    println!("Hello sabinonweb!");
    // greet function is in the top of the stack
    greet(String::from("bunnylol"));
    // greet function is popped off the stack
    println!("Say bye");
    // greet2 is in the top of the stack
    greet2(String::from("Saptakoshi"));
    // greet2 is popped off the stack
    // There is nothing to do here now so main function is also popped off the stack
}

fn greet(name: String) {
    println!("Hello, {name}");
}

fn greet2(name: String) {
    println!("Bye {name}");
}

