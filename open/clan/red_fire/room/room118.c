inherit ROOM;
void create() {
	set( "short", "$HIC$�罣$HIG$��$HIW$����$NOR$" );
	set( "owner", "waysword" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/capital/obj/4-4",
		"amount5"  : 1,
		"file3"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount6"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount3"  : 1,
	]) );
	set( "build", 10044 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room84",
	]) );
	set( "long", @LONG

��һ���žͿ�������$HIR$����$NOR$

$HIY$����$NOR$--$HIC$��սɳ��$HIM$ ��Ⱥ��$NOR$

$HIY$����$NOR$--$HIC$�̽�����$HIM$ �Ҷ���$NOR$

$HIY$����$NOR$--$HIC$�����տ�$HIM$ ��һ��$NOR$

��Ҳ����$HIC$�罣$NOR$��д�գ��������ڵ����������
���⿴��ȥ������һƬ$HIB$�ƺ�$NOR$��$HIC$��$HIY$��$HIR$��$HIM$��$NOR$������
�ף����㲻����˵һ�䡸������������䷿��
Ҳ��$HIC$�罣$NOR$����$HIY$����$NOR$�ķ��䣬�����أ�����$HIC$��
��$NOR$��Ϊ��һ����


LONG);
	setup();
	replace_program(ROOM);
}
