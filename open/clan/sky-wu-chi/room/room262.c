inherit ROOM;
void create() {
	set( "short", "$HIW$��$HIR$Ѫ ի$HIW$��$NOR$" );
	set( "object", ([
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/quests/snake/npc/obj/snake_gem",
		"file5"    : "/open/doctor/pill/sky_pill",
		"amount8"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount5"  : 8,
		"amount3"  : 1,
		"file3"    : "/open/quests/snake/npc/obj/un_cloth",
		"amount2"  : 1,
		"amount6"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/capital/obj/blade2",
		"file10"   : "/open/doctor/pill/human_pill",
		"file4"    : "/open/quests/snake/npc/obj/helmet",
		"amount1"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount10" : 6,
	]) );
	set( "build", 10002 );
	set( "owner", "bacchus" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room263",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��̤�˵�,��ֻ��һ��$HIC$����$NOR$������,ʹ���Ծ���ɪ������.....
��ɽͷ��һ��«,����Χ����ŨŨ$HIR$���ɫ$NOR$��$HIR$ɽ��֮��$NOR$,�������,
����������ϵ�$HIW$����$NOR$(Moon),ʹ������ø����$HIG$����ɭɭ$NOR$,����
���е�$HIC$����$NOR$���ۼ����˵��Ƶ�.��ԶԶ�Ŀ���һ����һ���$NIR$Ѫ��$NOR$
�Ĺ��ߴӲ�«֮��$CYN$�������$NOR$,�����ƺ��и�Ů�˵���Ӱ������..
�ⷬ����������ĺ���,���Ų���ǰȥ�鿴,������һ��Ů����
����һ��$HIB$��������ޱȵ�$NOR$,��������������$HIR$ɱ��$NOR$...............
ԭ�������$HIC$ƻ�M$NOR$(Bacchus)���������ڹ��ĵط�.����$HIB$��$NOR$������
����$HIR$��Ѫ���$NOR$,��������$HIC$ƻ�M$NOR$������,�㲻�������ľ�����,��
���������в��ٵ�$HIW$����$NOR$��ɥʧ������������.
LONG);
	setup();
	replace_program(ROOM);
}
