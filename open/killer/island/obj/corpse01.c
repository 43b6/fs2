#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name("��ȱ��ȫ��ʬ��", ({ "uncomplete-corpse","corpse" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "ʬ�ǲ�ȱ��ȫ��������ǰ�ܵ�������˺���\n");
       set("unit", "��");
       set("value", 150);
       set("no_sell",1);
       set("no_auc",1);
       set("no_give",1);
       set("no_get",1);
      }
    setup();
}

int accept_object(object me,object ob)
{

me=this_player();
if(ob->query("id")!="incomplete_corpse's head")
tell_object(me,"���ʲô��Ҳû������\n");

if(me->query_temp("quest_corpse")==1)
{
message_vision("$N��$n��װ��ȥ�ˡ�\n",me,ob);
tell_object(me,HIB"\n\n��·�������һЩ�����������򲻿����ţ�������...��\n"NOR);
me->set_temp("quest_corpse",2);
}

else
tell_object(me,"����ȴ��֪��Ҫ��"+ob->name()+"װ���ģ�\n");
}
