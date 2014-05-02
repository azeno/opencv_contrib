# From http://stackoverflow.com/questions/7172670/best-shortest-way-to-join-a-list-in-cmake
FUNCTION(JOIN LISTNAME GLUE OUTPUT)
SET(_TMP_STR "")
  FOREACH(VAL ${${LISTNAME}})
    SET(_TMP_STR "${_TMP_STR}${GLUE}${VAL}")
  ENDFOREACH(VAL ${${LISTNAME}})
  STRING(LENGTH "${GLUE}" GLUE_LEN)
  STRING(LENGTH "${_TMP_STR}" OUT_LEN)
  MATH(EXPR OUT_LEN ${OUT_LEN}-${GLUE_LEN})
  STRING(SUBSTRING "${_TMP_STR}" ${GLUE_LEN} ${OUT_LEN} _TMP_STR) 
  SET(${OUTPUT} "${_TMP_STR}" PARENT_SCOPE)
ENDFUNCTION()