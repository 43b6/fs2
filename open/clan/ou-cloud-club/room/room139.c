inherit ROOM;
void create() {
	set( "short", "$HIG$Rage Against The Machine$NOR$" );
	set( "owner", "devil" );
	set( "object", ([
		"file10"   : "/open/killer/obj/dagger",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 99,
		"amount8"  : 99867,
		"file8"    : "/open/killer/obj/bellstar",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"file5"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file4"    : "/open/killer/obj/s_pill",
		"file7"    : "/open/killer/headkill/obj/i_dag",
		"amount6"  : 18,
		"amount10" : 1,
		"amount4"  : 70,
		"file6"    : "/open/ping/obj/poison_pill",
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10816 );
	set( "exits", ([
		"enter"     : "/open/clan/ou-cloud-club/room/room177",
		"west"      : "/open/clan/ou-cloud-club/room/room16",
	]) );
	set( "long", @LONG

������ɼ�ı���������Rage Against The Machine��
��Hip Hop/Punk����������һ֦���㣬�����������ڼ�
�������ĵ���������֮�����˼��ĸ��͸��Hip 
Hop��Punkײ������ʽ�������Ρ�������⣬ǿ�Ƽ���
���ߺ��⺷��ˡ���ź�����Ⱥ�ڵĹ����� 

LONG);
	setup();
	replace_program(ROOM);
}
