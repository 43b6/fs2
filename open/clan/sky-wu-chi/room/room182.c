inherit ROOM;
void create() {
	set( "short", "$HIC$а�»���$NOR$" );
	set( "build", 66 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room181.c",
		"west"      : "/open/clan/sky-wu-chi/room/room185.c",
		"south"     : "/open/clan/sky-wu-chi/room/room180",
	]) );
	set( "long", @LONG
�߽�����,���һ�����������Ĵ���¯�����ڹ��Ĵ���֮��
¯��Ʈ����һ�������㾫����ˬ�İ���,ʹ�㾪�ȵ���,ԭ������
����޼�����~~~[0;1;36m��[1mM[1m��[1m��[1m��[1mP[1m��[1mJ[0m������������������...........

<----[0;1;33m��[1mH[1m��[1m��[1m��[1mB[1m��[1m��[1m��[1m��[1m��[1mp[1m��[1mM[1m��[1m��[1m [1m [1m [1m��[1mL[1m��[1mp[1m��[1m��[1m��[1m��[1m��[1m��[0m---->
LONG);
	setup();
	replace_program(ROOM);
}
