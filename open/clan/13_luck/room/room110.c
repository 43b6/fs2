inherit ROOM;
void create() {
	set( "short", "EMC ����ϰ���" );
	set( "object", ([
		"amount6"  : 1,
		"amount4"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/capital/guard/gring",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10248 );
	set( "owner", "adeyzit" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room104",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
����ϰ�Ϊѵ������ͷϷ,�������˵���һ��ʮ���¶�û���ܹ�..
��һ�ϰ��ߵͿ���..�ڶ����ĸ�..Ҫע��..�ڶ��ϰ�Ϊ����
������Щ����..�����յ�ס�żеĽ�����Ҫ..����Ϊ��ǽ
����Ϊ����̨..�����ϰ�Ϊɳ��..�����ϰ�Ϊ��ľ��..
����Ϊ������..���ְ�����������ٵĨ�..ȫ����װ��ǹ��..
LONG);
	setup();
	replace_program(ROOM);
}
