inherit NPC;     //�Ϲ�ѫ 2000.4.2 by dhk
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;


void create()
{
  set_name("�Ϲ�ѫ",({"shing nankon","shing","nankon"}));
set("long","�Ϲ�ѫ���Ƕ��ϵ����м縺�����ξ����عص�������֮һ��\n"
          +"�������佣�������ܳ����ң�������������в��Ƶ�����˫\n"
          +"������������������̾�����ܵõ���˵�е��񽣣�����Ҫ��\n"
          +"�����ٽ����أ��Ҷ�Ը�⣬��Ҳ���������ˡ�\n");
  set("gender","����"); 
  set("class","swordsman");
  set("title","�μҵ�ʮ������");
  set("nickname",""HIY"ʶ��"NOR"");
  set("attitude","heroism");
  set("age",39);
  set("max_kee",4000);
  set("kee",4000);
  set("str",44);
  set("con",24);
  set("cps",18);
  set("cor",42);
  set("int",42);
  set("max_force",9000);
  set("force",9000);
  set("force_factor",20);
  set("combat_exp",9000000);
  set_skill("dodge",100);
  set_skill("move",100);
  set_skill("force",140);
  set_skill("parry",90);
  set_skill("literate",100);
  set_skill("sword",120);
  set_skill("linpo-steps",100);
  set_skill("shasword",100);
  set_skill("shaforce",140);
  map_skill("sword","shasword");
  map_skill("parry","shasword");
  map_skill("move","linpo-steps");
  map_skill("dodge","linpo-steps");
  map_skill("force","shaforce");
  set("get_sha_sp",1);
  set("bounds",4000000);
  set("chat_chance_combat",90);
  set("chat_msg_combat",({
     (:perform_action,"sword.sha_kee":),
     }));
  set("chat_chance",10);
  set("chat_msg", ({
            ""+HIY+"�Ϲ�ѫ��������ĵ�: �������������ı��֡�"+NOR+"\n",
            ""+HIY+"�Ϲ�ѫ�������ϵĽ�˵: ���������"+HIR+"����"+HIY+"��������֮ѡ�������ϻ���һ�ѱ�֮����֮����"+NOR+"\n",
            ""+HIC+"�Ϲ�ѫ̾��: �����ʶһ�´����еĻ���֮��"+HIR+"��"HIW"�ڰ��Ľ���"+HIC+"ѽ��"+NOR+"\n",
               }));
setup();
  add_money("gold",10);
  carry_object("/open/gsword/obj/dragon-sword.c")->wield();
//  carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
  carry_object("/open/ping/questsfan/obj/diamond_belt")->wear();
  carry_object("/open/ping/questsfan/obj/diamond_boots")->wear();
   create_family("�ɽ���",10,"����");
}
int accept_kill(object who)
{
  command("perform sword.sha_kee");
  return 1;
}
int accept_fight(object who)
{
  command("perform sword.sha_kee");
  fight_ob(who);
  return 1;
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
    if( obj->query("id") == "cloud rosyclon box" )
      {
        command("bow "+getuid(me));
        command("say ��..��..��..�����ҵ���̫��л�ˡ�");
         if( me->query("family/family_name") == "�μ�" && me->query("questsfan/quest_step") == 3 )
          {
            command("say �Ϲ�ѫ���鼤���Ķ���˵��:���¾�������˹���֮�������Ҳ�����赲�ˣ����!!!\n");
            me->set("questsfan/quest_step", 4);
          }
        destruct(obj);
      }
    else
      command("? "+getuid(me));
    return 1;
}
