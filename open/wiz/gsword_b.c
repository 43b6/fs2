inherit BULLETIN_BOARD;
								
void create()
{
	set_name("�ɽ������԰�",({"gsword board", "board"}));
set("location","/open/wiz/gswordroom");
	set("board_id","gsword");
	set("long",	"�ɽ������԰档\n");
	setup();
	set("capacity", 30);
	replace_program(BULLETIN_BOARD);
}
							
