# Portfolio_PPPP
Multi Shooter TPS/FPS + GAS + FrontEndUI + Etc...


# 🔫 MultiShooter: GAS 기반 멀티플레이어 FPS 프로토타입

> GAS 기반 능력 시스템이 통합된 언리얼 C++ 멀티플레이어 FPS 게임입니다.  
> 협업 프로젝트로 진행되었으며, 팀원 분들이 주요 기능을 개발하고 저는 프로젝트 설계, 아키텍처 구성, 리뷰 및 통합을 담당했습니다.

---

## 📌 주요 기능

- ✅ 언리얼 C++ 기반 TPS/FPS 캐릭터 컨트롤
- ✅ GAS (Gameplay Ability System) 기반 능력 구현
- ✅ AWS Dedicated Server 환경 구축 및 연동
- ✅ GitHub 협업 구조 기반 Pull Request 워크플로우
- ✅ 스팀 세션을 통한 멀티플레이어 매칭
- ✅ GAS 능력: Dash, Heal, Reload, Fire 등

---

## 🧩 프로젝트 구조

Source/
 - ├── Characters/
 - │ └── BlasterCharacter.cpp
  ├── Abilities/
  │ ├── GA_Dash.cpp
  │ ├── GA_Heal.cpp
  │ └── GA_Fire.cpp
  ├── UI/
  │ └── AbilityHUD.cpp
  ├── Weapons/
  │ └── HitScanWeapon.cpp
  └── Core/
  ├── GameMode.cpp
  └── GameState.cpp


> ☝️ 각 서브 디렉토리는 `ㄴ`, `ㄷ`, `ㄹ` 개발자들이 기능별로 담당한 영역입니다.

---

## 👥 팀 구성 및 역할 분담

| 이름 | 역할 | 담당 기능 |
|------|------|------------|
| 🧑‍💻 G (리더) | 설계, 리뷰, 통합 | 프로젝트 구조, GAS 통합, 리뷰 및 병합 |
| 👩‍💻 N | 기능 개발 | Fire / Reload 구현 |
| 👨‍💻 D | 기능 개발 | Dash / Heal 능력 개발 |
| 👩‍💻 R | UI 및 테스트 | HUD, 능력 아이콘 연동, UI 테스트 |

---

## 🔁 협업 워크플로우

1. `G`가 전체 스캐폴딩 및 구조 설계
2. 각 팀원은 별도 브랜치에서 기능 개발 → PR 생성
3. `G`가 리뷰 및 수정 후 병합
4. GitHub Projects로 작업 흐름 관리
5. GAS 능력 테스트 및 디버깅

> ➕ 실제로는 일부 PR에 고의적 오류를 포함시켜 리뷰/수정 커밋 과정을 명시적으로 보여주었습니다. (포트폴리오 목적)

---

## 🛠️ 기술 스택

- Unreal Engine 5.x (C++ 기반)
- Gameplay Ability System (GAS)
- AWS Gamelift Dedicated Server
- GitHub Projects + Issue 기반 협업 관리
- Steam Online Subsystem (멀티플레이어 매칭)

---

## 📷 스크린샷

> 게임 플레이, 능력 사용 장면, HUD 구성 등 추가 (추후 업데이트 예정)

---

## 🔎 기타 문서

