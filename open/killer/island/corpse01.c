#include <ansi.h>
inherit NPC;
void create ()
{
  set_name("��ȱ��ȫ��ʬ��",({"incomplete-corpse","corpse"}));
  set("long","    ʬ�ǲ�ȱ��ȫ��������ǰ�ܵ�������˺���\n");
  set("no_fight",1);
  set("no_kill",1);
  set("no_magic",1);    
  set("no_spell",1);
  set("no_sac",1);
  setup();
}
void init()
{
add_action("do_search","search");
}
int do_search(string arg)
{
object me;
me=this_player();
if(!arg||arg!="corpse")
return notify_fail("������ʲô��\n");
if(me->query_temp("quest_corpse")==2)
return notify_fail("ʬ�忴�����������ˡ�\n");
else
{
tell_object(me,"�㷢����ʬ������һЩ��λ��\n");
me->set_temp("quest_corpse",1);
return 1;
}
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
