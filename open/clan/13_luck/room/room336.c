inherit ROOM;
void create() {
	set( "short", "����֮��" );
	set( "object", ([
		"amount4"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 1,
		"file8"    : "/open/killer/headkill/obj/world_dag",
		"amount8"  : 1,
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1,
	]) );
	set( "owner", "smalloo" );
	set( "build", 10653 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room335",
		"north"     : "/open/clan/13_luck/room/room337",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ��������������һ���ŵ�[0;1m��[1mg[1m��[1m��[0m��ʹ��·�����������[33m�Ժ�[0m��ʹ
��ͻȻ������һ��������һ��[0;1;30m��[1m��[1m��[1mY[0m����æ�Ŀ�����˵�·������ææ
������ȷ��·;��ȥ�����֮�������˸о���[0;1;5;34mo[1;5m��[1;5mS[1;5m��[1;5m_[1;5m��[1;5mS[1;5m��[1;5m��[1;5m��[1;5m��[0m�ĵط�����
һʱҲ���������е��ذ����ڣ���ʱ���ںڵ��Ʋ㴵������ѹ����
��������������æ[0;1;33m��[1mB[1m��[1m\[0m�Ա���


LONG);
	setup();
	replace_program(ROOM);
}
