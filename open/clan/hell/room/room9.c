inherit ROOM;
void create() {
	set( "short", "$HIM$��$HIY$�����$HIM$��$NOR$" );
	set( "owner", "taxi" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10386 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room5.c",
		"east"      : "/open/clan/hell/room/room18.c",
		"west"      : "/open/clan/hell/room/room115",
		"up"        : "/open/clan/hell/room/room8.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

$WHT$������$HIG$^(OO)^$WHT$�ĵ��̣����������Ź����ζ��............
�ƹ�����$HIB$kalin,$WHT$����ר�ĵĿ���$HIR$С��Բ$WHT$�ĸ��������ǻ���ʱ����һ˿˿�����ѡ�
������������Ż�µ���ߵ�!!!!!ͻȻ��ת��ͷ�������Ц�������㲻������һ����!!!
����ֱ���� : ���ǿ���뿪������ߵط����ˣ���Ȼ��һ���ҵ�$HIM$�ջ�$WHT$��Ҫ����.. :P$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
