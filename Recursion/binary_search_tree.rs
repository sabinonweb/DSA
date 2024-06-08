fn main() {
    let arr = [74, 77, 29, 12, 10, 73, 87, 97, 98, 100];
    let min = 0;
    let max = arr.len() - 1;
    let mid = (min + max) / 2;
    
    println!("{}", bst(&arr[..], 73, mid));
}

fn bst(arr: &[u32], target: u32, mut mid: usize) -> bool {
    if arr.len() == 1 {
        println!("called");
        return target == arr[1];
    } else {
        println!("else");
        let mut min = 0;
        let mut max = arr.len() - 1;
        if arr[mid] < target {
            println!("else if");
            min = mid + 1;
            println!("ei min {}", min);
            mid = (min + max) / 2;
            println!("ei mid {}", mid);
            return bst(&arr[..],target, mid);
        } else {
            println!("else else");
            max = mid - 1;
            println!("ee max {}", max);
            mid = (min + max) / 2;
            println!("ee mid {}", mid);
            return bst(&arr[..], target, mid);
        }
    }
}


