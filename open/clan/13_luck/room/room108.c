inherit ROOM;
void create() {
	set( "short", "�г�" );
	set( "object", ([
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount3"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"file4"    : "/open/tendo/obj/shoe",
		"amount2"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
	]) );
	set( "build", 11232 );
	set( "light_up", 1 );
	set( "owner", "acomidy" );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room80",
	]) );
	set( "long", @LONG
������..�����ڶ�İг�..һ��������acomidy ����ϰ�����ĵط�..
��75���߰г�..175�г�..��300�г�..�����1500���ߵ���׼���..
׼���뷢��һЩ�¾���..�ȴ�exp 300one�ĵ���..
Ҳ�ڴ�ΰ�����ʦ�ܸ�����һЩ����ʽ..������һֱû��ȥ����߽׵�����
���Ժ���з��֮���ĳ���..addoil
LONG);
	setup();
	replace_program(ROOM);
}
