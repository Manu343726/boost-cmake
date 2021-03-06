//  (C) Copyright Raffi Enficiaud 2014.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.

//[example_code
#define BOOST_TEST_MODULE boost_test_container_c
#include <boost/test/included/unit_test.hpp>
#include <sstream>
#include <map>
#include <vector>

BOOST_AUTO_TEST_CASE( test_collections_not_on_c_arrays )
{
  int a[] = {1, 2, 3};
  int b[] = {1, 5, 3, 4};
  BOOST_TEST(a == b);
}
//]
