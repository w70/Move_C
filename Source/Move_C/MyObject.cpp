// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"
#include<Runtime\Engine\Classes\Engine\Engine.h>

UMyObject::UMyObject() {
	GEngine->AddOnScreenDebugMessage(
		-1,//��ֹ��ͬ��Ϣ�ڴ����ظ���ʾ����Ϊ-1ʱ���жϣ�Ϊ0ʱ��ͬ��Ϣֻ��ʾһ��
		10,//��Ϣ��ʾʱ��
		FColor::Blue,
		"creat an object"


	);

}