// wizard_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("��ʦ�������԰�", ({ "job board", "board" }) );
	set("location", "/open/wiz/jobroom");
	set("board_id", "wizard_j");
	set("long", @LONG
LONG);
	setup();
	set("capacity", 100);
}
