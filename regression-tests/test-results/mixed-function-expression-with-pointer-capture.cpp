
#line 1 "mixed-function-expression-with-pointer-capture.cpp2"
#include <vector>
#include <ranges>
#include <string>
#include <span>
#include <algorithm>
#include <iostream>

#include "cpp2util.h"

#line 8 "mixed-function-expression-with-pointer-capture.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 definitions ==========================================================


#line 8 "mixed-function-expression-with-pointer-capture.cpp2"
[[nodiscard]] auto main() -> int{
    std::vector<std::string> vec {
               "hello", "2023"}; 
    std::span view {vec}; 

    std::string y {"\n"}; 
    std::ranges::for_each( view, [_0 = (&y)](auto const& x) -> void{
        std::cout << CPP2_UFCS_0(c_str, (*cpp2::assert_not_null((_0)))) << x << *cpp2::assert_not_null(_0);
    } );

    auto callback {[](auto& x) -> void { x += "-ish"; }}; 
    std::ranges::for_each( view, std::move(callback));

    for ( auto const& cpp2_range = view;  auto const& str : cpp2_range ) 
        std::cout << str << "\n";
}

