#include <gtest/gtest.h>
#include "odbc_handler.h"

void PrintVersion() {

  std::cout <<"Retrieving BBF version...\n";  
  std::cout<<"Running on BBF version: " << RetrieveBbfVersion() << "\n";
  return;
}

int main(int argc, char **argv) {

  PrintVersion();

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}