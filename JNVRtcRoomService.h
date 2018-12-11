/*******************************************************************************
* ��    ��: Gavinpong
* �� �� ��: JNVRtcRoomService.h
* �������: 2018��11��16��
* ����ժҪ: DataServiceInterface.h�ӿڵ�ʵ��
********************************************************************************/
#pragma once

#include "JNVRtcDef.h"

namespace JNVRTCSDK{
	enum class RoomStatus {
		RS_Success,         //����ɹ�
		RS_Timeout,         //����ʱ
		RS_Failure,         //����ʧ��
		RS_ReqHasExist,     //�����Ѵ���
		RS_ReqNotExist,     //���󲻴���
		//��������
		RS_RoomHasExist,    //�����Ѵ���
		//���뷿��
		RS_RoomFull,        //������������
		RS_HasJoined,       //�Ѽ��뷿��
		RS_RoomNotExist,    //���䲻����
		RS_CreatorRefused,  //�����߾ܾ�
		RS_CreatorOffline,  //����������
		//ȡ������/�뿪����
		RS_NotJoined,       //δ���뷿��
		//��ɢ����
		RS_Dissolved,       //�����ѽ�ɢ
		RS_NoPermission,    //��Ȩ��
		RS_OperProhibit,    //���������
		//Ԥ��
		RS_UnkownError,     //δ֪����
	};
	enum class RoleType{
		ROLE_TYPE_InfieldAudience,//�ڳ�����
		ROLE_TYPE_OutfieldAudience,//�ⳡ����
		ROLE_TYPE_Anchor,//����
		ROLE_TYPE_Chairman,//��ϯ
	};

	class IRoomCallback{

	};

	class JNVRTC_SDK_API JNVRtcRoomService{

	};
}