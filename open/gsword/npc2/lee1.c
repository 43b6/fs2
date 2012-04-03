#include <ansi.h>
#include <combat.h>
inherit NPC;
inherit SSERVER;
string ask_fish();
string ask_yao();
string ask_quest();
string ask_broken();
string ask_ball();
string ask_gball();
string ask_fireball();
string ask_waterball();
string ask_woodball();
string ask_soilball();
void create()
{
set_name("������",({"roger lee","lee","roger"}));
        set("age",33);
    set("long","��˵�н��ϸ��¥¥������һ����������ӣ��ƺ��Ѿ��������д�����꣬ӵ������������һ�����书�ƺ��������һ��������֪Ϥ��\n");
        set("gender","����");
        set("str",50);
        set("cor",50);
        set("cps",50);
        set("int",50);
        set("con",50);
        set("spi",50);
        set("kar",50);
    set("class","swordsman");
    set("family/family_name","�ɽ���");
        set("bellicosity",400);
        set("get_sha_sp",1);
        set("no_hire",1);
        set("max_kee",50000);
        set("kee",50000);
        set("max_gin",50000);
        set("gin",50000);
        set("max_sen",50000);
        set("sen",50000);
        set("combat_exp",10000000);
        set("max_force",50000);
        set("force",50000);
        set("force_factor",10);
        set_skill("dodge",200);
        set_skill("star-blade",200);
        set_skill("force",300);
        set_skill("sha-steps",100);
        set_skill("unarmed",120);
        set_skill("fireforce",100);
        map_skill("dodge","sha-steps");
        set_skill("stars-blade",150);
        set_skill("blade",120);
        map_skill("blade","star-blade");
        map_skill("force","fireforce");
    set("chat_chance",100);
        set("chat_chance_combat",25);
        set_temp("apply/armor",500);
        set_temp("apply/damage",80);
        set_temp("armor_vs_force",1500);
        set_temp("no_die_soon",1);
        set_temp("apply/armor",100);
        set_temp("apply/defense",100);
        set_temp("apply/damage",100);
        set_temp("apply/attack",100);
        set_temp("apply/dodge",50);
         set_temp("apply/parry",50);
set("inquiry",([
  "�ɽ�ɽ���µ�������" : (:ask_fish:),
  "Ѫħ" : (:ask_quest:),
  "�ƽ�֮��" : (:ask_broken:),
  "���б���" : (:ask_ball:),
  "��ң��" : (:ask_yao:),
   "����" : (:ask_gball:),
   "����" : (:ask_fireball:),
   "ˮ����" : (:ask_waterball:),
   "ľ����" : (:ask_woodball:),
   "������" : (:ask_soilball:),
]));
    setup();
        carry_object("/u/a/appo/kdblade.c")->wield();
        add_money("gold",10);

}
void heart_beat()
{
 object me,*target;
 int i,j;
 i=sizeof(target);
 me=this_object();
 if(me->is_fighting()||me->is_killing())
 {
  target=me->query_enemy();
 if (random(10)<=4)
   {
message_vision(HIY"$N���������޼���������ʱ��â������ܣ�

     "HIC"�������������������������"HIW"

            $Nŭ�𣺿��ҵġ��������ε���������

     "HIC"�������������������������"HIY"
      ˲�䣬��$N����������������۶��ɵĵ�â��
          ת�ۼ䣬���ٵ���â�ѹᴩ������壡����
"NOR,me);
     me->delete_busy();
     me->clear_condition();
     for(j=0;j < i;j++)
     {
      target[j]->add("kee",-1500);
      target[j]->apply_condition("hellthunder",3);
       COMBAT_D->report_status(target[j]);
     }
   }
else
   {
 if ((random(2)+1)==1)
   {
    message_vision(HIM"����������ȫ������֮����˲�������ռ�Ա�����Χ�����������������ɫΪ֮һ����\n"NOR,me);
    me->receive_curing("gin",3000);
    me->receive_heal("gin",3000);
    me->receive_curing("kee",6000);
    me->receive_heal("kee",6000);
    me->receive_curing("sen",3000);
    me->receive_heal("sen",3000);
    me->delete_busy();
    me->add("force",4000);
    me->clear_condition();
   }
}
if((me->query("eff_kee") < 6000 || me->query("kee") < 6000) &&!me->query("dead"))
{
    message_vision(HIM"$N̾��:��Ҫ����ʹ�����ŵ�����??\n"NOR,me);
        me->set("force_factor",50);
        me->set("eff_kee",50000);
        me->set("kee",50000);
        me->set("eff_gin",50000);
        me->set("eff_sen",50000);
        me->set("gin",50000);
        me->set("sen",50000);
        me->set("force",100000);
        me->set("combat_exp",15000000);
        me->set("dead",1);
        map_skill("blade", "stars-blade");
        me->reset_action();
        me->delete_busy();
        me->clear_condition();
  }
}
else if( !is_fighting() ) {

                if( query("eff_kee") < query("max_kee") )
                        me->receive_curing("kee",100);
                if( query("eff_gin") < query("max_gin") )
                    me->receive_curing("gin",100);
                if( query("eff_sen") < query("max_sen") )
                    me->receive_curing("sen",100);
                if( query("gin") < query("eff_gin") )
                        me->receive_heal("gin",100);
                if( query("kee") < query("eff_kee") )
                        me->receive_heal("kee",100);
                if( query("sen") < query("eff_sen") )
                        me->receive_heal("sen",100);
}
        set_heart_beat(1);
        :: heart_beat();
}

string ask_yao()
{
  return ("��˵ʦ������~����Ѫħ�����з�ӡ����ӡ���ɽ�ɽ���µ����������ϣ����ˣ�������б�����?");
 }
string ask_fish()
{
 if(!this_player()->query("quests/find_roger"))
 {
  return ("�����ʼ磬�ܱ�Ǹ��˵���޿ɷ�档");
  }
 else
  {
  return ("����ʦ����ʶ����..���Ѫħ��Ϣ����������Ҫ�üӿ�Ų���");
  }
}
string ask_quest()
{
 if(!this_player()->query("quests/find_roger"))
 {
  return ("�����ʼ磬�ܱ�Ǹ��˵���޿ɷ�档");
  }
 else
  {
  return ("����,�ٹ����˶��,Ѫħ�����ֽ���,�ұ��뾡���ҳ��ƽ�֮��");
  }
}

string ask_broken()
 {
 if(!this_player()->query("quests/find_roger"))
 {
  return ("�����ʼ磬�ܱ�Ǹ��˵���޿ɷ�档");
  }
 else
  {
  return ("�����ҵ�������ħʦ��������,��˵����Ҫ�������б����������.");
  }
}
string ask_ball()
{
  return ("����һ��һ�����԰�..��һ��һ�����ң�ȷ����֮�󣬾�����������ȥ�ɡ�");
 }


string ask_gball()
{
 if(!this_player()->query_temp("quests/findball1"))
 {
  new("/open/gsword/obj1/gball")->move(this_player());
  return ("�ⶼ�첻�ã����Ѿ������ҵ��˽����ˣ����㡣");
  }
 else
  {
  this_player()->add("quests/sunmoon",2);
  return ("�ţ����ĺ�~�������ҵ���..�����һ��Ҳ�����!!");
  }
}
string ask_fireball()
{
 if(!this_player()->query_temp("quests/findball2"))
 {
  new("/open/gsword/obj1/fireball")->move(this_player());
  return ("�ⶼ�첻�ã����Ѿ������ҵ��˻����ˣ����㡣");
  }
 else
  {
   this_player()->add("quests/sunmoon",2);
  return ("�ţ����ĺ�~�������ҵ���..�����һ��Ҳ�����!!");
  }
}
string ask_waterball()
{
 if(!this_player()->query_temp("quests/findball3"))
 {
  new("/open/gsword/obj1/waterball")->move(this_player());
  return ("�ⶼ�첻�ã����Ѿ������ҵ���ˮ�����ˣ����㡣");
  }
 else
  {
   this_player()->add("quests/sunmoon",2);
  return ("�ţ����ĺ�~�������ҵ���..�����һ��Ҳ�����!!");
  }
}
string ask_woodball()
{
 if(!this_player()->query_temp("quests/findball4"))
 {
  new("/open/gsword/obj1/woodball")->move(this_player());
  return ("�ⶼ�첻�ã����Ѿ������ҵ���ľ�����ˣ����㡣");
  }
 else
  {
   this_player()->add("quests/sunmoon",1);
  return ("�ţ����ĺ�~�������ҵ���..�����һ��Ҳ�����!!");
  }
}
string ask_soilball()
{
 if(!this_player()->query_temp("quests/findball5"))
 {

  new("/open/gsword/obj1/soilball")->move(this_player());
  return ("�ⶼ�첻�ã����Ѿ������ҵ���ľ�����ˣ����㡣");
  }
 else
  {
  this_player()->add("quests/sunmoon",1);
  return ("�ţ����ĺ�~�������ҵ���..�����һ��Ҳ�����!!");
  }
}
