inherit ROOM;
void create() {
	set( "short", "��ƿ���д���4" );
	set( "owner", "ywarter" );
	set( "build", 10341 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/room334",
		"south"     : "/open/clan/sky-wu-chi/room/room157.c",
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
