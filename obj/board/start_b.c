// start_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("����������԰�",({ "board" }) );
    set("location", "/open/trans/room/room4");
	set("board_id", "start_b");
	set("long","\t����һ������ұ����������԰�\n");
	setup();
	set("capacity", 100);
}