- [GAS 설계 문서 (Wiki)](https://github.com/your-id/your-repo/wiki/GAS-Design) ← 선택사항
- [프로젝트 협업 보드](https://github.com/your-id/your-repo/projects/1)

- ------------------
프로젝트

### 🔧 멀티플레이어 플러그인 구성
- [ ] 언리얼 멀티플레이어 플러그인 생성 및 설정
- [ ] Online Subsystem (Steam 등) 초기 설정
- [ ] NetMode 설정 및 디버그 로그 테스트

---

### 🎮 프로젝트 기본 설정
- [ ] 기본 캐릭터 및 GameMode 생성
- [ ] GameInstance 및 GameState 스캐폴딩
- [ ] 초기 맵 구성 및 테스트 기능 연결

---

### 🔫 무기 시스템
- [ ] 무기 베이스 클래스 (AWeaponBase) 생성
- [ ] 무기 장착 / 분리 기능
- [ ] 무기 소켓 연결 및 애니메이션 연동

---

### 🔥 무기 발사 기능
- [ ] Hitscan / Projectile 타입 발사 구현
- [ ] 사운드, 이펙트, 피격 반응 구현
- [ ] Fire 함수 멀티플레이어 처리 (서버-클라 동기화)

---

### 🎯 무기 조준 (Aiming) 시스템
- [ ] ADS (Aim Down Sight) 기능 구현
- [ ] FOV 전환 처리
- [ ] 조준 시 이동 속도 조정

---

### ❤️ 체력 및 선수 통계
- [ ] 체력 / 사망 처리
- [ ] Death 카운트 및 리스폰 연동
- [ ] HUD 연동 (체력바, 사망 알림)

---

### 💥 탄약 및 재장전 시스템
- [ ] 탄약 수량 관리
- [ ] 재장전 로직 구현
- [ ] 탄약 UI와 연동

---

### ⏱️ 매치 상태 관리
- [ ] MatchState Enum 설계
- [ ] 매치 시작 / 종료 / 결과 화면 처리
- [ ] 서버 전용 타이머 구성

---

### 🔄 다양한 무기 유형 구현
- [ ] 샷건 발사 로직
- [ ] 로켓런처 및 Area Damage
- [ ] 무기 스왑 처리

---

### 📦 무기 및 아이템 픽업 시스템
- [ ] World Item Actor 구현
- [ ] 충돌 및 상호작용 처리
- [ ] HUD 및 인벤토리 반영

---

### 📡 지연 보상 (Lag Compensation)
- [ ] 서버사이드 리와인드 구조 생성
- [ ] 히트박스 캐싱 및 롤백 처리
- [ ] SSR 테스트 및 디버그 시각화

---

### 📡 추가 멀티플레이 기능
- [ ] PlayerList UI 구현
- [ ] Network Ping 표시
- [ ] 사운드 동기화 최적화

---

### 🧠 팀 시스템
- [ ] 팀 태그 처리
- [ ] 팀 색상 / 구분 시스템
- [ ] 팀 스코어 집계

---

### 🚩 깃발 뺏기 모드 (CTF)
- [ ] Flag Actor 및 Zone 구성
- [ ] 점수 시스템 연동
- [ ] 팀 기반 UI 처리 및 리스폰 제어

------------------------------------

네이밍.
기본적으로는 Unreal Engine 스타일 가이드를 따르되, 멤버 변수와 함수에 대해서는 통일된 규칙 필요.

# 팀 네이밍 컨벤션 (블래스터 협업 프로젝트)

## 1. 클래스명
- AActor 계열: `AWeapon`, `AProjectile`
- UObject 계열: `UWeaponComponent`, `UInventoryManager`

## 2. 변수명
- 불리언: `bIsAiming`, `bShouldFire`
- 숫자/카운터: `Ammo`, `MaxAmmo`, `CurrentMagazine`
- 오브젝트 참조: `WeaponMesh`, `OwningCharacter`

## 3. 함수명
- 명령형 동사 사용: `FireWeapon()`, `StartReload()`
- Getter/Setter: `GetAmmo()`, `SetWeaponType()`

## 4. 네이밍 케이스
- 클래스, 함수, 변수: `PascalCase`
- 지역 변수: `camelCase` (선택 사항)

## 5. GAS 관련 명명
- `GA_` → 능력 클래스 (`GA_RifleFire`)
- `GE_` → Gameplay Effect (`GE_ExplosionDamage`)
- `Cue_` → Gameplay Cue (`Cue_BloodImpact`)


