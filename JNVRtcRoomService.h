/*******************************************************************************
* 作    者: Gavinpong
* 文 件 名: JNVRtcRoomService.h
* 设计日期: 2018年11月16日
* 内容摘要: DataServiceInterface.h接口的实现
********************************************************************************/
#pragma once

#include "JNVRtcDef.h"

namespace JNVRTCSDK{
	enum class RoomStatus {
		RS_Success,         //请求成功
		RS_Timeout,         //请求超时
		RS_Failure,         //请求失败
		RS_ReqHasExist,     //请求已存在
		RS_ReqNotExist,     //请求不存在
		//创建房间
		RS_RoomHasExist,    //房间已存在
		//加入房间
		RS_RoomFull,        //房间人数已满
		RS_HasJoined,       //已加入房间
		RS_RoomNotExist,    //房间不存在
		RS_CreatorRefused,  //创建者拒绝
		RS_CreatorOffline,  //创建者离线
		//取消加入/离开房间
		RS_NotJoined,       //未加入房间
		//解散房间
		RS_Dissolved,       //房间已解散
		RS_NoPermission,    //无权限
		RS_OperProhibit,    //不允许操作
		//预留
		RS_UnkownError,     //未知错误
	};
	enum class RoleType{
		ROLE_TYPE_InfieldAudience,//内场听众
		ROLE_TYPE_OutfieldAudience,//外场听众
		ROLE_TYPE_Anchor,//主讲
		ROLE_TYPE_Chairman,//主席
	};

	class IRoomCallback{

	};

	class JNVRTC_SDK_API JNVRtcRoomService{

	};
}