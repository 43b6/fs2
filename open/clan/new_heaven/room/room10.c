inherit ROOM;
void create() {
	set( "short", "$HIC$����$HIR$��ͥ$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/new_heaven/room/room9",
	]) );
	set( "long", @LONG
�����������õ���ͥ���, ����һ������Ĵ���, �Ա߻���
����ʯ�����ʹ��, ����Կ���ǰ�治Զ���и���ɫ����Ȫ, ��
�ƺ����������õĵ�һ��, $HIM$��Ȫ��ˮ$NOR$��
LONG);
	setup();
	replace_program(ROOM);
}
