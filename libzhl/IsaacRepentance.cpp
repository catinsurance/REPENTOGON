#include "IsaacRepentance.h"
#include "HookSystem_private.h"

namespace _func0
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Camera::constructor", typeid(void (Camera::*)(Room *)), "538bdc83ec0883e4f883c404558b6b04896c24048bec6aff68????????64a100000000505383ec285657a1????????33c5508d45f464a3000000008bf18975d46a3ce8????????", argdata, 2, 5, &func);
}

__declspec(naked) void Camera::constructor(Room *room)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// room
		call _func0::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func1
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Camera::SetFocusPosition", typeid(void (Camera::*)(const Vector &)), "558bec51568bf1578b7e088b4e043bf975??85ff", argdata, 2, 5, &func);
}

__declspec(naked) void Camera::SetFocusPosition(const Vector &pos)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// pos
		call _func1::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func2
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity::constructor", typeid(void (Entity::*)()), "558bec6aff68????????64a1000000005083ec085657a1????????33c5508d45f464a3000000008bf9897df0c707????????c7470800000000", argdata, 1, 5, &func);
}

__declspec(naked) void Entity::constructor()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func2::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func3
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity::Init", typeid(void (Entity::*)(unsigned int , unsigned int , unsigned int , unsigned int )), "558bec83ec308b4508f30f7e05????????568bf1578946288b450c", argdata, 5, 5, &func);
}

__declspec(naked) void Entity::Init(unsigned int type, unsigned int variant, unsigned int subtype, unsigned int initSeed)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// initSeed
		push [ebp+16]		// subtype
		push [ebp+12]		// variant
		push [ebp+8]		// type
		call _func3::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func4
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity::Update", typeid(void (Entity::*)()), "558bec83e4f081ecd8010000a1????????33c4", argdata, 1, 5, &func);
}

__declspec(naked) void Entity::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func4::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func5
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddCollectible", typeid(void (Entity_Player::*)(int , int , bool , int , int )), "558bec6a??68????????64a1????????5081ec????????a1????????33c58945f05657508d45f464a3????????8bf18975bc", argdata, 6, 5, &func);
}

__declspec(naked) void Entity_Player::AddCollectible(int type, int charge, bool firsttime, int slot, int vardata)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+24]		// vardata
		push [ebp+20]		// slot
		push [ebp+16]		// firsttime
		push [ebp+12]		// charge
		push [ebp+8]		// type
		call _func5::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 20
	}
}

namespace _func6
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddBombs", typeid(void (Entity_Player::*)(int )), "558bec83e4??8b550883ec??56", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddBombs(int amount)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// amount
		push ecx			// this
		call _func6::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func7
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddKeys", typeid(void (Entity_Player::*)(int )), "558bec83ec??8b45088d", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddKeys(int amount)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// amount
		push ecx			// this
		call _func7::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func8
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddJarFlies", typeid(void (Entity_Player::*)(int )), "558bec8b91????????b8", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddJarFlies(int amount)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// amount
		push ecx			// this
		call _func8::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func9
{
	static void *func = 0;
	static short argdata[] = {0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddPrettyFly", typeid(void (Entity_Player::*)()), "568bf18b86????????ff", argdata, 1, 5, &func);
}

__declspec(naked) void Entity_Player::AddPrettyFly()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push ecx			// this
		call _func9::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func10
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::AddCoins", typeid(void (Entity_Player::*)(int )), "558bec83ec??5356578b7d088bd985", argdata, 2, 5, &func);
}

__declspec(naked) void Entity_Player::AddCoins(int amount)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// amount
		push ecx			// this
		call _func10::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func11
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff, 0x1ff, 0x2ff, 0x1ff, 0xdff};
	static FunctionDefinition funcObj("Entity_Player::GetMultiShotPositionVelocity", typeid(PosVel (*)(int , WeaponType , Vector , float , Weapon_MultiShotParams )), "558bec83e4??83ec??8b4d", argdata, 6, 2, &func);
}

__declspec(naked) PosVel Entity_Player::GetMultiShotPositionVelocity(int loopIndex, WeaponType weaponType, Vector shotDirection, float shotSpeed, Weapon_MultiShotParams multiShotParams)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+80]		// multiShotParams
		push [ebp+76]		// multiShotParams
		push [ebp+72]		// multiShotParams
		push [ebp+68]		// multiShotParams
		push [ebp+64]		// multiShotParams
		push [ebp+60]		// multiShotParams
		push [ebp+56]		// multiShotParams
		push [ebp+52]		// multiShotParams
		push [ebp+48]		// multiShotParams
		push [ebp+44]		// multiShotParams
		push [ebp+40]		// multiShotParams
		push [ebp+36]		// multiShotParams
		push [ebp+32]		// multiShotParams
		push [ebp+28]		// shotSpeed
		push [ebp+24]		// shotDirection
		push [ebp+20]		// shotDirection
		push [ebp+16]		// weaponType
		push [ebp+12]		// loopIndex
		push [ebp+8]		// implicit_output
		call _func11::func
		add esp, 76
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 76
	}
}

