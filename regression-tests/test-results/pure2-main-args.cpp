
#define CPP2_USE_MODULES         Yes

#include "cpp2util.h"

#line 1 "pure2-main-args.cpp2"
auto main(int const argc_, char const* const* const argv_) -> int;

//=== Cpp2 definitions ==========================================================

#line 1 "pure2-main-args.cpp2"
auto main(int const argc_, char const* const* const argv_) -> int { 
    auto args = cpp2::make_args(argc_, argv_); 
#line 2 "pure2-main-args.cpp2"
    std::cout << "args.argc is " + cpp2::to_string(args.argc) + ", and args.argv[0] is " + cpp2::to_string(cpp2::assert_in_bounds(args.argv, 0)) + "\n"; }

