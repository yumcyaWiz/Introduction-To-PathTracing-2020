add_executable(shoot_ray shoot_ray.cpp)
target_link_libraries(shoot_ray PRIVATE mogumogu)

add_executable(draw_sphere_normal draw_sphere_normal.cpp)
target_link_libraries(draw_sphere_normal PRIVATE mogumogu)

add_executable(draw_sphere_lambert draw_sphere_lambert.cpp)
target_link_libraries(draw_sphere_lambert PRIVATE mogumogu)

add_executable(draw_multiple_sphere draw_multiple_sphere.cpp)
target_link_libraries(draw_multiple_sphere PRIVATE mogumogu)

add_executable(simple_shadow simple_shadow.cpp)
target_link_libraries(simple_shadow PRIVATE mogumogu)

add_executable(ssaa ssaa.cpp)
target_link_libraries(ssaa PRIVATE mogumogu)