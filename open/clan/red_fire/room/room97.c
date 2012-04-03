inherit ROOM;
void create() {
	set( "short", "$HIC$��ϼ$NOR$��$HIW$�Է�$NOR$" );
	set( "owner", "waydancer" );
	set( "object", ([
		"amount6"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/mogi/dragon/obj/power",
		"file2"    : "/open/ping/obj/poison_pill",
		"amount7"  : 1,
		"amount9"  : 9,
		"amount10" : 1,
		"amount8"  : 1,
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 1,
		"file1"    : "/open/main/obj/firesword",
		"file5"    : "/open/capital/obj/king-ring",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/capital/guard/gring",
		"amount4"  : 1,
		"file9"    : "/open/mogi/castle/obj/ninepill",
		"file8"    : "/open/prayer/obj/dragon-ring",
		"file7"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "build", 10050 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room96",
	]) );
	set( "long", @LONG

�����ҵ�$HIW$�Է�
$NOR$һ���ſ�����һ�Ŵ�
�������$HIM$sleep$NOR$�������ĵط�
����$HIW$�ƹ�$NOR$���
�Ա���һ�ȴ�
�����⿴��ֻ��һ��$HIR$��$HIG$��$HIC$��$HIY$��$NOR$�����۵�
�㲻����̾�� Ѿ��$HIC$����$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
