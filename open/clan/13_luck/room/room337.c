inherit ROOM;
void create() {
	set( "short", "�����" );
	set( "owner", "smalloo" );
	set( "object", ([
		"amount1"  : 1,
		"file4"    : "/open/killer/headkill/obj/w_dag",
		"file3"    : "/open/killer/headkill/obj/e_dag",
		"amount3"  : 1,
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"file1"    : "/open/killer/headkill/obj/f_dag",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/killer/headkill/obj/i_dag",
		"amount6"  : 1,
		"file6"    : "/open/killer/headkill/obj/f_dag",
	]) );
	set( "build", 10206 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room336",
		"north"     : "/open/clan/13_luck/room/room338",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ����ת�˼����䣬����[0;1;32m��[1mj[1m��[1mQ[1m��[1m��[0m������𣬵�������[0;1;33m��[1m��[1m��[1mD[0m��[0;1;30m��[1m��[1m��[1m��[0m��
��أ�������ů��[0;1;31m��[1m��[1m��[1m��[1m��[1m��[1m��[1m}[0m�����г��������������������д�������
�ཻ֮������Щ������ǰȥ����ԭ����[0;1;34m��[1m��[1m��[1m��[1m��[1m��[0m��[0;1;36m��[1m��[1m��[1m��[1m��[1m��[0m����ͽ�ڻ���
[0;1;35m��[1m��[1m��[1mR[1m��[1mZ[1m��[1m��[0m���㿴���ڶ�������д裬���������ս�������Ҳ�̲�
ס��ȥһ�����һ�¡�


LONG);
	setup();
	replace_program(ROOM);
}
