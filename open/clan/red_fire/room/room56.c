inherit ROOM;
void create() {
	set( "short", "��԰" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/obj/gift/bingtang",
		"amount2"  : 1,
		"file2"    : "/obj/gift/xiandan",
	]) );
	set( "owner", "edcfr" );
	set( "build", 11042 );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room57",
	]) );
	set( "long", @LONG

�������ǰ���˹��ͥ԰�������ļ��紺����������������Ư����ֲ
���Ұ�ٺ�(lily)����õ��(rose)�������⻹������ද����
����(mongolian lark)���Ʊ� (panther)�ȣ��㲻ʱ��������������
����ˮ����������ȥ��ֻ��һ���������Ƶĸ�ɽ�����������˼��ɾ�
ѽ!


LONG);
	setup();
	replace_program(ROOM);
}