namespace _func12
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::GetMultiShotParams", typeid(Weapon_MultiShotParams (Entity_Player::*)(WeaponType )), "558bec83e4??83ec??8b450853568bf1", argdata, 3, 1, &func);
}

__declspec(naked) Weapon_MultiShotParams Entity_Player::GetMultiShotParams(WeaponType weaponType)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// weaponType
		push [ebp+8]		// implicit_output
		call _func12::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func13
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Entity_Player::Init", typeid(void (Entity_Player::*)(unsigned int , unsigned int , unsigned int , unsigned int )), "558bec6aff68????????64a1000000005081eca0010000a1????????33c58945f05657508d45f464a3000000008bf989bd74fffffff30f7e05????????", argdata, 5, 5, &func);
}

__declspec(naked) void Entity_Player::Init(unsigned int type, unsigned int variant, unsigned int subtype, unsigned int initSeed)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// initSeed
		push [ebp+16]		// subtype
		push [ebp+12]		// variant
		push [ebp+8]		// type
		call _func13::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func14
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("Entity_Player::Update", typeid(void (Entity_Player::*)()), "558bec6aff68????????64a1000000005081ec8c010000a1????????33c58945f0", argdata, 1, 5, &func);
}

__declspec(naked) void Entity_Player::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func14::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func15
{
	static void *func = 0;
	static short argdata[] = {0x100};
	static FunctionDefinition funcObj("Game::constructor", typeid(void (Game::*)()), "538bdc83ec0883e4f883c404558b6b04896c24048bec6aff68????????64a100000000505383ec105657a1????????33c5508d45f464a3000000008bf9897dec897de468????????", argdata, 1, 5, &func);
}

__declspec(naked) void Game::constructor()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		mov eax, ecx	// this
		call _func15::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func16
{
	static void *func = 0;
	static short argdata[] = {0x100};
	static FunctionDefinition funcObj("Game::IsPaused", typeid(bool (Game::*)()), "83b9??????????8b15", argdata, 1, 1, &func);
}

__declspec(naked) bool Game::IsPaused()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		mov eax, ecx	// this
		call _func16::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func17
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Game::Spawn", typeid(Entity *(Game::*)(unsigned int , unsigned int , const Vector &, const Vector &, Entity *, unsigned int , unsigned int , unsigned int )), "558bec83e4f883ec6c8b450853568b751857894424148bf98d4520897c2410508d451c508b451456508b4510508d450c508d44242c50e8????????", argdata, 9, 1, &func);
}

__declspec(naked) Entity *Game::Spawn(unsigned int type, unsigned int variant, const Vector &position, const Vector &velocity, Entity *spawner, unsigned int subtype, unsigned int seed, unsigned int unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+36]		// unk
		push [ebp+32]		// seed
		push [ebp+28]		// subtype
		push [ebp+24]		// spawner
		push [ebp+20]		// velocity
		push [ebp+16]		// position
		push [ebp+12]		// variant
		push [ebp+8]		// type
		call _func17::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 32
	}
}

namespace _func18
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Game::ShakeScreen", typeid(void (Game::*)(int )), "558beca1????????538b", argdata, 2, 5, &func);
}

__declspec(naked) void Game::ShakeScreen(int timeout)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// timeout
		call _func18::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func19
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff, 0x1ff, 0x1ff, 0x1ff};
	static FunctionDefinition funcObj("Game::MakeShockwave", typeid(void (Game::*)(const Vector &, float , float , int )), "558bec83ec088b45085657f30f1000f30f104804a1????????", argdata, 5, 5, &func);
}

__declspec(naked) void Game::MakeShockwave(const Vector &pos, float amplitude, float speed, int duration)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+20]		// duration
		push [ebp+16]		// speed
		push [ebp+12]		// amplitude
		push [ebp+8]		// pos
		call _func19::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 16
	}
}

namespace _func20
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("Game::GetPlayer", typeid(Entity_Player *(Game::*)(unsigned int )), "558bec5156578bf98b97????????8b", argdata, 2, 1, &func);
}

__declspec(naked) Entity_Player *Game::GetPlayer(unsigned int Index)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// Index
		call _func20::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func21
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Game::Update", typeid(void (Game::*)()), "558bec83e4f083ec38a1????????33c4", argdata, 0, 4, &func);
}

__declspec(naked) void Game::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func21::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

Game **__ptr_g_Game;

