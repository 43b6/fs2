inherit ROOM;
void create() {
	set( "short", "$HIC$��ѩ���$NOR$�����" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/ping/obj/ring-2",
		"file1"    : "/open/ping/obj/ring-2",
		"amount1"  : 1,
	]) );
	set( "build", 11208 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room39",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
����ظ��İ������Ŷ���һ���̶ȵ�ˮ׼,�õ���ѩ��䶼û��ɶ������
Ȼ��Ϊ��Ӧ���������ֻ���׳�,ect.$HIR$kalin,blur,nirvana$NOR$��Щ���Ŀ챬ը��
����,С��������������һ�䷿���ű�ѩ���,�����Ż�����������ȥ���
��,������������,��Ȼ���ְ��ڸ���������ȡ��

LONG);
	setup();
	replace_program(ROOM);
}
