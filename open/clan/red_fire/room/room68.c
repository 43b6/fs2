inherit ROOM;
void create() {
	set( "short", "$HIC$����$NOR$��$HIM$��$HIY$��$HIW$��$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/open/gsword/obj1/bloodsword",
		"amount1"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file6"    : "/open/gsword/obj1/karmband",
		"file4"    : "/open/gsword/obj1/ring",
		"file5"    : "/open/main/obj/bird_legging",
		"amount4"  : 1,
		"file7"    : "/open/main/obj/m_cloak",
		"amount3"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/gsword/npc2/sadsword",
		"file3"    : "/open/gsword/obj1/khelmet",
	]) );
	set( "owner", "welo" );
	set( "build", 10139 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room115",
		"home"      : "/open/clan/red_fire/room/hall",
		"south"     : "/open/clan/red_fire/room/room59.c",
		"north"     : "/open/clan/red_fire/room/room99.c",
		"east"      : "/open/clan/red_fire/room/room72.c",
	]) );
	set( "long", @LONG

����$HIC$����$HIR$��$HIG$��$HIY$ϰ$HIC$��$NOR$�ĵط���������������$HIW$��ż$NOR$�ϰ߲���
�ۼ�����ʾ���Ѿ�ʹ����һ�κܳ���ʱ���ˡ�����ɢ��
�ų���$HIM$�Ѻ�$NOR$��$WHT$����$NOR$�������$HIC$����$NOR$���Ͷ��ܶ���������
��$HIM$��$HIY$��$HIW$��$NOR$�������ա����������ǽ������һ���ķ��ε�
$HIY$����$NOR$��ƽʱ$HIC$����$NOR$����������߶����ڹ��ķ���


LONG);
	setup();
	replace_program(ROOM);
}
