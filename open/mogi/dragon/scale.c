inherit ITEM;
#include <ansi.h>
inherit F_AUTOLOAD;
void create()
{
                set_name(HIY"ħ����"NOR, ({ "dragon scale","scale",}) ); 
                set_weight(50);
                set("long",
 "�ƽ�������ϵ���Ƭ ,���������ħ��
����ʹ�ÿ��Խ���˲�䴫�͵�ħ��(use scale)....\n"

);
                if( clonep() )
                        set_default_object(__FILE__);
                else {
                        set("unit", "Ƭ");
                        set("value", 5000);
                        set("no_drop",1);
                        set("no_insert",1);
                        set("no_auc", 1);
                        set("no_sell",1);
                        set("no_give",1);
                        set("no_out",1);


                }
}

void init()
{
      add_action("do_magic", "use");
}
int do_magic(string str)
{
        object me;
        me = this_player();

        if(!str || str != "scale")
            return notify_fail("������ʲô�� ?\n");
          message_vision( 
sprintf("һƬ"HIY"��Ļ"NOR"������������ ,$N�ص�ħ��Ĵ�ׯ��\n"), this_player() );
        me->move("/open/mogi/village/room/room-05.c");
        message_vision( 
sprintf("��߳���һ��"HIY"����"NOR",ֻ��$N���������\n"),this_player());
        return 1;
}
int query_autoload()
{
        return 1;
}


