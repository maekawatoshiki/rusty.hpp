#include "./rusty.hpp"
using namespace rs;

Option<i32> func() {
  return Some(42);
}

struct A {
  i32 *i;
};

int main() {
  i32 i;
  println("i = {}", func());
  println("i = {}", func().unwrap().borrow());
  auto a = A { &i };
  i = 123;
  println("i = {}", *a.i);
}
