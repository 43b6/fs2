inherit ROOM;
void create() {
	set( "short", "$HIB$���$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/quests/snake/npc/obj/snake-3",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/gblade/obj/sa-head",
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/killer/obj/kill_yar_head",
		"file7"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/killer/obj/k_ring",
		"amount10" : 1,
		"file2"    : "/open/capital/room/king/obj/dagger1",
		"amount7"  : 1,
	]) );
	set( "build", 10016 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room128.c",
		"west"      : "/open/clan/ou-cloud-club/room/room189.c",
	]) );
	set( "long", @LONG

     $HIR$���ǻ��ҵ��洫�������ܹ�����ȫȫ����ϻ��Ҿ�ѧ$NOR$


�������ӰԼһֱ������տ����ө��....
����һ��...��..�ⲻ�ǻ�����ר�õı�����....
Ī��ǰЩ���ӻʹ����..��С����Ϊ...
�����ɱͷ֮��Ү.....����С�����������֮ͽ
LONG);
	setup();
	replace_program(ROOM);
}
