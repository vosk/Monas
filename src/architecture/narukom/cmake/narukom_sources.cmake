message(STATUS "Include Narukom Sources files")
SET(NARUKOM_PUB_SUB_SRCS
   ${NarukomDir}/pub_sub/blackboard.h
   ${NarukomDir}/pub_sub/msg.h
   ${NarukomDir}/pub_sub/stringRegistry.h
   ${NarukomDir}/pub_sub/topicTree.h
   ${NarukomDir}/pub_sub/topicTree.cpp
   ${NarukomDir}/pub_sub/endpoint.h
   ${NarukomDir}/pub_sub/endpoint.cpp
   ${NarukomDir}/pub_sub/blackboard.cpp
   ${NarukomDir}/pub_sub/message_queue.cpp
   ${NarukomDir}/pub_sub/message_queue.h
   ${NarukomDir}/pub_sub/buffer.cpp
   ${NarukomDir}/pub_sub/buffer.h
   ${NarukomDir}/pub_sub/message_buffer.h

   #${NarukomDir}/pub_sub/filters/filter.h
   #${NarukomDir}/pub_sub/filters/filter.cpp
   #${NarukomDir}/pub_sub/filters/special_filters.cpp
   ##${NarukomDir}/pub_sub/filters/content_filter.cpp
   #${NarukomDir}/pub_sub/filters/content_filter.h
   #${NarukomDir}/pub_sub/filters/special_filters.h
   #${NarukomDir}/pub_sub/filters/time_filter.cpp
   #${NarukomDir}/pub_sub/filters/time_filter.h
   #${NarukomDir}/pub_sub/filters/topic_filter.h
   #${NarukomDir}/pub_sub/filters/topic_filter.cpp
   #${NarukomDir}/pub_sub/filters/type_filter.h
   #${NarukomDir}/pub_sub/filters/type_filter.cpp
)

set(NARUKOM_NETWORK_SRCS

	${NarukomDir}/network/multicastpoint.hpp
	${NarukomDir}/network/multicastpoint.cpp
	${NarukomDir}/network/rawPacketDePacket.h
	${NarukomDir}/network/rawPacketDePacket.cpp
	${NarukomDir}/network/ptimeserialize.hpp
	${NarukomDir}/network/msgentryserialize.hpp

	#${NarukomDir}/network/catalog.cpp
	#${NarukomDir}/network/host.h
	#${NarukomDir}/network/host.cpp


)
# SET(NARUKOM_PUB_SUB_INCLUDE_DIR ${NarukomDir}/pub_sub/)
# 
# 
# set( NARUKOM_SYSTEM_SRCS 
# 	${NarukomDir}/system/thread.h
# )
# 
# SET(NARUKOM_SYSTEM_INCLUDE_DIR ${NarukomDir}/system/)
# 
# 
# set(NARUKOM_NETWORK_SRCS
#${NarukomDir}/network/catalog.h
#${NarukomDir}/network/catalog.cpp
#${NarukomDir}/network/host.h
#${NarukomDir}/network/host.cpp
# 	${NarukomDir}/network/Nack.pb.h
# 	${NarukomDir}/network/Nack.pb.cc
#${NarukomDir}/network/unicast_channel.h
#${NarukomDir}/network/broadcast_channel.h
#${NarukomDir}/network/unicast_channel.cpp
#${NarukomDir}/network/broadcast_channel.cpp
#${NarukomDir}/network/channel.h
#${NarukomDir}/network/channel.cpp
#${NarukomDir}/network/network_common.h
#${NarukomDir}/network/udp_network_channel.h
#${NarukomDir}/network/udp_network_channel.cpp
#${NarukomDir}/network/udp_receiver.h
#${NarukomDir}/network/udp_receiver.cpp
#${NarukomDir}/network/udp_sender.h
#${NarukomDir}/network/udp_sender.cpp
# 	${NarukomDir}/network/network_channel.h
# 	${NarukomDir}/network/network_channel.cpp
# 	${NarukomDir}/network/multicastsender_receiver.h
# 	${NarukomDir}/network/network_message.h
# 	${NarukomDir}/network/network_message.cpp
# 	${NarukomDir}/network/network_message_buffer.h
# 	${NarukomDir}/network/network_message_buffer.cpp
#         ${NarukomDir}/network/network_packet.pb.h
#         ${NarukomDir}/network/network_packet.pb.cc
# 	${NarukomDir}/network/udp_multicast_channel.cpp
# 	${NarukomDir}/network/udp_multicast_channel.h
#       
# )
# 
# SET(NARUKOM_NETWORK_INCLUDE_DIR ${NarukomDir}/network/)
