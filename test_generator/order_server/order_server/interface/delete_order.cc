/*************************************************************
 * 
 *  #####   ###   #     #    #		 #     #####    #####     ####
 *    #			 #    #	#	  #			#		#			 #  #	  	#		#		 #
 *    #			 #    #		# #				#				 ###			#####    #		
 *    #			###   #		  #				#				 #   #		#					####
 *
 * delete_order.cc
 * Generated by tinyrpc framework tinyrpc_generator.py
 * Create Time: 2023-08-11 22:59:02
 * This file will not be overwrite althrough protobuf file changed !!!
 * Just write this file while not exist
*************************************************************/


#include "tinyrpc/comm/log.h"
#include "order_server/interface/delete_order.h"
#include "order_server/pb/order_server.pb.h"

namespace order_server {

DeleteOrderInterface::DeleteOrderInterface(const ::deleteOrderReq& request, ::deleteOrderRsp& response)
  : m_request(request), 
  m_response(response) {

}

DeleteOrderInterface::~DeleteOrderInterface() {

}

void DeleteOrderInterface::run() {
  //
  // Run your business at here
  // m_reponse.set_ret_code(0);
  // m_reponse.set_res_info("Succ");
  //

}


}