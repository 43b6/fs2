inherit ROOM;
void create() {
	set( "short", "$HIC$а�»���$NOR$" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room181.c",
		"east"      : "/open/clan/sky-wu-chi/room/room191.c",
		"north"     : "/open/clan/sky-wu-chi/room/room211",
		"west"      : "/open/clan/sky-wu-chi/room/room192.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
      �߽�����,���һ�����������Ĵ���¯�����ڹ��Ĵ���֮��
¯��Ʈ����һ�������㾫����ˬ�İ���,ʹ�㾪�ȵ���,ԭ������
����޼�����~~~[0;1;36m��[1mM[1m��[1m��[1m��[1mP[1m��[1mJ[0m������������������...........

<----[0;1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1mp[1m��[1m��[0m   [0;1;33m��[1md[1m��[1md[1m��[1m��[1m��[1m��[1m��[1mp[1m��[1mM[1m��[1m��[0m---->

LONG);
	setup();
	replace_program(ROOM);
}
