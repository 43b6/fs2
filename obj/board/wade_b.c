inherit BULLETIN_BOARD;

void create()
{
	set_name("������", ({ "board" }) );
	set("location", "/u/w/wade/workroom");
	set("board_id", "wade_b");
	set("long",	"������������������ʦ�л�������û�����\n");
	setup();
	set("capacity", 30);
	// ��������������Щ�� discard post ��
	set("master", ({"wade", "ice"}) );
}
