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
if(me->query_temp("get_amulet")
return notify_fail("��ʲôҲû�з��֡�\n");
else
{
tell_object(me,"���ʬ�ǵ����Ϸ�����һ���������\n");
me->set_temp("get_amulet",1);
new("/u/u/unfinished/room/obj/amulet")->move(me);
return 1;
}
}
