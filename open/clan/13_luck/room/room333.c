inherit ROOM;
void create() {
	set( "short", "���֮��" );
	set( "object", ([
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount4"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/capital/obj/chen_dagger",
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount6"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 1,
	]) );
	set( "owner", "smalloo" );
	set( "build", 10374 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room334",
		"north"     : "/open/clan/13_luck/room/room335.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ���ֱ�������㣬�Ϳ쵽[0;1;34m��[1m��[1m��[1m��[1m��[1m��[0m�ˡ������г�����[0;1;33m��[1m��[1m��[1m��[0m��[0;1;35m��[1m��[1m��[1mQ[0m��
���紵Ϯ��������ǿ�ң��·�����˵�����뵽[0;1;34m��[1m��[1m��[1m��[1m��[1m��[0m���Ṧ��������
��·һ������ʱ�㱻���紵������Ȳ�ס�Ų���������[0;1;33m��[1m��[1m��[1m��[0m����ͣ��
�ӿ�Ų���ǰ��ȥ����ʱ���ںڵ��Ʋ㴵������ѹ���㴭��������
����æ[0;1;33m��[1mB[1m��[1m\[0m�Ա���


LONG);
	setup();
	replace_program(ROOM);
}
