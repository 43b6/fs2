inherit ROOM;
void create() {
	set( "short", "$HIB$�ᵶڣ$NOR$" );
	set( "owner", "hild" );
	set( "build", 10040 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room90.c",
		"west"      : "/open/clan/sky-wu-chi/room/room87.c",
		"east"      : "/open/clan/sky-wu-chi/room/room80",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
�����������һ������ֱ����������㿴�˿����ܣ�ԭ��������
��˵���ᵶ�ĵط�����˵�����������ѣ�Ŀǰ������Ϊ��һ����������
����ӵ���߱����м���Ĺ�����Ѫ����Ϣ������ᱻ�䵶������ԭ����
���ԣ�ʣ�µ�����δ�������ݳ�����˵��δ����֮������������������
������Ϊǿ�󣬵��վ���һ��δ��Ĵ�˵������
LONG);
	setup();
	replace_program(ROOM);
}
