inherit ROOM;
void create() {
	set( "short", "��˪��-����" );
	set( "light_up", 1 );
	set( "owner", "roboo" );
	set( "build", 10182 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room206",
		"east"      : "/open/clan/sky-wu-chi/room/room362.c",
		"west"      : "/open/clan/sky-wu-chi/room/room361.c",
		"south"     : "/open/clan/sky-wu-chi/room/room241.c",
	]) );
	set( "long", @LONG
��Ȼ�������������еķ��䲢û��̫��Ĳ��һ��������ˮ
�����Ƴɵģ���ȴ���κ�һ������Ҫ�����ࡣ���컨�忴ȥ����
������ˮ������ɵ����͸�����΢��Ϊ�εĳ̶����㻳���Ǹ���
�͸����Ƿ������Ϯ���������߿�ȥ���Կ���������Ž��յķ���
�����ߵķ����Ϸ����Ҷ�д�ţ�������������о��������ߵķ���
����ɢ����һ������������������ض���ѹ�ȵĸо���������ԥ
���Ƿ�Ӧ������һ̽�����������ߵķ����ϵ��Ҷ���д�ţ��ؾ���
�����������ⷿ�����ƺ�����������ʿ������׷������ű���ɡ�
LONG);
	setup();
	replace_program(ROOM);
}
