inherit ROOM;
void create() {
	set( "short", "$HIB$а������$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room182.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"south"     : "/open/clan/sky-wu-chi/room/room178.c",
	]) );
	set( "long", @LONG
�ߵ���,ͻȻ��ֹͣ�˽Ų�,����а������,�㲻����������������
������������а��ˮ���������,����,����������ɫ�Ĺ�â....
��ҫ��ˮ��������������,ʹ���۾����â������ʧȥ�о�,ģ����
ֻ����������....[0;1;5;34m��[1;5m��[1;5m~[1;5m~[1;5m~[1;5m��[1;5m��[1;5m~[1;5m~[1;5m~[1;5m��[1;5m��[1;5m~[1;5m~[1;5m~[1;5m��[1;5mU[0m
LONG);
	setup();
	replace_program(ROOM);
}
