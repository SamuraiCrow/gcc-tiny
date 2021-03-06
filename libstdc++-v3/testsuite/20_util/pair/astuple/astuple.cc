// { dg-do compile }
// { dg-options "-std=gnu++11" }

// Copyright (C) 2013-2015 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <utility>
#include <type_traits>

typedef std::pair<int, long> test_type;

static_assert( std::tuple_size<test_type>::value == 2, "size is 2" );
static_assert( std::tuple_size<const test_type>::value == 2, "size is 2" );
static_assert( std::tuple_size<volatile test_type>::value == 2, "size is 2" );
static_assert( std::tuple_size<const volatile test_type>::value == 2,
               "size is 2" );

template<std::size_t N, typename T>
  using Tuple_elt = typename std::tuple_element<N, T>::type;

using std::is_same;

static_assert( is_same<Tuple_elt<0, test_type>, test_type::first_type>::value,
               "first type is int" );

static_assert( is_same<Tuple_elt<1, test_type>, test_type::second_type>::value,
               "second type is long" );

static_assert( is_same<Tuple_elt<0, const test_type>,
               const test_type::first_type>::value,
               "first type is const int" );

static_assert( is_same<Tuple_elt<1, const test_type>,
               const test_type::second_type>::value,
               "second type is const long" );

static_assert( is_same<Tuple_elt<0, volatile test_type>,
               volatile test_type::first_type>::value,
               "first type is volatile int" );

static_assert( is_same<Tuple_elt<1, volatile test_type>,
               volatile test_type::second_type>::value,
               "second type is volatile long" );

static_assert( is_same<Tuple_elt<0, const volatile test_type>,
               const volatile test_type::first_type>::value,
               "first type is const volatile int" );

static_assert( is_same<Tuple_elt<1, const volatile test_type>,
               const volatile test_type::second_type>::value,
               "second type is const volatile long" );
