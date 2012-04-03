#include <ansi.h>
#include "/u/c/cage/lib/cage.h"

inherit NPC;
/*

inherit F_CLEAN_UP;
*/

string usr="";
int time=5000,reboot=0,nosave=0;

void create()
{
  set_name("������",({"lady kawali","lady","kawali"}));
  set("long","���ǰ�ⲵĴ���밢Ⲳ��ơ��������ˡ�����Ȼû�о�׼��ǹ��������һ��\n"+
  "��տ��鳷�ȴ������Ⲷ��㲻�����ɱ������ֿտ�ร����и������������\n"+
  "��ʱ���Ա��һ�Ѵ���Ӱ��˴�ǧ��֮�⣡\n");
  set("gender","Ů��");
  set("nickname","��������");
  set("combat_exp",400000);
  set("attitude","heroism");
  set("age",22);
  set("str",26);
  set("cor",15);
  set("cps",28);
  set("per",23);
  set("int",35);
  set("kar",40);
  set("spi",14);
  set("con",24);
  set("force",450000);
  set("max_force",450000);
  set("force_factor",10);
  set("max_kee",80000);
  set_skill("array",100);
  set_skill("hammer",120);
  set_skill("parry",100);
  set_skill("cure",100);
  set_skill("literate",100);
  set_skill("dodge",80);
  set_skill("force",70);
  set_skill("move",100);
  set_skill("unarmed",100);
  setup();
  set_temp("channels",({"chat*","shout","sys","wiz"}));
  carry_object(_OBJ"hammer.c")->wield();
  carry_object(_OBJ"bullet.c");
/*
  command("wear amulet");
*/
}

void init()
{
  add_action("do_reboot", "reboot");
  add_action("do_report", "report");
}

int do_report()
{
 if (!(this_player()->query("id")=="cage")) return 0;
 command("say �ڲ�����:usr:"+usr+" ,time:"+time+" reboot:"+reboot+" nosave:"+nosave+"\n");
 return 1;
}

private void do_shutdown()
{
  object        *ob, link;
  int           i;
  message("system",
          "\n\n������վ���������������������\n\n"+
          "\t\t�ɶ�İ�ⲣ�����Ҽ�ס �������� ��\n\n"+
          HIW+"����һ�ϣ�����߾پ��"+HIR+"**����**"+HIW+"������棬��ؿ�ʼ����...\n\n"+
          NOR+BLU+"\t����������ǰ��ɽ�����Ѿ�㵲���ʱ������µĵ���ͻȻ�ѿ�\n\n"+NOR+
          "\t\t����˸��գ�������һ���ӵ����޾�����Ԩ......\n"+
          "\t\t��������ǰһƬ�ڰ�....��ֹ���ĺڰ�..����Ѱһ˿��â...\n\n",
          ob = users() );
  for (i=0; (i<sizeof(ob) && !(nosave)); i++) 
  {
    ob[i]->save();
    if( objectp(link=ob[i]->query_temp("link_ob")) ) link->save();
  }
  shutdown(0);
}

private void start_shutdown()
{
  do_command("chat* angry");
  command("shout ���������쵰������û����������ȥ�ˣ�");
  message("system",
          "\n��������������վ����һ������ ....\n\n"
          "�������������������������\n\n"
          "\t\tȫ �� �� �� �� �� �� �� �� ϸ �� �� ��\n\n"
          "\t\t������"+HIY+chinese_number(time)+NOR
          "�����ڰѰ�Ⲹ����һ��� ��\n\n"
          "\t\t�� Ȼ �� �� ....�͵��ų��ҵ���Ӱ� ��\n\n" NOR,users() );
  call_out("countdown", 60);
}

int do_reboot()
{
  int i;
  string wiz_status,nos="";

    reboot=1;
    i = 5;
    command("say �ðɣ���ʼ������ʱreboot�ˡ�");
    command("go ent");
    command("go down");
    command("go down");
    set("startroom",REBOOT_PLACE);
    time = i;
    start_shutdown();
    return 1;                              
//}
}

                                        
private void countdown()
{
  time--;
  if (time > 3000) return ;
  if (time > 15) call_out("countdown", 60);
  else
  { 
    if( time ) 
    {
      message("system",
              "\n������վ�������������������\n\n"
              "\t\t"+HIY +chinese_number(time)+NOR "�����ڰѰ�Ⲹ����ҳ�����\n\n"
              "\t\t��  ��  ��  ��  ��  ��  ��  ��  ��  ��  ��\n\n" NOR,users() );
      call_out("countdown", 60);
    } 
    else 
    {
      message("system",
              "\n������վ�������������������\n\n"
              HIB"\t\t�ɶ񰡣����Ǹ��һ죡\n\n"
              "\t\t����Ҫ������ˣ�\n\n" NOR,users() );
       call_out("do_shutdown", 3);
    }
  }
}
                                                                            
int accept_fight(object ob)
{
  if ((int)ob->query("max_kee") < 250)
    return notify_fail("�������˵�����㻹̫�����ǲ�Ҫ���ұ���ȽϺã�\n");
  return 1;
}
int accept_kill(object ob)
{
  if ((int)ob->query("max_kee") < 350)
  {
    tell_object(ob,"�������˵����������һ鳶������˻���ɱ�ң�\n");
    return 0;
  }
  return 1;
}

void heart_beat()
{
 object obj,target,*list;
 int ppl,i,j;
 :: heart_beat();
 if(!is_fighting()) return;
 if(5 < random(15)) return;
 obj=select_opponent();
 list = users();
 ppl = sizeof(list);
 j=5;
 do
 {
   j--;
   i = random(ppl);
   target = list[i];
 }
 while((obj == target || wizardp(target)) && j);
 i = obj->query("max_kee") * 0.5;
 if (i < 100) i = 100;
 if (!j)
 {
   message_vision("����ʹ����������鳰���==��ɱ����==$N���򵽾���֮�⣡\n",obj);
   message_vision("$N���򵽰�����ֵ������������˼�����˺�\n",obj);
   obj->receive_wound("kee",i,this_object());
   return;
 }
 obj->remove_all_enemy();
 obj->receive_wound("kee",i,this_object());
 message_vision("����ʹ����������鳰���==��ɱ����==$N���򵽾���֮�⣡\n",obj);
 tell_room(environment(target),"�ף���������ʲô������\n"+
             "�ۣ�~~����һ��!"+(string)obj->query("name")+"�����ϵ�������\n");
 obj->move(environment(target));
 tell_room(environment(target),obj->query("name")+"���ص�ˤ��"+
                            target->query("name")+"���ϣ�\n",({ obj,target}));
 tell_object(obj,"�����ص�ѹ��"+target->query("name")+"���ϣ�\n��~~ʹ���ˣ�\n");
 tell_object(target,obj->query("name")+"����ˤ�������ϣ�\n�~~~��ʹ���浹鹣�\n");
}

                                                

void die()
{
 object ob;
 if (!reboot) 
 {
   :: die();
   return;
 }
 else
 {
   if( !ob = query_temp("last_damage_from") ) ob = this_player(1);
   if( !ob ) return;
   message("system",ob->name(1)+"������������һ����"+
           HIG+"\n\n��~~~�Բ����λ���Ҵ��ˡ�\n\n"+
           HIW+"�����ɥ�ػ�ȥ�ˣ�������һ������\n\n"+NOR,users() );
   this_object()->remove_all_enemy();
   this_object()->move(_HOME);
   set("startroom",_HOME);
   reboot=0;
   time=5000;
 }
}

int return_home(object home)
{
 if (!reboot) :: return_home(home);
 return 1;
}
