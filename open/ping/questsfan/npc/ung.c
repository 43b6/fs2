inherit NPC;     //������ 2000.4.2 by dhk
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
string do_special_fight();

void create()
{
  set_name("������",({"ung baily","ung","baily"}));
  set("long","���������Ƕ��ϵ����м縺�����ξ����عص�������֮һ��\n"
            +"�䵶�������еĵ�һ�ѽ��Σ�������������������һֱ��Ϊ\n"
            +"�����ӵ��һ�������ĺõ��Ϳ����ڡ�"HIR"��"NOR"���ľ����ϸ���һ\n"
            +"��¥������һ������˵���������һ�Ѵ�˵�е���֮����\n");
  set("gender","����"); 
  set("class","blademan");
  set("title","�μҵ�ʮ������");
  set("nickname",""HIR"���е�ʥ"NOR"");
  set("attitude","heroism");
  set("age",35);
  set("max_kee",5000);
  set("kee",5000);
  set("str",44);
  set("per",24);
  set("cps",18);
  set("cor",42);
  set("int",42);
  set("max_force",15000);
  set("force",15000);
  set("force_factor",10);
  set("combat_exp",9000000);
  set_skill("dodge",100);
  set_skill("move",100);
  set_skill("force",160);
  set_skill("parry",90);
  set_skill("literate",100);
  set_skill("blade",120);
  set_skill("linpo-steps",100);
  set_skill("gold-blade",100);
  set_skill("fast-blade",100);
  set_skill("sixforce",160);
  set_temp("apply/armor",100);
  map_skill("blade","fast-blade");
  map_skill("parry","gold-blade");
  map_skill("move","linpo-steps");
  map_skill("dodge","linpo-steps");
  map_skill("force","sixforce");
  set("chat_chance_combat",100);
  set("chat_msg_combat",({
     (:do_special_fight:),
     }));
  set("chat_chance",10);
  set("chat_msg", ({
            ""+HIC+"��������������ĵ�: �Ƿ��켫�ġ��������Ҿ��ܻ�����һ���ľ�������׷���Ŀ�ꡣ"+NOR+"\n",
            ""+HIC+"�����¶������ϵĵ�˵: ���������"+HIY+"�Ͻ�"+HIC+"���Ƶ���֮���������ϻ���һ�ѱ�֮���߰����ĵ���"+NOR+"\n",
            ""+HIY+"������̾��: �����ʶһ�´����е����ĵ�"+HIR+"��"HIC"̫�ʵ�������"+HIY+"ѽ��"+NOR+"\n",
               }));
setup();
  add_money("gold",10);
  carry_object("/daemon/class/blademan/obj/gold-blade")->wield();
  carry_object("/open/ping/questsfan/obj/diamond_legging")->wear();
  carry_object("/open/ping/questsfan/obj/diamond_hands")->wear();
  create_family("����",10,"����");
}
string do_special_fight()
{
  if(query_skill_mapped("blade")=="gold-blade"){
  command("perform blade.gold-dest");
  if(!query_temp("fast/time"))
  map_skill("blade","fast-blade");
  }
  else if(query_skill_mapped("blade")=="fast-blade"){
  command("perform blade.fast-dest");
  map_skill("blade","gold-blade");
  }
  command("perform blade.gold-dest");
  return "";    
}
void init()
{
        add_action("do_answer","answer");
        set_heart_beat(1);
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
        :: heart_beat();
}

int accept_object(object me, object obj)
{
    if( obj->query("id") == "kingblade bluetooth" )
      {
        command("smile "+getuid(me));
        command("say ��...����Ҫ���ҵ���л�ˡ�");
         if( me->query("family/family_name") == "�μ�")
          {
            command("say ���������������Ķ���˵��:����ֻ�����ص�һ�صĹ��������󻹵ÿ����Լ������!!!\n");
            me->set("questsfan/quest_step", 3);
          }
        destruct(obj);
      }
    else
      command("? "+getuid(me));
    return 1;
}
