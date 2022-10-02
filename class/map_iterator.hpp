// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   map_iterator.hpp                                   :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/09/12 15:27:13 by jrasser           #+#    #+#             */
// /*   Updated: 2022/09/16 23:59:55 by jrasser          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef __MAP_ITERATOR_HPP__
// # define __MAP_ITERATOR_HPP__

// namespace ft 
// {

// template <class _TreeIterator>
// class map_iterator
// {
//     typedef typename _TreeIterator::_NodeTypes                   _NodeTypes;
//     typedef typename _TreeIterator::__pointer_traits             __pointer_traits;

//     _TreeIterator __i_;

// public:
//     typedef std::bidirectional_iterator_tag                           iterator_category;
//     typedef typename _NodeTypes::__map_value_type                value_type;
//     typedef typename _TreeIterator::difference_type              difference_type;
//     typedef value_type&                                          reference;
//     typedef typename _NodeTypes::__map_value_type_pointer        pointer;

//     map_iterator() : __i_() {}
//     map_iterator(const _TreeIterator& __x) : __i_(__x) {}

//     reference operator*() const {return __i_->__get_value();}
//     // pointer operator->() const {return std::pointer_traits<pointer>::pointer_to(__i_->__get_value());}

//     map_iterator& operator++() 
//     {
//         ++__i_;
//         return *this;
//     }
//     map_iterator operator++(int)
//     {
//         map_iterator __t(*this);
//         ++(*this);
//         return __t;
//     }
//     map_iterator& operator--() 
//     {
//         --__i_;
//         return *this;
//     }
//     map_iterator operator--(int)
//     {
//         map_iterator __t(*this);
//         --(*this);
//         return __t;
//     }

//     friend bool operator==(const map_iterator& __x, const map_iterator& __y)
//         {return __x.__i_ == __y.__i_;}
//     friend bool operator!=(const map_iterator& __x, const map_iterator& __y)
//         {return __x.__i_ != __y.__i_;}

//     template <class, class, class, class> friend class map;
//     template <class, class, class, class> friend class multimap;
//     template <class> friend class __map_const_iterator;
// };


// template <class _TreeIterator>
// class  __map_const_iterator
// {
//     typedef typename _TreeIterator::_NodeTypes                   _NodeTypes;
//     // typedef typename _TreeIterator::__pointer_traits             __pointer_traits;

//     _TreeIterator __i_;

// public:
//     typedef std::bidirectional_iterator_tag                      iterator_category;
//     typedef typename _NodeTypes::__map_value_type                value_type;
//     typedef typename _TreeIterator::difference_type              difference_type;
//     typedef const value_type&                                    reference;
//     typedef typename _NodeTypes::__const_map_value_type_pointer  pointer;

//     __map_const_iterator() {}
//     // __map_const_iterator(const _TreeIterator& __x) : __i_(__x) {}
//     __map_const_iterator(_TreeIterator __i) : __i_(__i) {}

//     __map_const_iterator(map_iterator<
//         typename _TreeIterator::__non_const_iterator> __i)
//         : __i_(__i.__i_) {}

//     reference operator*() const {return __i_->__get_value();}
//     pointer operator->() const {return std::pointer_traits<pointer>::pointer_to(__i_->__get_value());}

//     __map_const_iterator& operator++() {++__i_; return *this;}
//     __map_const_iterator operator++(int)
//     {
//         __map_const_iterator __t(*this);
//         ++(*this);
//         return __t;
//     }

    
//     __map_const_iterator& operator--() {--__i_; return *this;}
//     __map_const_iterator operator--(int)
//     {
//         __map_const_iterator __t(*this);
//         --(*this);
//         return __t;
//     }

//     friend bool operator==(const __map_const_iterator& __x, const __map_const_iterator& __y)
//         {return __x.__i_ == __y.__i_;}
//     friend bool operator!=(const __map_const_iterator& __x, const __map_const_iterator& __y)
//         {return __x.__i_ != __y.__i_;}

//     template <class, class, class, class> friend class map;
//     template <class, class, class, class> friend class multimap;
//     template <class, class, class> friend class __tree_const_iterator;
// };



// }



// #endif