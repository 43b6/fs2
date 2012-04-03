inherit ROOM;
void create() {
	set( "short", "$HIW$������$NOR$" );
	set( "owner", "bbsman" );
	set( "object", ([
		"amount10" : 1,
		"file2"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/open/gblade/obj/dragon_book",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/gblade/obj/dragon_book",
		"amount6"  : 1,
		"file3"    : "/open/gblade/obj/dragon_book",
		"file7"    : "/open/gblade/obj/sa-head",
		"amount5"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/capital/obj/king-cloth",
		"amount1"  : 1,
		"file6"    : "/open/prayer/obj/speed-ring",
		"file5"    : "/open/tendo/obj/book",
		"amount4"  : 1,
		"file9"    : "/open/capital/obj/king-ring",
		"file1"    : "/open/killer/obj/kill_yar_head",
	]) );
	set( "light_up", 1 );
	set( "build", 10195 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room343.c",
		"east"      : "/open/clan/sky-wu-chi/room/room287.c",
		"out"       : "/open/clan/sky-wu-chi/room/room119.c",
		"north"     : "/open/clan/sky-wu-chi/room/room344.c",
		"west"      : "/open/clan/sky-wu-chi/room/room250.c",
	]) );
	set( "long", @LONG
$HIC$Ʈ��Ļ�ѩ�ڿ������������£���������������˼������⣬��
����ѩ�Ƕ�ô�����������������䲻�Ǻܻ������������˸е�������
�ţ����ܷǳ����$HIW$�������ӡ�$NOR$$HIC$��Ȼ�����鴫����ǽ���Ϲ���һ����
��������д�����ǡ�����Ⱥ�ۡ���$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
