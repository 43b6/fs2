inherit ROOM;
void create() {
	set( "short", "$HIR$��ڣ$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
	]) );
	set( "build", 11804 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28.c",
	]) );
	set( "long", @LONG
���������½�������֮��������ȥ��,����������,�����ᱻ�����������˴�
�Դ�Ϊ��,������Ҳ���������Ĵ����޻��������ղ��ڴ˴�,����������̤���˴�
�������������н�������,������Ϊ���������,�����ᱻ�˴��Ľ�������,�ഫ����
�����ռ�ȫ�����潣,�����ڴ�

LONG);
	setup();
	replace_program(ROOM);
}
