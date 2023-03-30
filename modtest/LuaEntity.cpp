#include <lua.hpp>

#include "IsaacRepentance.h"
#include "LuaCore.h"
#include "HookSystem.h"


int Lua_EntityAddBleeding(lua_State* L)
{
	Entity* ent = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	EntityRef* ref = lua::GetUserdata<EntityRef*>(L, 2, lua::Metatables::ENTITY_REF, "EntityRef");
	int duration = luaL_checkinteger(L, 3);
	ent->AddBleeding(*ref, duration);
	return 1;
}

int Lua_EntityAddMagnetized(lua_State* L)
{
	Entity* ent = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	EntityRef* ref = lua::GetUserdata<EntityRef*>(L, 2, lua::Metatables::ENTITY_REF, "EntityRef");
	int duration = luaL_checkinteger(L, 3);
	ent->AddMagnetized(*ref, duration);
	return 1;
}

int Lua_EntityAddBaited(lua_State* L)
{
	Entity* ent = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	EntityRef* ref = lua::GetUserdata<EntityRef*>(L, 2, lua::Metatables::ENTITY_REF, "EntityRef");
	int duration = luaL_checkinteger(L, 3);
	ent->AddBaited(*ref, duration);
	return 1;
}

int Lua_EntityAddWeakness(lua_State* L)
{
	Entity* ent = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	EntityRef* ref = lua::GetUserdata<EntityRef*>(L, 2, lua::Metatables::ENTITY_REF, "EntityRef");
	int duration = luaL_checkinteger(L, 3);
	ent->AddWeakness(*ref, duration);
	return 1;
}

int Lua_EntityAddBrimstoneMark(lua_State* L)
{
	Entity* ent = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	EntityRef* ref = lua::GetUserdata<EntityRef*>(L, 2, lua::Metatables::ENTITY_REF, "EntityRef");
	int duration = luaL_checkinteger(L, 3);
	ent->AddBrimstoneMark(*ref, duration);
	return 1;
}

int Lua_EntityAddIce(lua_State* L)
{
	Entity* ent = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	EntityRef* ref = lua::GetUserdata<EntityRef*>(L, 2, lua::Metatables::ENTITY_REF, "EntityRef");
	int duration = luaL_checkinteger(L, 3);
	ent->AddIce(*ref, duration);
	return 1;
}

int Lua_EntityAddKnockback(lua_State* L)
{
	Entity* ent = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	EntityRef* ref = lua::GetUserdata<EntityRef*>(L, 2, lua::Metatables::ENTITY_REF, "EntityRef");
	Vector* pos = lua::GetUserdata<Vector*>(L, 3, lua::Metatables::VECTOR, "Vector"); //replace with const?
	int duration = luaL_checkinteger(L, 4);
	bool unk = lua_toboolean(L, 5);
	ent->AddKnockback(*ref, *pos, duration, unk);
	return 1;
}

static int Lua_EntityGetShadowSize(lua_State* L)
{
	Entity* entity = lua::UserdataToData<Entity*>(lua_touserdata(L, 1));
	lua_pushnumber(L, *entity->GetShadowSize());
	return 1;
}

static int Lua_EntitySetShadowSize(lua_State* L)
{
	Entity* entity = lua::UserdataToData<Entity*>(lua_touserdata(L, 1));
	float shadowSize = luaL_checknumber(L, 2);
	*entity->GetShadowSize() = shadowSize;
	return 0;
}

/*int Lua_EntityCopyStatusEffects(lua_State* L)
{
	Entity* ent = *(Entity**)((char*)lua::CheckUserdata(L, 1, lua::Metatables::ENTITY, "Entity") + 4);
	Entity* copyEnt = *(Entity**)((char*)lua::CheckUserdata(L, 2, lua::Metatables::ENTITY, "Entity") + 4);

	ent->CopyStatusEffects(copyEnt); bruh code

	return 1;
}

static void RegisterEntityCopyStatusEffects(lua_State* L)
{
	lua::PushMetatable(L, lua::Metatables::ENTITY);
	lua_pushstring(L, "CopyStatusEffects");
	lua_pushcfunction(L, Lua_EntityCopyStatusEffects);
	lua_rawset(L, -3);
	lua_pop(L, 1);
}
*/

static int Lua_EntityGetNullOffset(lua_State* L)
{
	Entity* entity = lua::UserdataToData<Entity*>(lua_touserdata(L, 1));
	const char* nullLayerName = luaL_checkstring(L, 2);
	Vector* toLua = lua::luabridge::UserdataValue<Vector>::place(L, lua::GetMetatableKey(lua::Metatables::VECTOR));
	*toLua = entity->GetNullOffset(nullLayerName);
	return 1;
}

static int lua_Entity_GetType(lua_State* L) {
	Entity* entity = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	lua_pushinteger(L, *entity->GetType());
	return 1;
}

static int lua_Entity_GetPosVel(lua_State* L) {
	Entity* entity = lua::GetUserdata<Entity*>(L, 1, lua::Metatables::ENTITY, "Entity");
	Vector* pos = (Vector*)((char*)entity + 0x294);
	Vector* vel = (Vector*)((char*)entity + 0x2B8);

	lua::luabridge::UserdataValue<Vector>::push(L, lua::GetMetatableKey(lua::Metatables::VECTOR), *pos);
	lua::luabridge::UserdataValue<Vector>::push(L, lua::GetMetatableKey(lua::Metatables::VECTOR), *vel);

	return 2;
}

HOOK_METHOD(LuaEngine, RegisterClasses, () -> void) {
	super();
	lua_State* state = g_LuaEngine->_state;
	lua::LuaStackProtector protector(state);
	lua::Metatables mt = lua::Metatables::ENTITY;
	lua::RegisterFunction(state, mt, "AddBleeding", Lua_EntityAddBleeding);
	lua::RegisterFunction(state, mt, "AddMagnetized", Lua_EntityAddMagnetized);
	lua::RegisterFunction(state, mt, "AddBaited", Lua_EntityAddBaited);
	lua::RegisterFunction(state, mt, "AddWeakness", Lua_EntityAddWeakness);
	lua::RegisterFunction(state, mt, "AddBrimstoneMark", Lua_EntityAddBrimstoneMark);
	lua::RegisterFunction(state, mt, "AddIce", Lua_EntityAddIce);
	lua::RegisterFunction(state, mt, "AddKnockback", Lua_EntityAddKnockback);
	lua::RegisterFunction(state, mt, "GetShadowSize", Lua_EntityGetShadowSize);
	lua::RegisterFunction(state, mt, "SetShadowSize", Lua_EntitySetShadowSize);
	lua::RegisterFunction(state, mt, "AddKnockback", Lua_EntityAddKnockback);
	lua::RegisterFunction(state, mt, "GetNullOffset", Lua_EntityGetNullOffset);
	lua::RegisterFunction(state, mt, "GetType", lua_Entity_GetType);
	lua::RegisterFunction(state, mt, "GetPosVel", lua_Entity_GetPosVel);

}