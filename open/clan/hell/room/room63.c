inherit ROOM;
void create() {
	set( "short", "$HIY$�Ϲ�����������$WHT$֮Ĺ$NOR$" );
	set( "owner", "kalin" );
	set( "object", ([
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/doctor/pill/gnd_pill",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount5"  : 96,
		"amount10" : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 111,
		"amount8"  : 1,
		"file3"    : "/open/fire-hole/obj/k-pill",
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount1"  : 20,
		"amount9"  : 1,
		"amount3"  : 4,
		"file2"    : "/open/ping/obj/poison_pill",
		"file4"    : "/open/doctor/pill/sky_pill",
	]) );
	set( "build", 10348 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room44",
		"north"     : "/open/clan/hell/room/room54.c",
		"east"      : "/open/clan/hell/room/room51.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
���㿴�����Ĺ��ʱ..
һ������һ��...���в�������..
Ȼ�����ն�������?
������̾�˿���....

ѹ���ű�������ϧ...
��������Ĺ������...

˵ʱ����ʱ��..ͻȻ���꽻��...���ײ���..
Ĺڣ��Ȼ����һ���ѷ�...
�ɳ�һֻ��ͷ�̲�Ӭ....

ACK 1000 one.. oh my god!!
LONG);
	setup();
	replace_program(ROOM);
}
