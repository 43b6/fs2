inherit ROOM;
void create() {
	set( "short", "$HIC$������$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/room2",
		"up"        : "/open/clan/sky-wu-chi/room/room7.c",
	]) );
	set( "long", @LONG
����������޼����°�������Ϣ�����ĵĳ�����
Ҫ�����������,�����ڴ˵�������Ϣ,������һ����
,��Ҷ���ܻ�ӭ���.���������°��ڻ�����һ����
��ң��ڴ���Ϣ����������ѵ�ѡ�񡣳�����Ϣ����
��Ҳ��ͨ��������Ա����ĵ�·��

LONG);
	setup();
	replace_program(ROOM);
}
