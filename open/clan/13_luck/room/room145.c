inherit ROOM;
void create() {
	set( "short", "�Ӿ���" );
	set( "object", ([
		"amount10" : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/quests/snake/npc/obj/snake_gem",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"file3"    : "/open/gsword/obj/may_ring",
		"amount5"  : 1,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"file5"    : "/daemon/class/fighter/figring",
		"amount4"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/wind-rain/obj/sun_red_cloth",
	]) );
	set( "build", 10646 );
	set( "light_up", 1 );
	set( "owner", "tsrak" );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room146",
	]) );
	set( "long", @LONG
    �㱻��������ߵ�����,�Ĵ�һƬ���,�������߽�һ��
�컨��ͻȻ���һƬ����,����Ҳ������������,����ֻ��һ
��С����,���Ϸ���һ��ñ��,ñ�������һ���������õĽ�
���¶���һЩ�������õ�������װ��,ͻȻһֻèͷӥ����
ͷ�Ϸ��˹�ȥ������һ��ֽ,������һ������д�Ż�ӭ����

LONG);
	setup();
	replace_program(ROOM);
}
