#include <ansi.h>
#include <armor.h>
inherit NECK;
inherit F_SAVE;
inherit F_AUTOLOAD;
object user;

string inputstr,verb;

void create()
{
set_name("[1;36m��������[0m",({"lucky-neck"}));
  set_weight(3000);
  if( clonep() )
                set_default_object(__FILE__);
        else {
  set("long","һ���������⣬�����в���˼��������������\n");
  set("unit", "��");
  set("material","steal");
  set("value",10000);
  set("no_sell", 1);
  set("no_give",1);
  set("no_get",1);
  set("no_put",1);
  set("no_auc",1);
  set("no_drop",1);
  set("armor_prop/armor", 10);
 }

  setup();
}

void init()
{
        if( this_player()==environment() )
        add_action("do_steal","steal");
        add_action("do_wear","wear");
        add_action("do_wear","we");
        add_action("do_remove","rem");
        add_action("do_remove","remove");
}

int do_steal(string arg)
{
  int bs,gs,co,ka;
  string ob,player;
  object obj, npc, me;
  me = this_player();
  co = (me->query("con"));
  ka = (me->query("kar"));
  if(!arg)
  return notify_fail("steal <��Ʒ> from <����>\n");
  if ( me->is_fighting())
  return notify_fail("[1;33m����ս��������͵��[0m\n");
  if(sscanf(arg, "%s from %s",ob,player) != 2)
  return notify_fail("û��������͵����\n");
  if (me->query("class")!="bandit")
  return notify_fail("���ǻ��˱���͵��\n");
  if (me->query("quests/steal")!=1)
  return notify_fail("�������ܣ�����ѧ�ɣ�\n");
  if (me->query_skill("steal",1) < 1 )
  return notify_fail("�㻹ûѧ���й�͵�����Ļ�����ʶ��\n");
      if ( !(npc = present(player, environment (me))) )
        return notify_fail ("û���"+arg+"\n");
  if(wiz_level(npc)>0) return notify_fail("��͵����Ķ������±��Ӱɡ�\n");
  if (!(obj=present(ob, npc)))
    return notify_fail ("û�������: "+ob+".\n");
  if (obj->query("no_steal",1))
  return notify_fail ("�ⶫ����ɲ��ܶ���\n");
  if (random(259)>((me->query_skill("steal",1))+(me->query("kar"))))
{
  if ((npc->query("bellicosity")) < (me->query("bellicosity"))*3/2)
 {
  npc->kill_ob(me);
  me->start_busy(1);
  message_vision("[1;31m������͵��Ķ�����ʹ��ŭ�����֣�����[0m\n",npc);
  return notify_fail("[1;33m���գ�û͵�����������˿�������[0m\n");
 }
  else if (random((npc->query("spi")))-random((me->query("kar"))) > 0)
 {
  npc->kill_ob(me);
  me->start_busy(1);
  message_vision("[1;31m������͵�㶫����ȴ����ץ�����ţ�[0m\n",npc);
  return notify_fail("[1;33m��ѽ��͵������ץ������[0m\n");
 }
  else return notify_fail("[1;35m��ʧ�܆�������[0m\n");
}

  obj->move(me);

  message_vision ("[1;32m$N͵��[1;37m"+npc->query("name")+"[1;32m��[1;36m"+ob+"[0m\n", me);

  return 1;
}

int do_wear(string str)
{

     object user;
     user = this_player();
if(str=="lucky-neck")
  {
     if (user->query("marks/kar",1))
    {
     message_vision("[1;36mһ������������$N��$N�е��������˵����鷢����[0m\n",user);
     user->set_temp("karup",1);
     }
     if (user->query_temp("karup",1)) 
     return notify_fail("���Ѵ����ˣ�\n");
     else {
     ::wear();
     if( query("equipped") )
     {
      user = this_player();
     message_vision("[1;36mһ������������$N��$N�е��������˵����鷢����[0m\n",user);
      user->add("kar",5);
      user->add("max_force",-500);
      user->set_temp("karup",1);
      user->set("marks/kar",1);
     }
    }
  }
}

int do_remove(string str)
{
if(str=="lucky-neck")
     if( query("equipped") )
     {
      user = this_player();
if(user->query("marks/kar",1)) {
      message_vision("[1;37m$N�����˾��ϵ��������������˵ĸо��Ѳ��٣�[0m\n",user);
      user->add("kar",-5);
      user->add("max_force",500);
      user->delete_temp("karup");
      user->delete("marks/kar");
     }
}
}
int query_autoload ()
{
  return 1;
}
/*
void die()
{
        object user;
        string *name;

        user=this_player();

  if (user->die())
  {
  if( query("equipped") )
  {
        user->add("kar",-5);
        user->add("max_force",500);
        user->delete_temp("karup");
  }
        user->set("marks/kardie",1);
  }

        return;
}
*/
