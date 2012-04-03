inherit ROOM;
void create() {
	set( "short", "EMC �г�" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"file6"    : "/open/doctor/pill/gnd_pill",
		"file4"    : "/open/fire-hole/obj/w-pill",
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount5"  : 25,
		"amount1"  : 69,
		"file5"    : "/open/mogi/castle/obj/sspill",
		"file9"    : "/open/fire-hole/obj/w-pill",
		"file2"    : "/open/ping/obj/poison_pill",
		"amount7"  : 1,
		"amount9"  : 89,
		"file10"   : "/open/magic-manor/obj/magic-sign",
		"amount3"  : 34,
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file7"    : "/open/fire-hole/obj/r-pill",
		"amount10" : 1,
		"amount6"  : 240,
		"amount2"  : 49,
		"amount4"  : 9,
	]) );
	set( "build", 10038 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room104",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
���˰г�..��������һ���ķ�..M16 ��ǹ.��75M 175M 300M����..
�ַ�����,����,����..���˲�ǹ..����45 ��ǹ..M249 ��ǹ
��T74 ��ǹ..������ �������Ͳ,����60 ����..ֻ����40��ǹ
��Ȼ�������������쵽����..
����ͨ�������ߴ�װ�����Ĵ�ҵ��..
��һ�����������ս,����.. �ֳ�,ͨѶ,��ѧ,�۲�,����,����,����
LONG);
	setup();
	replace_program(ROOM);
}
