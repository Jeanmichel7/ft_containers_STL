/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:57:17 by jrasser           #+#    #+#             */
/*   Updated: 2022/10/27 18:34:45 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAIN_HPP__
# define __MAIN_HPP__

# define RED "\033[0;31m"
# define GRN "\033[0;32m"
# define YEL "\033[0;33m"
# define BLU "\033[0;34m"
# define MAG "\033[0;35m"
# define CYA "\033[0;36m"
# define WHT "\033[0;37m"
# define END "\033[0m"
# define BILLION 1000000000L

# include <iostream>
# include <sstream>
# include <string>
# include <typeinfo>
# include <list>


# include "chrono.hpp"
# include "convert.hpp"
# include "utils.hpp"

# include <vector>
# include "vector.hpp"
# include <map>
# include "map.hpp"
# include <stack>
# include "stack.hpp"
# include <queue>


/* ***************************************************** */
/*                        VECTOR                         */
/* ***************************************************** */
void tester_vector(void);

/* include vector */



template< typename vector_type >
void tester_vector_type();
// #include <typeinfo>     // typeid




/* ***************************************************** */
/*                         MAP                           */
/* ***************************************************** */

template< typename type_key_map, typename type_value_map >
void tester_map_type();


// template< typename T1, typename T2>
// void sstr_comp(T1 it, T2 ft_it, std::string msg);

template< typename T1, typename T2>
void sstr_comp(T1 it, T2 ft_it, std::string msg);

template <typename M1, typename M2>
void	comp_map( M1 &map, M2 &ft_map, std::string msg);

template < typename T_map, typename T_pair, typename type_key_map, typename type_value_map>
void fill_map(T_map *map);

void tester_map(void);



/* ***************************************************** */
/*                        STACK                          */
/* ***************************************************** */

void tester_stack(void);

template< typename type_value, class type_container >
void tester_stack_container_type();

template< typename type_value >
void tester_stack_type();






/* ***************************************************** */
/*                        UTILS                          */
/* ***************************************************** */
void display_title(std::string title);


template <typename T>
std::string to_string(T value);

void str_comp(std::string str, std::string ft_str, std::string msg);



/* ***************************************************** */
/*                        CHRONO                         */
/* ***************************************************** */




/* ***************************************************** */
/*                       CONVERT                         */
/* ***************************************************** */

// template <typename T>
// std::string tostr(T value);

#endif