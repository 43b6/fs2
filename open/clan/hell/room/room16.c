inherit ROOM;
void create() {
	set( "short", "$RED$èɭ��$NOR$" );
	set( "owner", "wanwanwan" );
	set( "build", 1124 );
	set( "light_up", 1 );
	set( "exits", ([
		"search"    : "/open/clan/hell/room/room17.c",
		"east"      : "/open/clan/hell/room/room12",
	]) );
	set( "long", @LONG
����ï���ɭ������ڲ����ر����ԣ�ǰ����·����ͨ�������أ�
�ɣ�������һ��$HIW$��ʯͷ$NOR$(stone)����������ƺ���������·��
������ȥ�������϶���һЩ��ʽ���ˣ�����ʽ����״����ȿ��ϣ�
���Ǳ���������ĸ������ˣ�Ī���Ǵ�˵��$RED$����è$NOR$��
�����Ĵ������������ջ�ɣ���

���������� $HIW$������������$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
