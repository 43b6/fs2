// common_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("��繤��Ⱥ���԰�", ({ "board" }) );
	set("location", "/open/su/room/temp1");
set("board_id", "godplace_b");
	set("long",	"����һ������繤����Ա���Եĵط���\n" );
	setup();
	set("capacity", 30);
	replace_program(BULLETIN_BOARD);
}
