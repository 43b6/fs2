inherit ROOM;
void create() {
	set( "short", "$HIW$���޳�˵����ι�������ģ����ʲô����?$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room126.c",
		"east"      : "/open/clan/hell/room/room123.c",
		"up"        : "/open/clan/hell/room/room109",
		"south"     : "/open/clan/hell/room/room13.c",
	]) );
	set( "long", @LONG

���޳���������۹ⶢ���㣬����Ҫ�������һ���Ƶġ�

���޳����ߡ���һ�����������ͳ�һ�����ʲ�Ķ��������š�

���޳��x�ϲ��ӣ�˵�����ף�����δ������ô���ܣ�

���޳�ɦ��ɦͷ��̾�������˰��ˣ����߰ɡ�

һ�������Ũ��ͻȻ���֣��ܿ�ذ�Χ���㡣

LONG);
	setup();
	replace_program(ROOM);
}
