inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name("����ļ��±�",({"board"}));
set("location","/u/k/kabn/workroom");
set("board_id","kabn");
set("long","����������ʾ�������ٵļ��±������ҿ�������Ҳ���Լ�¼������\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
