inherit ROOM;
void create() {
	set( "short", "$RED$è��� ����$NOR$" );
	set( "owner", "onyx" );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room14",
		"enter"     : "/open/clan/hell/room/room38",
	]) );
	set( "object", ([
		"file2"    : "/open/mogi/castle/obj/sspill",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/sky/obj11/yellow-crystal",
		"amount7"  : 16,
		"file7"    : "/open/mogi/castle/obj/ninepill",
		"file6"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file9"    : "/daemon/class/blademan/obj/mkblade",
		"amount3"  : 1,
		"amount4"  : 3,
		"amount5"  : 1,
		"file3"    : "/open/gblade/obj/sa-head",
		"amount2"  : 4,
		"file5"    : "/open/scholar/obj/icefan",
		"file4"    : "/open/fire-hole/obj/w-pill",
	]) );
	set( "light_up", 1 );
	set( "build", 10057 );
	set( "long", @LONG
    ������^(OO)^�ĵ��̣����������Ź����ζ��........
������ƹ�����kalin,����ר�ĵĿ���С��Բ�ĸ��������ǻ���ʱ����һ˿˿�����ѡ�
������������Ż�µ���ߵ�!!!!!ͻȻ��ת��ͷ�������Ц�������㲻������һ����!!!
    ������^(OO)^�ĵ��̣����������Ź����ζ��........
LONG);
	setup();
	replace_program(ROOM);
}
