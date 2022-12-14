/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enable_if.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:33:30 by jrasser           #+#    #+#             */
/*   Updated: 2022/11/01 23:37:32 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENABLE_IF_HPP
# define ENABLE_IF_HPP

namespace ft {

template <bool B, class T = void> struct enable_if {};
template <class T> struct enable_if<true, T> { typedef T type; };

} // namespace ft



#endif