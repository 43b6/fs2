// chen_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("������۰�",({"killer wiz board","board"}));
    set("location","/open/killer/room/boardrm");

	set("board_id","killerwizs_b");
	set("long","��ʦ����ҽ����档\n");
	setup();
	set("capacity", 100);
	// replace_program(BULLETIN_BOARD);
}
