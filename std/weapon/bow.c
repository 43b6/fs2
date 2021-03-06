// bow.c
// by airke
// m_weapon inherit 用...删除 add_action 部分

#include <weapon.h>
#include <ansi.h>

inherit EQUIP;

varargs void init_bow(int damage, int flag)
{
	if( clonep(this_object()) ) return;

	set("weapon_prop/damage", damage);
	set("flag", (int)flag | EDGED);
}

void setup()
{
	::setup();

	if( clonep(this_object()) ) return;

	set("skill_type","archery");
	set("can_hold",1);
	// 初始化....把装备的箭设成id = none ,amount = 0
	set("arrow/id","none");
	set("arrow/amount",0);
	set("arrow/name","空的");
	if( !query("actions") ) {
		set("actions", (: WEAPON_D, "query_action" :) );
		set("verbs", ({ "bash", "crush", "slam" }) );
	}
}


