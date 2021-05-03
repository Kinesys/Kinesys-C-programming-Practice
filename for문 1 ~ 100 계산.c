fn main() {
    let mut x = 1;
    let y = 100;
    let mut sum = 0;

    println!("1 ~ 100까지의 합을 계산합니다.\n");

    while x <= y {
        sum = sum + x;
        x = x + 1;
    }
    println!("1부터 100까지의 합은 {:?}입니다.\n", sum);
}
