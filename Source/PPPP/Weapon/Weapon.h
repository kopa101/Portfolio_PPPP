// [Scaffolding by @혜원]
// 이 파일은 무기 시스템의 기본 틀을 제공합니다.
// 협업자가 기능별로 구현을 채워넣을 수 있도록 필요한 변수와 함수 시그니처만 선언되어 있습니다.

// AWeapon 클래스는 모든 무기 액터의 기반 클래스입니다.
// 추후 다양한 무기 타입(EWeaponType, EFireType 등)에 따라 동작이 분기됩니다.


//멤버 변수

// HUD에서 사용할 크로스헤어 텍스처
// TODO: 각 텍스처는 블루프린트에서 연결 또는 코드로 로딩 예정

// 줌 기능을 위한 FOV 설정값
// TODO: 조준 상태 전환 시 사용 (스나이퍼/AR 등에게 활용될 수 있음)

// 발사 속도, 자동발사 여부
// TODO: bAutomatic이 true인 경우 지속 발사 구현 필요

// 총알 산탄 구현을 위한 파라미터
// TODO: 산탄 무기 Shotgun에서 사용될 수 있음

// 서버 사이드 리와인드(SSR) 사용 여부
// TODO: 고핑 유저를 위한 SSR 기능 분기처리 필요

// 무기 상태: 장착됨, 드롭됨 등
// TODO: 상태 전환 시 대응 함수 (OnEquipped, OnDropped 등) 호출



//멤버 함수

// Fire 함수: 무기를 발사할 때 호출
// TODO: 발사 애니메이션, 탄약 감소, 이펙트 처리 필요

// TraceEndWithScatter: 산탄 무기의 분산된 피격 위치를 계산
// TODO: HitTarget을 기반으로 랜덤 산탄 적용

// SetHUDAmmo: HUD에 탄약 정보 업데이트
// TODO: 캐릭터 및 컨트롤러 포인터 유효성 검사 필요


