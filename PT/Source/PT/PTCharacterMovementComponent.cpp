// Fill out your copyright notice in the Description page of Project Settings.

#include "PTCharacterMovementComponent.h"

UPTCharacterMovementComponent::UPTCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

/** Perform local movement and send the move to the server. */
//로컬 이동을 수행하고 서버로 이동을 보냅니다.
void UPTCharacterMovementComponent::ReplicateMoveToServer(float DeltaTime, const FVector& NewAcceleration)
{
	//여기 disable 시키면, 클라에서 내 본인 캐릭터가 이동입력을 해도 캐릭터가 이동을 하지 않는다 - 19.03.24.kkw
	Super::ReplicateMoveToServer(DeltaTime, NewAcceleration);
}

/**
* Replicated function sent by client to server - contains client movement and view info.
* Calls either CharacterOwner->ServerMove() or CharacterOwner->ServerMoveNoBase() depending on whehter ClientMovementBase is null.
*/
//클라이언트가 서버로 보낸 리플리케이트된 함수 - 클라이언트 이동 및 view 정보를 포함합니다.
void UPTCharacterMovementComponent::ServerMove(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
{
	//여기 disable 시키면, 이동 동기화가 되기는 하는데 막 빨리 움직이기도 하고, 정확하지가 않다 - 19.03.24.kkw
	Super::ServerMove(TimeStamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode);
}

void UPTCharacterMovementComponent::ServerMove_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
{
	//여기 disable 시키면, 이동 동기화가 전혀 되지 않는다 - 19.03.24.kkw
	Super::ServerMove_Implementation(TimeStamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode);
}

bool UPTCharacterMovementComponent::ServerMove_Validate(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
{
	bool bResult_Super = Super::ServerMove_Validate(TimeStamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode);
	return bResult_Super;
}

//그런 다음 클라이언트는 MoveAutonomous() 를 호출하여
//로컬에서 똑같이 이동시켜 주고,
//SavedMove 클래스를 사용하여 이동 내역 링크드 리스트에 이 이동을 보관합니다.
//클라이언트가 서버에서 아무것도 듣지 못했다면,
//클라이언트는 싱글 플레이어 게임에서와 마찬가지로 랙없이 움직여 다닐 수 있을 것입니다.
void UPTCharacterMovementComponent::MoveAutonomous(float ClientTimeStamp, float DeltaTime, uint8 CompressedFlags, const FVector& NewAccel)
{
	Super::MoveAutonomous(ClientTimeStamp, DeltaTime, CompressedFlags, NewAccel);
}

/** Replicate position correction to client, associated with a timestamped servermove.  Client will replay subsequent moves after applying adjustment.  */
//타임 스탬프가 적용된 서버 이동과 관련된 위치 수정을 클라이언트에 복제합니다. 클라이언트는 조정을 적용한 후 후속 이동을 재생합니다.
void UPTCharacterMovementComponent::ClientAdjustPosition(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
{
	Super::ClientAdjustPosition(TimeStamp, NewLoc, NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode);
}

void UPTCharacterMovementComponent::ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
{
	Super::ClientAdjustPosition_Implementation(TimeStamp, NewLoc, NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode);
}
