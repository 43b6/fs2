inherit ROOM;
void create() {
	set( "short", "$HIC$а�»���$HIY$����$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room177.c",
		"north"     : "/open/clan/sky-wu-chi/room/room180",
	]) );
	set( "long", @LONG
�߽�����,���һ�����������Ĵ���¯�����ڹ��Ĵ���֮��
¯��Ʈ����һ�������㾫����ˬ�İ���,ʹ�㾪�ȵ���,ԭ������
����޼�����~~~[0;1;36m��[1mM[1m��[1m��[1m��[1mP[1m��[1mJ[0m������������������...........
LONG);
	setup();
	replace_program(ROOM);
}
