inherit ROOM;
void create() {
	set( "short", "��ƿ���д���5" );
	set( "build", 10044 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room335",
		"east"      : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/hall",
		"south"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
����������Ҫ̸���ܵĵط�,�����ܿ�����������һ�����䳡
ԭ���ǿ�ƿ��ϲ���������,˳��˵�����ĵ�,����һЩ�߽׵�
���Ѷ������̸������,������,Ϊ�˱�������͵��,���Կ�ƿ��
�����һ�����,ʹ���˰˳ɹ�����������һ���������
�κ�����������ֻ����say ��������ȥ����..
Ҳ������Ϊ��̫�����ܵĹ�ϵ��...
LONG);
	setup();
	replace_program(ROOM);
}
