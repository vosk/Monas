include_directories( ../../../external/PracticalSocket)

set ( ActivityName LocalWorldState )

set ( ActivitySrcs  LocalWorldState.h LocalWorldState.cpp BallFilter.h BallFilter.cpp
KLocalization.h KLocalization.cpp ../../../external/PracticalSocket/PracticalSocket.cpp
)

include ( ../activTemplate.cmake )

