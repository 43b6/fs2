// bad_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("���˹ȸ�״��",({ "board" }) );
	set("location", "/open/badman/room/g1");
	set("board_id", "bad_b");
	set("long","\t����һ��ֻ�û������²۵����԰�\n");
	setup();
	set("capacity", 50);
}
