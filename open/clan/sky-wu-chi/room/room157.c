inherit ROOM;
void create() {
	set( "short", "��ƿ���д���" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file3"    : "/open/gsword/npc2/sadsword",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount7"  : 1,
		"file1"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/daemon/class/fighter/ywhand",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/gsword/obj/yugem",
		"amount5"  : 1,
		"amount2"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/gsword/obj/yuskirt",
		"amount4"  : 1,
	]) );
	set( "owner", "ywartee" );
	set( "light_up", 1 );
	set( "build", 13008 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room234.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room133",
		"out"       : "/open/clan/sky-wu-chi/room/room60.c",
	]) );
	set( "long", @LONG
�����ǿ�ƿ��һ�����д�����ĵط�,����û��̫�����ļҾ�
������һ��̫ʦ��
�Ա������ų���,�������,��̫ʦ�����Ǹ���ƿ������..����
��Ҳ��֪�����������ɿ�ƿ����ռ�ĵ�����,�������㲻��
̫����,��������ܵ��������ѹ�����Ģ....
LONG);
	setup();
	replace_program(ROOM);
}
