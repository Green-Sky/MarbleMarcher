/* This file is part of the Marble Marcher (https://github.com/HackerPoet/MarbleMarcher).
* Copyright(C) 2018 CodeParade
* 
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program.If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once
#include <string>

#define LOAD_RESOURCE(NAME)\
  extern "C" const unsigned char NAME##_bytes[];\
  extern "C" const unsigned NAME##_size;\
  const Res NAME##_resource = Res(&NAME##_bytes, NAME##_size);

//Loading resources
struct Res {
  Res(const void* ptr, size_t size);
  inline std::string Str() const { return std::string((const char*)ptr, size); }
  const void* ptr;
  size_t size;
};
