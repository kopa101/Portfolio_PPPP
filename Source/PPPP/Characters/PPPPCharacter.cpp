// 캐릭터 생성자 – 카메라, 컴포넌트 등 초기화
APPPPCharacter::APPPPCharacter()

// 게임 시작 시 호출 – HUD 초기화, 시작 상태 설정
void APPPPCharacter::BeginPlay()

// 매 프레임 호출 – AimOffset, 회전 보정, Pitch 계산
void APPPPCharacter::Tick(float DeltaTime)

// 입력 바인딩 설정 – 이동, 무기 조작, 시점 제어 등
void APPPPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)


// ========== 입력 처리 함수 ==========

// W/S 입력 처리 – 전후 이동
void APPPPCharacter::MoveForward(float Value)

// A/D 입력 처리 – 좌우 이동
void APPPPCharacter::MoveRight(float Value)

// 마우스 좌우 회전
void APPPPCharacter::Turn(float Value)

// 마우스 상하 회전
void APPPPCharacter::LookUp(float Value)

// 무기 장비 버튼 입력 처리
void APPPPCharacter::EquipButtonPressed()

// 앉기/서기 전환
void APPPPCharacter::CrouchButtonPressed()

// 발사 시작
void APPPPCharacter::FireButtonPressed()

// 발사 종료
void APPPPCharacter::FireButtonReleased()

// 조준 상태 진입
void APPPPCharacter::AimButtonPressed()

// 조준 상태 해제
void APPPPCharacter::AimButtonReleased()

// 재장전 시작
void APPPPCharacter::ReloadButtonPressed()


// ========== HUD 갱신 함수 ==========

// 체력 수치를 HUD에 반영
void APPPPCharacter::UpdateHUDHealth()

// 방어막 수치를 HUD에 반영
void APPPPCharacter::UpdateHUDShield()

// 탄약 수치를 HUD에 반영
void APPPPCharacter::UpdateHUDAmmo()


// ========== 애니메이션 실행 함수 ==========

// 발사 애니메이션 실행 (조준 상태에 따라 다름)
void APPPPCharacter::PlayFireMontage(bool bAiming)

// 재장전 애니메이션 실행
void APPPPCharacter::PlayReloadMontage()


// ========== 기타 기능 ==========

// 현재 장비 중인 무기 제거 또는 파괴
void APPPPCharacter::DropOrDestroyWeapon()

// 리스폰 포인트 설정 (게임 시작 시 위치 저장)
void APPPPCharacter::SetSpawnPoint()

// 캐릭터 사망 처리 – 애니메이션 및 상태 변경
void APPPPCharacter::Elim(bool bPlayerLeftGame)

// Dissolve 머티리얼 효과 시작
void APPPPCharacter::StartDissolve()

// 사망 후 제거 처리 타이머 완료 시 실행
void APPPPCharacter::ElimTimerFinished()


// ========== 조준 보정 / 회전 계산 ==========

// 조준 방향 보정 – AimOffset 값 계산
void APPPPCharacter::AimOffset(float DeltaTime)

// Pitch 값 계산 – 시점 위아래 방향 계산
void APPPPCharacter::CalculateAO_Pitch()

// 시점 회전 애니메이션 보간 (네트워크 프록시용)
void APPPPCharacter::SimProxiesTurn()
