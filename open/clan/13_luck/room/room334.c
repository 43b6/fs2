inherit ROOM;
void create() {
	set( "short", "����ô���" );
	set( "object", ([
		"amount6"  : 1,
		"file3"    : "/open/mogi/castle/obj/sspill",
		"amount7"  : 1,
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 61,
		"file1"    : "/obj/gift/shenliwan",
		"amount3"  : 47,
		"file7"    : "/open/sky/obj8/summer_wind",
		"file5"    : "/open/capital/obj/chen_dagger",
		"amount1"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"amount4"  : 1,
		"file6"    : "/daemon/class/bonze/puty_pullium",
	]) );
	set( "owner", "smalloo" );
	set( "build", 10929 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room332",
		"north"     : "/open/clan/13_luck/room/room333",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ���ջ�[0;1;33m��[1m��[1m��[1mO[0m��ͣ������������ǰ�棬�㻻���ֵĵط����ˣ�[0;1;34m��[1m��[1m��[1m��[0m
[0;1;34m��[1m��[0m�����˼��֮����[0;1;32m��[1m��[1m��[1m��[0m���ƣ�����[0;1;30m��[1mK[1m��[1m��[0m��Ƕ��[31mͭ��[0m�����Ż����Ŵ�
˵�е�������----[0;1;31m��[1m��[1m��[1m��[1m��[1m��[0m������������[0;1;5m��[1;5mH[1;5m��[1;5m��[1;5m��[1;5m{[1;5m��[1;5m��[0m��ʹ�㲻��������
�������� 


LONG);
	setup();
	replace_program(ROOM);
}
