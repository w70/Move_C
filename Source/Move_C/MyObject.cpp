// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"
#include<Runtime\Engine\Classes\Engine\Engine.h>

UMyObject::UMyObject() {
	GEngine->AddOnScreenDebugMessage(
		-1,//防止相同信息在窗口重复显示，当为-1时不判断，为0时相同信息只显示一次
		10,//信息显示时间
		FColor::Blue,
		"creat an object"


	);

}