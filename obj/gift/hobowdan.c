// hobowdan.c �ɰ���
#include <ansi.h>
inherit ITEM;

void setup()
{}

void init()
{
        if(environment()==this_player())
        add_action("do_eat", "eat");
}

void create()
{
        set_name(HIY"�ɰ���"NOR, ({"ho bow dan", "dan"}));
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "Ƭ");
                set("long", "���������־�ѧ�����ƺ�ɵĺɰ�������˵��һƬ�ɵ�100�������ޡ�\n");
                set("value", 0);
        }
        setup();
}

int do_eat(string arg)
{
        if(!id(arg))
          return notify_fail("��Ҫ��ʲô��\n");

        if(this_player()->query("max_force") >= 5000)
          message_vision("$N����һƬ�ɰ���, ����ɶ��Ҳû����!!\n",this_player());
        else{
          if(this_player()->query("max_force")+100 > 5000)
            this_player()->set("max_force",5000);
          else
          {
        this_player()->add("max_force", 100);
        this_player()->add("force",100);
        message_vision("$N����һƬ�ɰ�����ֻ�����Լ�������������һЩ !\n", this_player());
        this_player()->add("gift/hobowdan", 1);
          }
        }
        destruct(this_object());
        return 1;
}

