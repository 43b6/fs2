// fighter_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("�������԰�", ({ "board" }) );
	set("location","/open/snow/room/room2");
	set("board_id", "fighter_b");
	set("long",	"���ǹ������������Լ��µ����԰塣\n" );
	setup();
	set("capacity", 60);
	// replace_program(BULLETIN_BOARD);
		set("master",({"anmy","airke","hide","roger"}));
}
