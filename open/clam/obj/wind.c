inherit ITEM;
#include <ansi.h>
inherit F_AUTOLOAD;
void create()
{
                set_name(HIC"���׷�"NOR, ({ "wind token","token",}) ); 
                set_weight(50);
                set("long",
 "������ʥ��ף������ʥ��,ֻ��ӵ������˲ſɵ��������ڵ�,
��˵���������˲��������Զ��������(magic light)....\n"

);
                if( clonep() )
                        set_default_object(__FILE__);
                else {
                        set("unit", "��");
                        set("value", 0);
                        set("no_drop",1);
                        set("no_insert",1);
                        set("no_auc", 1);
      set("nickname",HIC"���װ�"HIC"������"NOR);
                }
}

void init()
{
      add_action("do_magic", "magic");
}
int do_magic(string str)
{
        object me;
        me = this_player();

        if(!str || str != "light")
            return notify_fail("������ʲô�� ?\n");
          message_vision( 
sprintf("һ��"HIC"ʥ��"NOR"��$N���͵����ɵ����ڵء�\n"), this_player() );
        me->move("/open/clam/wind.c");
        message_vision( 
sprintf("��ճ���һ��"HIC"�׹�"NOR",ֻ��$N���������\n"),this_player());
        return 1;
}
int query_autoload()
{
        return 1;
}
