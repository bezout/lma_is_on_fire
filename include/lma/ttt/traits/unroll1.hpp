/**

\file
\author Datta Ramadasan
//==============================================================================
//         Copyright 2015 INSTITUT PASCAL UMR 6602 CNRS/Univ. Clermont II
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================

*/

#ifndef __MODULES_TTT_TRAITS_UNROLL1_HPP__
#define __MODULES_TTT_TRAITS_UNROLL1_HPP__

#include <lma/ttt/traits/int.hpp>

namespace ttt
{
  template<size_t D, size_t F, class Func> void unroll(Func);
  
  template<size_t F, class Func> inline void unroll(Func const &, lma::Int<F> const &, lma::Int<F> const &) {}
  
  template<size_t D, size_t F, class Func> inline void unroll(Func func, lma::Int<D> const &, lma::Int<F> const &)
  {
    func(lma::Int<D>());
    ttt::unroll<D+1,F>(func);
  }

  template<size_t D, size_t F, class Func> inline void unroll(Func func)
  {
    ttt::unroll(func,lma::Int<D>(),lma::Int<F>());
  }
}

#endif
