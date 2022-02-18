
function(as_python_library target_name)
  if(ARGC LESS 2)
    set_target_properties(${target_name}
      PROPERTIES 
      SUFFIX ${PYTHON_EXTENSION_SUFFIX})
    # PREFIX "") Needed if .so gets lib prepended?
  else()
    set_target_properties(${target_name}
      PROPERTIES 
      SUFFIX ${ARGV1})
    # PREFIX "") Needed if .so gets lib prepended?
  endif()
endfunction()
