// common_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("���²�", ({ "board" }) );
	set("location", "/open/su/room/temple/temple");
	set("board_id", "temple_b");
	set("long",	"����һ������ǩ������Ĺ��²���\n" );
	setup();
	set("capacity", 30);
}
