inherit BULLETIN_BOARD;

void create()
{
     set_name("[1;33mͼ��MUD���۰�[0m", ({"board"}));
    set("location","/u/w/wade/grapic_room.c");
    set("board_id","grapic_b");
    set("long","ͼ��MUD���۰�\n");
	setup();
	set("capacity", 300);
	// ��������������Щ�� discard post ��
    set("master", ({"wade"}));
}
