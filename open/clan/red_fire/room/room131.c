inherit ROOM;
void create() {
	set( "short", "$HIC$��$YEL$����$HIW$·$HIC$��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room130.c",
		"north"     : "/open/clan/red_fire/room/room125",
	]) );
	set( "long", @LONG
����������ߵ�һ������$YEL$��Ţ$NOR$��Ұ��$HIW$С·$NOR$����ʱ���ие�һ����
������ʲô�õط������ŵ��¶�մ����$YEL$��ɫ$NOR$����������һ����̤������
��·������·��������֮�⣬��ȫû����������֮�����������$HIR$ð��$HIM$����$NOR$
��Ȼʹ�������ǰ������


LONG);
	setup();
	replace_program(ROOM);
}
