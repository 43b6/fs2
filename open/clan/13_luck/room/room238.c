inherit ROOM;
void create() {
	set( "short", "����" );
	set( "owner", "dancer" );
	set( "object", ([
		"amount6"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"file10"   : "/open/killer/memory/static",
		"file5"    : "/open/magic-manor/obj/golden-ball",
		"file6"    : "/open/killer/memory/static",
		"amount1"  : 1,
		"file2"    : "/open/magic-manor/obj/soil-ball",
		"file7"    : "/open/killer/memory/static",
		"amount10" : 1,
		"file4"    : "/open/magic-manor/obj/fire-ball",
		"file1"    : "/open/magic-manor/obj/water-ball",
		"amount9"  : 1,
		"file3"    : "/open/magic-manor/obj/wood-ball",
		"file9"    : "/open/killer/outsea/dstone",
		"amount7"  : 1,
		"file8"    : "/open/killer/outsea/dstone",
		"amount4"  : 1,
	]) );
	set( "build", 10699 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room119",
		"south"     : "/open/clan/13_luck/room/room239",
	]) );
	set( "long", @LONG

������ҹ�ι���¥,�����������������ƽ�������ǽ�ֹ�κ��˵Ľ���
��,�����ǹ���Ҳ����Υ���������,�����������ش��ֺ���,�����ܶ�
��������κζ���.�������ɻ�����ô��û���κε��ػ���,���ܵ�ǽ��
����ʮ����â������ʮֻ�������޶���˵��û�ǿ����Ҫ��������.

LONG);
	setup();
	replace_program(ROOM);
}
