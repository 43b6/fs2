inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
   set_name(HIC"С��Ϳѻ��"NOR, ({"board"}));
   set("location","/u/h/hide/workroom");
   set("board_id","hide_b1");
   set("long","������ͼ��С��Ϳ�����߰����ˡ�\n");
   setup();
   set("capacity", 200);
        set("master",({"hide"}));
}
