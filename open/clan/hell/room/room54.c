inherit ROOM;
void create() {
	set( "short", "$HIY$����$HIG$����Ժ$NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount4"  : 1,
		"file6"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount9"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/tendo/obj/chaosbelt",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file8"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "kalin" );
	set( "build", 10074 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room55.c",
		"south"     : "/open/clan/hell/room/room63.c",
		"east"      : "/open/clan/hell/room/room46",
		"west"      : "/open/clan/hell/room/room4.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
kalin�Դ�ת�����ֺ�...�����޴�����..
ԭ������֮ǰ��wiz��aol��ֻ^(OO)^ͷ..
sigh 1000000000
��������min�а���������һдquest��nike..
��Ȼminƽʱ��������..�޶���..
����λ���Ҫ��л����..
��������������������..����������..
anyway...kalin�����ڴ˰�������������..
��������㿴����..������������ͷ..��οһ��..

LONG);
	setup();
	replace_program(ROOM);
}
