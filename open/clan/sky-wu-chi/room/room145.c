inherit ROOM;
void create() {
	set( "short", "��ɫˮ�����" );
	set( "owner", "palapala" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10946 );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/ping/questsfan/obj/box",
		"amount7"  : 1,
		"file1"    : "/open/ping/questsfan/obj/diamond_legging",
		"file6"    : "/open/ping/questsfan/obj/kingblade",
		"file9"    : "/open/ping/obj/cloud_fan",
		"file7"    : "/daemon/class/fighter/armband",
		"amount1"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file10"   : "/daemon/class/fighter/ywhand",
		"file4"    : "/open/ping/questsfan/obj/glaze",
		"file2"    : "/open/ping/questsfan/obj/manual",
	]) );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room130",
		"east"      : "/open/clan/sky-wu-chi/room/room146.c",
		"south"     : "/open/clan/sky-wu-chi/room/room76.c",
	]) );
	set( "long", @LONG
����һ�߽�����ʱ����ɫˮ�����Ϸ����һ����ɫ�Ĺ���������
�㼱æ���Ĵ����㣬����������û���õģ��������������ٵļӿ�
ˮ����������Ĺ�Ҳ��Խ�죬����Խ���������ֻ�����ڲ����ѵ���
��֮�£�ֻ����Ŷ��ӣ�����ֻ���㲻֪�������ӵ���ĵط�ʱ��Ҳ
����һЩͬ���ķ���װ�����ڵ����㣬������������ǿ������������
�ɡ���������Ҫ��ֻ�ܹ����Լ�ѧ�ղ�����

LONG);
	setup();
	replace_program(ROOM);
}
