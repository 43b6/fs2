inherit ROOM;
void create() {
	set( "short", "$HIY$��$NOR$$HIC$ƯƯ$NOR$$HIM$С����$NOR$$HIG$��$NOR$$HIR$������$NOR$$HIY$��$NOR$" );
	set( "owner", "corin" );
	set( "object", ([
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/wu/npc/obj/armband",
		"file10"   : "/open/dancer/obj/maple_ribbon",
		"amount10" : 1,
		"amount5"  : 1,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/love/obj/cloth1",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/dancer/obj/maple_ribbon",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10090 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room132.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

������$HIM$С����$NOR$��$MAG$������$NOR$��ռ��һ�꣬����ȫ����$HIY$��ͭ��$NOR$��������$HIM$С����$NOR$��
���Լ��������к�ȱ����Ҫ�Ľ�����$HIM$С����$NOR$���������ս�ǧ���һ��$HIY$��
��$NOR$���Դ򿪣��������һЩ$HIY$����װ$NOR$�����������������ĸɾ�ë�����б�
�ݵ�$HIC$��$NOR$$HIM$��$NOR$���ذ�����$HIB$����ɽ$NOR$�����İ����Ϻ�$YEL$ɼľ$NOR$������ĥ����ˤ�ڵ���
Ҳ���������ʹ��$HIM$С����$NOR$�Ϳ��Է���$HIC$��$NOR$$HIR$��$NOR$$MAG$��$NOR$$HIB$��$NOR$�������������������Ѷȵ�
����Ҳ����ˤ���Լ��ˡ�


LONG);
	setup();
	replace_program(ROOM);
}