namespace _var22
{
	static VariableDefinition varObj("g_Game", ".e8????????c745fcffffffffa3(????????)e8", &__ptr_g_Game);
}

namespace _func23
{
	static void *func = 0;
	static short argdata[] = {0x1ff, 0x1ff};
	static FunctionDefinition funcObj("CreateGridEntity", typeid(GridEntity *(*)(GridEntityType , unsigned int )), "558bec6aff68????????64a1000000005051535657a1????????33c5508d45f464a3000000008bda8bf983ff1b0f87????????", argdata, 2, 0, &func);
}

__declspec(naked) GridEntity *__stdcall CreateGridEntity(GridEntityType type, unsigned int seed)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+12]		// seed
		push [ebp+8]		// type
		call _func23::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 8
	}
}

namespace _func24
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("GridEntity_Rock::Update", typeid(void (GridEntity_Rock::*)()), "558bec6aff68????????64a1000000005081ec88000000a1????????33c58945f05657508d45f464a3000000008bf9897da48b57048b0d????????83fa0474??", argdata, 1, 5, &func);
}

__declspec(naked) void GridEntity_Rock::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func24::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func25
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("GridEntity_Rock::Destroy", typeid(bool (GridEntity_Rock::*)(bool )), "558bec83ec40a1????????33c58945fc538b1d????????56", argdata, 2, 1, &func);
}

__declspec(naked) bool GridEntity_Rock::Destroy(bool Immediate)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// Immediate
		call _func25::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func26
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("LuaEngine::Init", typeid(void (LuaEngine::*)(bool )), "558bec83e4??83ec??56578bf9????????ff", argdata, 2, 5, &func);
}

__declspec(naked) void LuaEngine::Init(bool Debug)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// Debug
		call _func26::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func27
{
	static void *func = 0;
	static short argdata[] = {0x101};
	static FunctionDefinition funcObj("LuaEngine::RegisterClasses", typeid(void (LuaEngine::*)()), "558bec6aff68????????64a1000000005081ec3c01000053", argdata, 1, 5, &func);
}

__declspec(naked) void LuaEngine::RegisterClasses()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func27::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

LuaEngine **__ptr_g_LuaEngine;

namespace _var28
{
	static VariableDefinition varObj("g_LuaEngine", "a1(????????)8b40", &__ptr_g_LuaEngine);
}

namespace _func29
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Manager::Update", typeid(void (Manager::*)()), "558bec83e4??83ec??56578b3d", argdata, 0, 4, &func);
}

__declspec(naked) void Manager::Update()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push eax
		push ecx
		push ebx
		push esi
		push edi
		call _func29::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop eax
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

Manager **__ptr_g_Manager;

namespace _var30
{
	static VariableDefinition varObj("g_Manager", ".e8????????83c414898544feffff8bc8c745fc05000000e8????????c745fcffffffffa3(????????)e8????????e8????????", &__ptr_g_Manager);
}

namespace _func31
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("PlayerManager::SpawnCoPlayer", typeid(Entity_Player *(PlayerManager::*)(int )), "558bec6aff68????????64a1000000005083ec20535657a1????????33c5508d45f464a3000000008bf9897de08b47142b4710c1f8024083f84076??68????????", argdata, 2, 1, &func);
}

__declspec(naked) Entity_Player *PlayerManager::SpawnCoPlayer(int unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// unk
		call _func31::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func32
{
	static void *func = 0;
	static short argdata[] = {0x101, 0x1ff};
	static FunctionDefinition funcObj("PlayerManager::SpawnCoPlayer2", typeid(Entity_Player *(PlayerManager::*)(int )), "558bec6aff68????????64a1000000005083ec10535657a1????????33c5508d45f464a3000000008bf9837d08ff0f85????????6880250000e8????????", argdata, 2, 1, &func);
}

__declspec(naked) Entity_Player *PlayerManager::SpawnCoPlayer2(int unk)
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		push [ebp+8]		// unk
		call _func32::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		retn 4
	}
}

namespace _func33
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Random", typeid(unsigned int (*)()), "a1????????3d70020000", argdata, 0, 0, &func);
}

__declspec(naked) unsigned int __stdcall Random()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func33::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

namespace _func34
{
	static void *func = 0;
	static const short *argdata = NULL;
	static FunctionDefinition funcObj("Room::GetDevilRoomChance", typeid(float (Room::*)()), "558bec83ec08f30f1005????????56578bf9f30f1145fc8b0d????????", argdata, 0, 0, &func);
}

__declspec(naked) float Room::GetDevilRoomChance()
{
	__asm
	{
		push ebp
		mov ebp, esp
		push edx
		push ecx
		push ebx
		push esi
		push edi
		call _func34::func
		pop edi
		pop esi
		pop ebx
		pop ecx
		pop edx
		mov esp, ebp
		pop ebp
		ret
	}
}

