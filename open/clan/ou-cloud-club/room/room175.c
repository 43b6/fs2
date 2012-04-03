inherit ROOM;
void create() {
	set( "short", "���ذ���԰" );
	set( "light_up", 1 );
	set( "owner", "sisao" );
	set( "object", ([
		"file6"    : "/open/mogi/castle/obj/ninepill",
		"file5"    : "/open/mogi/castle/obj/ninepill",
		"file4"    : "/open/sky/obj11/orange-crystal",
		"amount8"  : 5,
		"file9"    : "/open/mogi/castle/obj/blood-water",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount10" : 1,
		"file3"    : "/open/mogi/castle/obj/sspill",
		"file7"    : "/open/mogi/castle/obj/sspill",
		"amount6"  : 39,
		"amount4"  : 1,
		"amount2"  : 4,
		"amount3"  : 340,
		"amount9"  : 1,
		"amount5"  : 500,
		"amount7"  : 50,
		"file2"    : "/open/mogi/dragon/obj/power",
		"amount1"  : 250,
		"file10"   : "/open/dancer/obj/maple_ribbon",
		"file8"    : "/open/mogi/castle/obj/blood-water",
	]) );
	set( "build", 10830 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room150",
	]) );
	set( "long", @LONG
������С����һЩ�ѵõı���ĵط�,���������һ��İ���԰ʵ��
���ڵ�����С���Ĵ��L�����ı���,ֻ���ڻ���Ѽ��С��Ҫȥ��ս����
ħ����ʱ����п����õ�,�˴��ܵ��ǳ����ܵĿ���,����û�л���Ѽ
��С��������,���ǿ��뿪��.

LONG);
	setup();
	replace_program(ROOM);
}
