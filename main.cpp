#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor = torch::rand({2, 3});
  torch::Device device(torch::kCUDA, 0);
  tensor.to(device);
  std::cout << tensor << std::endl;
}

