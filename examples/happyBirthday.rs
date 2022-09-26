// Drawing adapted from `https://github.com/mgattozzi/ferris-says/` by 'mgattozzi'
const DRAWING: &str = "
        \\
         \\
            _~^~^~_
        \\) /  o o  \\ (/
          '_   -   _'
          / '-----' \\
";

fn hbd(_name: &str) -> i32 {
    let hbd_msg: String = format!(" Happy birthday, {} !", _name);
    println!("  {}", "_".repeat(hbd_msg.len()));
    println!("< {} >", hbd_msg);
    print!("  {}", "‾".repeat(hbd_msg.len()));
    println!("{}", DRAWING);
    return 0;
}

fn main() {
    hbd("Marco");
}
