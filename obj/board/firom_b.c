inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIW"������ʦ���۰�"NOR,({"board"}));
set("location","/u/c/chan/fi_room");
set("board_id","firoom");
set("long","����������ϵ�е���ʦȺ����������ļ��о�ϵͳ�����۲�����\n");
setup();
set("capacity",200);
replace_program(BULLETIN_BOARD);
}
