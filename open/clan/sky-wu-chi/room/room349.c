inherit ROOM;
void create() {
	set( "short", "Сѩ��֮��" );
	set( "owner", "sca" );
	set( "light_up", 1 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
��������ĳ��Ⱥ�, ���������ڷ�, ����˽����ĳ�˵��Է�, ����ͨ
���鷿, ������ˮ����������ɴ����Ʈ�Ŷ��İ���, �����Ĵ���Ҷ
����������, ��еĴ��������Ŵ˴�, ��ľ����, �滨����, һ����
���ӻ�ľ�к��ʯ��֮��, ���΢��, ����ҡҷ, ������ӳ��, ��
����Ƥ�����е������ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
