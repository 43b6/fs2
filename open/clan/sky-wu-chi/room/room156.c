inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIW$����ҩ��$HIC$��$HIW$С��$NOR$" );
	set( "owner", "mudu" );
	set( "light_up", 1 );
	set( "build", 10080 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room24",
	]) );
	set( "long", @LONG
���ⷿ�������ŵ���С���ѵõ�����ʥҩ�����˲���
����������������������վ��һ�Ե�С�ܣ�������С��
�����꣬������һ��СС��ҩ��󣬱��������׳������
��һ��˽�����ҵ���಻�������Ķ���������һ�ԵĲ���
���˵�ʥƷ�𡣡���

LONG);
	setup();
	replace_program(ROOM);
}
