inherit ROOM;
void create() {
	set( "short", "а�»��Ȳ�������  v" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room193.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
    �߽�����,���һ�����������Ĵ���¯�����ڹ��Ĵ���֮��
¯��Ʈ����һ�������㾫����ˬ�İ���,ʹ�㾪�ȵ���,ԭ������
����޼�����~~~[0;1;36m��[1mM[1m��[1m��[1m��[1mP[1m��[1mJ[0m������������������...........

<----[0;1;33m��[1mp[1m��[1m��[1m��[1mk[1m��[1m��[1m��[1m��[1m��[1m��[0m   [0;1;33m [1m��[1mp[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m-[1m-[1m-[1m-[1m>[0m

LONG);
	setup();
	replace_program(ROOM);
}
