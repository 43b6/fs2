inherit ROOM;
void create() {
	set( "short", "�˷��Ƶ�ʯ��" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room127",
		"east"      : "/open/clan/hell/room/room108.c",
	]) );
	set( "long", @LONG
һ������ŭ�Ե���һ��Сɽ���ڵ�ʯ�ݡ����ǵ�����Ƨ���ĵط�
��һ�������������˼ҡ�����ʯ�ݲ���ɽ�ȵľ�ͷ����ǰС����ˮ��
�ǳ����š�
�������޾���ǧ����һ�顣
��ǰ��С������Ϊɽ���ĸߣ�ǡ�ÿ���һС�ض�ͥ���ĺ�ˮ��
��ͥ����ˮ���˵��������������š�
LONG);
	setup();
	replace_program(ROOM);
}
