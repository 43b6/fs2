inherit ROOM;
void create() {
	set( "short", "С��԰" );
	set( "owner", "bbsman" );
	set( "light_up", 1 );
	set( "object", ([
		"file2"    : "/open/gblade/obj/dragon_book",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount6"  : 1,
		"file3"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"file7"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount8"  : 1,
		"file8"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount1"  : 1,
		"file6"    : "/open/quests/snake/npc/obj/snake_gem",
		"file5"    : "/open/killer/obj/kill_yar_head",
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount4"  : 1,
		"file9"    : "/open/killer/obj/k_ring",
	]) );
	set( "build", 10361 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room122",
	]) );
	set( "long", @LONG
������һ��С��԰�������ʻ�����ľ�������˷ҷ���ζ�����˲�����
�������һ�ᣬ�м仹�и�Сˮ�����滹�м�ֻ���������ˮ����������
Ŀ����������˿������ܰ�����ط����������չ˵ĺܺú�Ư��������͸
��Ҷ�������������ů����Ĳ������������
LONG);
	setup();
	replace_program(ROOM);
}
