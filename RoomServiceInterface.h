/*******************************************************************************
* 作    者: Gavinpong
* 文 件 名: RoomServiceInterface.h
* 设计日期: 2018年11月16日
* 内容摘要: 互动普通数据交互接口（纯虚函数），新增接口先在该文档中添加纯虚接口，然后在
		   JNVRtcRoomService接口中实现
********************************************************************************/
#pragma once

namespace JNVRTCSDK{
	class RoomServiceInterface{
		/**********************
		函数名：RoomService_SetCallback
		功  能：设置房间事件回调
		参  数：
		|--RoomServiceInstance：类实例指针
		**********************/
		virtual void RoomService_SetCallback(RoomServiceInterface *RoomServiceInstance) = 0;
		/**********************
		函数名：RoomService_CreateRoom
		功  能：创建房间
		参  数：
		|--roomName：指定房间昵称
		|--roomProfile：预留数据
		**********************/
		virtual void RoomService_CreateRoom(const char *roomName, const std::string &roomProfile) = 0;
		/**********************
		函数名：RoomService_LogoutRoom
		功  能：退出房间
		**********************/
		virtual void RoomService_LogoutRoom() = 0;
		/**********************
		函数名：RoomService_DissolveRoom
		功  能：解散房间
		**********************/
		virtual void RoomService_DissolveRoom() = 0;
		/**********************
		函数名：RoomService_KickOutRoom
		功  能：将某人剔出房间
		**********************/
		virtual void RoomService_KickOutRoom(const std::string &userID) = 0;
		/**********************
		函数名：RoomService_JoinRoomByUserID
		功  能：加入某人创建的房间
		**********************/
		virtual void RoomService_JoinRoomByUserID(const std::string &userID) = 0;
		/**********************
		函数名：RoomService_JoinRoomByUserID
		功  能：加入某个房间
		**********************/
		virtual void RoomService_JoinRoomByRoomID(const std::string &RoomID) = 0;
		/**********************
		函数名：RoomService_CancelJoinRoom
		功  能：加入某个房间
		**********************/
		virtual void RoomService_CancelJoinRoom() = 0;
		/**********************
		函数名：RoomService_ApplyTalk
		功  能：申请发言
		参数：
		|--ctrl:0-取消发言 1-申请发言
		**********************/
		virtual void RoomService_ApplyTalk(int ctrl) = 0;
		/**********************
		函数名：RoomService_SetRole
		功  能：设置角色类型
		参数：
		|--userID:用户ID
		|--role:角色类型
		**********************/
		virtual void RoomService_SetRole(const std::string &userID, RoleType role) = 0;
		/**********************
		函数名：RoomService_BroadcastVideo
		功  能：广播视频
		参数：
		|--userID:用户ID
		|--ctrl:0-停止 1-开始
		**********************/
		virtual void RoomService_BroadcastVideo(const std::string &userID, int ctrl) = 0;
		/**********************
		函数名：RoomService_CheckUserVideo
		功  能：查看用户视频
		参数：
		|--userID:用户ID
		|--ctrl:0-停止 1-开始
		**********************/
		virtual void RoomService_CheckUserVideo(const std::string &userID, int ctrl) = 0;
		/**********************
		函数名：RoomService_BroadcastAudio
		功  能：广播音频
		参数：
		|--userID:用户ID
		|--ctrl:0-停止 1-开始
		**********************/
		virtual void RoomService_BroadcastAudio(const std::string &userID, int ctrl) = 0;
		/**********************
		函数名：RoomService_CheckUserAudio
		功  能：查看用户音频
		参数：
		|--userID:用户ID
		|--ctrl:0-停止 1-开始
		**********************/
		virtual void RoomService_CheckUserAudio(const std::string &userID, int ctrl) = 0;
		/**********************
		函数名：RoomService_ApplyAchorRight
		功  能：申请主播权限
		参数：
		|--ctrl:0-停止 1-开始
		**********************/
		virtual void RoomService_ApplyAchorRight(int ctrl) = 0;
		/**********************
		函数名：RoomService_GetRoomInfoByUserID
		功  能：通过用户ID获取创建的房间信息
		参数：
		|--userID:用户ID
		**********************/
		virtual void RoomService_GetRoomInfoByUserID(const std::string &userID) = 0;
		/**********************
		函数名：RoomService_GetRoomInfoByRoomID
		功  能：通过房间ID获取房间信息
		参数：
		|--roomID:房间ID
		**********************/
		virtual void RoomService_GetRoomInfoByRoomID(const std::string &roomID) = 0;
	};
}