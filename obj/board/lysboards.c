// common_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("�����������԰�", ({ "board" }) );
	set("location", "/u/l/lys/workroom");
	set("board_id", "lysboards");
	set("long",	"����һ���������Լ��µ����԰塣\n" );
	setup();
	set("capacity", 30);
	set("master",({ "lys" }) );
}
