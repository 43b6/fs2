// lingzhi.c ǧ��ѩ��
#include <ansi.h>
inherit ITEM;

void setup()
{}

void init()
{
        if(environment(this_object()) == this_player())
        add_action("do_eat", "eat");
}

void create()
{
        set_name(HIR"����ѩ��"NOR, ({"xu lian", "lian"}));
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ��������ʿ�������������ѩ������˵��һ�ÿɵ�100�������ޡ�\n");
                set("value", 0);
        }
        setup();
}

int do_eat(string arg)
{
        if (!id(arg))
        return notify_fail("��Ҫ��ʲô��\n");

        if(this_player()->query("max_force")+500 > 5000)
          this_player()->set("max_force",5000);
        else
        this_player()->add("max_force", 100);
        this_player()->add("force",100);
        message_vision("$N����һ������ѩ����ֻ�����Լ���������������һЩ !\n", this_player());
        destruct(this_object());
        return 1;
}

