// Copyright 2023 Flavien Solt, ETH Zurich.
// Licensed under the General Public License, Version 3.0, see LICENSE for details.
// SPDX-License-Identifier: GPL-3.0-only

#include "Vtop.h"
#include "verilated.h"
#include <iostream>

typedef Vtop Module;

int main(int argc, char **argv, char **env) {

  Verilated::commandArgs(argc, argv);

  Module *my_module = new Module;

  my_module->clkin_data = my_module->clkin_data & 0xFFFFFFFF00000000ULL;
  my_module->eval();
  std::cout << "out 0 = " << my_module->out_data << std::endl;

  my_module->clkin_data = 0xFFFFFFFF00000000ULL & my_module->clkin_data;
  my_module->eval();
  std::cout << "out 1 = " << my_module->out_data << std::endl;

  my_module->in_data = 0x00000010;
  my_module->eval();
  std::cout << "out 2 = " << my_module->out_data << std::endl;

  my_module->eval();
  std::cout << "out 3 = " << my_module->out_data << std::endl;

  delete my_module;
  exit(0);
}
