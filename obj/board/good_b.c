inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIC"����ˮ��ʯ"NOR,({"board"}));
set("location","/open/clan/god/hall");
set("board_id","chan");
set("long","����������ʾ�������ٵ�ˮ��ʯ�����Ҳ�������Ҳ���Լ�¼������\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
