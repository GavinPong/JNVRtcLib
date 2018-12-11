/*******************************************************************************
* ��    ��: Gavinpong
* �� �� ��: RoomServiceInterface.h
* �������: 2018��11��16��
* ����ժҪ: ������ͨ���ݽ����ӿڣ����麯�����������ӿ����ڸ��ĵ�����Ӵ���ӿڣ�Ȼ����
		   JNVRtcRoomService�ӿ���ʵ��
********************************************************************************/
#pragma once

namespace JNVRTCSDK{
	class RoomServiceInterface{
		/**********************
		��������RoomService_SetCallback
		��  �ܣ����÷����¼��ص�
		��  ����
		|--RoomServiceInstance����ʵ��ָ��
		**********************/
		virtual void RoomService_SetCallback(RoomServiceInterface *RoomServiceInstance) = 0;
		/**********************
		��������RoomService_CreateRoom
		��  �ܣ���������
		��  ����
		|--roomName��ָ�������ǳ�
		|--roomProfile��Ԥ������
		**********************/
		virtual void RoomService_CreateRoom(const char *roomName, const std::string &roomProfile) = 0;
		/**********************
		��������RoomService_LogoutRoom
		��  �ܣ��˳�����
		**********************/
		virtual void RoomService_LogoutRoom() = 0;
		/**********************
		��������RoomService_DissolveRoom
		��  �ܣ���ɢ����
		**********************/
		virtual void RoomService_DissolveRoom() = 0;
		/**********************
		��������RoomService_KickOutRoom
		��  �ܣ���ĳ���޳�����
		**********************/
		virtual void RoomService_KickOutRoom(const std::string &userID) = 0;
		/**********************
		��������RoomService_JoinRoomByUserID
		��  �ܣ�����ĳ�˴����ķ���
		**********************/
		virtual void RoomService_JoinRoomByUserID(const std::string &userID) = 0;
		/**********************
		��������RoomService_JoinRoomByUserID
		��  �ܣ�����ĳ������
		**********************/
		virtual void RoomService_JoinRoomByRoomID(const std::string &RoomID) = 0;
		/**********************
		��������RoomService_CancelJoinRoom
		��  �ܣ�����ĳ������
		**********************/
		virtual void RoomService_CancelJoinRoom() = 0;
		/**********************
		��������RoomService_ApplyTalk
		��  �ܣ����뷢��
		������
		|--ctrl:0-ȡ������ 1-���뷢��
		**********************/
		virtual void RoomService_ApplyTalk(int ctrl) = 0;
		/**********************
		��������RoomService_SetRole
		��  �ܣ����ý�ɫ����
		������
		|--userID:�û�ID
		|--role:��ɫ����
		**********************/
		virtual void RoomService_SetRole(const std::string &userID, RoleType role) = 0;
		/**********************
		��������RoomService_BroadcastVideo
		��  �ܣ��㲥��Ƶ
		������
		|--userID:�û�ID
		|--ctrl:0-ֹͣ 1-��ʼ
		**********************/
		virtual void RoomService_BroadcastVideo(const std::string &userID, int ctrl) = 0;
		/**********************
		��������RoomService_CheckUserVideo
		��  �ܣ��鿴�û���Ƶ
		������
		|--userID:�û�ID
		|--ctrl:0-ֹͣ 1-��ʼ
		**********************/
		virtual void RoomService_CheckUserVideo(const std::string &userID, int ctrl) = 0;
		/**********************
		��������RoomService_BroadcastAudio
		��  �ܣ��㲥��Ƶ
		������
		|--userID:�û�ID
		|--ctrl:0-ֹͣ 1-��ʼ
		**********************/
		virtual void RoomService_BroadcastAudio(const std::string &userID, int ctrl) = 0;
		/**********************
		��������RoomService_CheckUserAudio
		��  �ܣ��鿴�û���Ƶ
		������
		|--userID:�û�ID
		|--ctrl:0-ֹͣ 1-��ʼ
		**********************/
		virtual void RoomService_CheckUserAudio(const std::string &userID, int ctrl) = 0;
		/**********************
		��������RoomService_ApplyAchorRight
		��  �ܣ���������Ȩ��
		������
		|--ctrl:0-ֹͣ 1-��ʼ
		**********************/
		virtual void RoomService_ApplyAchorRight(int ctrl) = 0;
		/**********************
		��������RoomService_GetRoomInfoByUserID
		��  �ܣ�ͨ���û�ID��ȡ�����ķ�����Ϣ
		������
		|--userID:�û�ID
		**********************/
		virtual void RoomService_GetRoomInfoByUserID(const std::string &userID) = 0;
		/**********************
		��������RoomService_GetRoomInfoByRoomID
		��  �ܣ�ͨ������ID��ȡ������Ϣ
		������
		|--roomID:����ID
		**********************/
		virtual void RoomService_GetRoomInfoByRoomID(const std::string &roomID) = 0;
	};
}