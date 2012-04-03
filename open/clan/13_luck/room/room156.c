inherit ROOM;
void create() {
	set( "short", "$HIB$��$HIC$��$CYN$��$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/scholar/obj/icefan",
		"amount2"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/gsword/obj/may_ring",
		"file2"    : "/daemon/class/fighter/figring",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10690 );
	set( "light_up", 1 );
	set( "owner", "zxc" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room102",
	]) );
	set( "long", @LONG
����$MAG$����$NOR$�Ĳؽ�֮��,һ�����伴����һ�������$HIR$�������$NOR$
����Ĺ���ǽ��,��ʾ�����˵�$CYN$���������$NOR$,�����������������
������-$HIC$�����콣��$NOR$,�ɽ��ϵ�$RED$Ѫ���߰�$NOR$��ʾ�����������ݺ�
���ֵ�$HIG$�ټ�$NOR$,���˾��ò���Ϊ$HIC$���µ�һ���!$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
