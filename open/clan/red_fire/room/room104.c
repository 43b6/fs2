inherit ROOM;
void create() {
	set( "short", "$HIR$��$NOR$$HIG$��$NOR$$HIC$��$NOR$$HIM$��$NOR$$HIY$����$NOR$" );
	set( "owner", "borchin" );
	set( "object", ([
		"file1"    : "/open/gsword/npc2/sadsword",
		"file3"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"file6"    : "/open/capital/obj/4-4",
		"amount6"  : 1,
		"file2"    : "/open/gsword/obj1/karmband",
		"amount3"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/gsword/obj1/ring",
		"file8"    : "/open/capital/guard/gring",
		"amount9"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/gsword/obj1/khelmet",
		"amount5"  : 1,
		"file10"   : "/open/main/obj/m_cloak",
		"file7"    : "/open/gsword/obj1/bloodsword",
		"amount4"  : 1,
		"file4"    : "/open/main/obj/bird_legging",
	]) );
	set( "build", 10013 );
	set( "exits", ([
		"out"       : "/open/clan/red_fire/room/room103.c",
		"south"     : "/open/clan/red_fire/room/room15",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

�������棬һ����������ΰ��ξ�ȫ����$HIG$����$NOR$�Ƴɵġ���
���龰ֻ����һ��$YEL$����$NOR$������

     $HIC$��ʹʳ����    ����ʹ������

     ����������    ����������$NOR$

�㲻���ţ����侹�����������׵��������ɲʱ����
�й��볤���ڴ˵Ć�ͷ������


LONG);
	setup();
	replace_program(ROOM);
}
