file(REMOVE_RECURSE
  "libgeometry2d.a"
  "libgeometry2d.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/geometry2d.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
