// chen_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("���������԰�",({"board"}));
	set("location","/open/capital/room/chen_home");
	set("board_id","chen_b");
	set("long","���Ǵ����¼����õ����԰档\n");
	setup();
	set("capacity", 30);
	// replace_program(BULLETIN_BOARD);
}
