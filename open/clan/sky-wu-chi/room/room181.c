inherit ROOM;
void create() {
	set( "short", "$HIC$а�»���$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room193.c",
		"south"     : "/open/clan/sky-wu-chi/room/room182.c",
		"east"      : "/open/clan/sky-wu-chi/room/room189.c",
	]) );
	set( "long", @LONG
�߽�����,���һ�����������Ĵ���¯�����ڹ��Ĵ���֮��
¯��Ʈ����һ�������㾫����ˬ�İ���,ʹ�㾪�ȵ���,ԭ������
����޼�����~~~[0;1;36m��[1mM[1m��[1m��[1m��[1mP[1m��[1mJ[0m������������������...........

<----[0;1;33m��[1mG[1m��[1m��[1m��[1m��[1m��[1mp[1m��[1m��[1m [1m [1m [1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mD[1m��[1mD[1m��[1m��[0m---->
LONG);
	setup();
	replace_program(ROOM);
}
