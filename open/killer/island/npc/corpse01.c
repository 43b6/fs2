#include <ansi.h>
inherit NPC;
void create ()
{
  set_name("��ȱ��ȫ��ʬ��",({"incomplete-corpse","corpse"}));
  set("long","ʬ�ǲ�ȱ��ȫ��������ǰ�ܵ�������˺���\n");
  set("no_fight",1);
  set("no_kill",1);
  set("no_magic",1);    
  set("no_spell",1);
  set("no_sac",1);
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
tell_object(me,HIB"\n\n��·�������һЩ�����������򲻿����ţ�����(pray)��...��\n"NOR);
me->set_temp("quest_corpse",2);
}

else
tell_object(me,"��Ϊ�������֪��Ҫ��"+ob->name()+"װ���ģ�\n");
}
