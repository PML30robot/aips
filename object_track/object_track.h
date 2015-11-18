/* 
 * File:   object_track.h
 * Author: Vladislav Kupyrin
 *         Anton Fedotov
 *
 * Created on 14 Ноябрь 2015 г., 17:42
 */

#pragma once

class object_track_t
{
public:
   
   object_track_t();
   ~object_track_t();
   
   void loop();

   void set_max_v( size_t max_v_ );
   size_t get_max_v( ) const;
   void set_min_v( size_t min_v_ );
   size_t get_min_v( ) const;
   void set_max_s( size_t max_s_ );
   size_t get_max_s( ) const;
   void set_min_s( size_t min_s_ );
   size_t get_min_s( ) const;
   void set_max_h( size_t max_h_ );
   size_t get_max_h( ) const;
   void set_min_h( size_t min_h_ );
   size_t get_min_h( ) const;
   
private:
   size_t min_h_, max_h_,
          min_s_, max_s_,
          min_v_, max_v_;
   size_t min_obj_size = 0,
          max_obj_size = 10000;
   
   
};