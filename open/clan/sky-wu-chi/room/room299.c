inherit ROOM;
void create() {
	set( "short", "ذ�׷�" );
	set( "light_up", 1 );
	set( "build", 10715 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room307",
	]) );
	set( "owner", "erme" );
	set( "long", @LONG
������һ��СС��ذ�׷�,һ�����ذ�׵�ǽ,һ˿�����Ĺ���,
һ̨���µ��̖�,����СС�Ŀ��ʹ���,�������������ذ�׷�,
Сľ����ɢ���ż�������,������һЩ����������յ���,
��������ϲ��������ƻ���ΰ�ɱ���ˣ���
LONG);
	setup();
	replace_program(ROOM);
}
