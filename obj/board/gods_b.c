inherit BULLETIN_BOARD;

void create()
{
	set_name("����˵", ({ "board" }) );
	set("location", "/open/wiz/gs");
	set("board_id", "gods_b");
	set("long",	"����˵\n");
	setup();
	set("capacity", 300);
	// ��������������Щ�� discard post ��
	set("master", ({"wade"}) );
}
