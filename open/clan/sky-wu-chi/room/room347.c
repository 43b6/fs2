inherit ROOM;
void create() {
	set( "short", "���ײ����" );
	set( "owner", "roboo" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room345",
	]) );
	set( "object", ([
		"file2"    : "/open/scholar/obj/icefan",
		"file4"    : "/open/capital/guard/gring",
		"file3"    : "/open/tendo/obj/lucloth",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10003 );
	set( "long", @LONG
    ��������ǽ�������������С���ӣ���ͷ��֪���Ƿ���Щʲ
ô�������������о������������̣���֪��ԭ�������С���뱣��
�Ÿ��ֹ��������һЩʯ����ʯ�桢�͹��鼮����Щ������ʷ��ֵ
���ߵ���Ʒ������ѧ�ң�С�����������������о���Щ��Ϊ��֪��Զ
�����ϲ���֮�������顣
LONG);
	setup();
	replace_program(ROOM);
}
