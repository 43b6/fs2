inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIW"����ϵͳ���۰�"NOR,({"board"}));
set("location","/u/c/chan/cl_room");
set("board_id","clan_b");
set("long","�����ð���ϵ�е���ʦ����������ļ��о�ϵͳ�����۲�����\n");
setup();
set("capacity",200);
replace_program(BULLETIN_BOARD);
}
