inherit ROOM;
void create() {
	set( "short", "���Ӿ����" );
	set( "owner", "roar" );
	set( "object", ([
		"amount8"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
	]) );
	set( "build", 12870 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room88",
	]) );
	set( "long", @LONG
[0;1;35m��[1m��[1m��[1ml[1m��[1m~[1m��[1m��[1m��[1m��[0m����������[0;1;31m��[1m��[1m��[1m��[0m�Ĳ�˹��̺�����Ը���һ��[0;1;33m��[1m[[1m��[1m��[1m��[1mO[1m��[1mW[0m����
��ɢ������[0;1;33m��[1m��[1m��[1m~[0m����������[0;1;35m��[1m��[1m��[1ml[1m��[1m~[0m���м����һ���ɫ[31m̴ľ[0m����Ĵ���Բ
����ԭ��������[0;1;5;34m��[1;5m��[1;5m��[1;5ml[0m��[0;1;33m��[1mQ[1m��[1mT[1m��[1mN[1m��[1m��[0m������ҿ���ĵط��������������¹���
Զ����[0;1;5;36m��[1;5m��[1;5m��[1;5mj[1;5m��[1;5m��[1;5m��[1;5m��[0m-[0;1;32m��[1m��[1m��[1m��[1m��[1ms[1m��[1m��[0m���������������ս��ơ�
LONG);
	setup();
	replace_program(ROOM);
}
