inherit ROOM;
void create() {
	set( "short", "Ѱ��" );
	set( "owner", "yaoblade" );
	set( "object", ([
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file6"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file5"    : "/daemon/class/blademan/obj/six-neck",
		"file2"    : "/daemon/class/blademan/obj/six-neck",
		"amount4"  : 1,
		"amount6"  : 1,
		"file10"   : "/daemon/class/blademan/obj/ublade",
		"file8"    : "/daemon/class/blademan/obj/ublade",
		"amount10" : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"amount5"  : 1,
		"file7"    : "/daemon/class/blademan/obj/ublade",
		"file4"    : "/open/capital/obj/blade2",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
	]) );
	set( "build", 10109 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room368",
		"north"     : "/open/clan/13_luck/room/room101",
	]) );
	set( "long", @LONG

    �㣬��ڼΪ������ʦ�ĺ����ȴ���ų�Խ���˰�Ƿ����������d
��������������δ��ɵ��ش�ʹ������������ʵ��������ص�������
��ȴ�ڿ���ռ����Ĵ��ε����ҵ�һЩ�ɿ��Ļ�鹲��ʮ�����飬ֻ
Ϊ����Ѱ������ʧ������ڰ�ħ����Ψһ��һ��������

LONG);
	setup();
	replace_program(ROOM);
}
