// query_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("����������", ({ "player board", "board" }) );
	set("location", "/open/wiz/entrance");
	set("board_id", "player_b");
	set("long", @LONG
����һ��ר�Ÿ���ʦ���й��������Ĳ�����, ����ٷ�ĳ�����Υ��
����, ĳ��ҵĵ�������ȵȡ�
LONG);
	setup();
	set("capacity", 100);
}
