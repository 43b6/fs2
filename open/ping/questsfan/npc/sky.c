inherit NPC;     //��� by dhk 2000.4.22
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
int exert_sunforce();

void create()
{
  set_name(""HIY"���"NOR"",({"sky haung","sky","haung"}));
set("long","������"HIR"����"HIC"˾ͽ����"NOR"���Է���"HIM"��Ȩ"HIR"��"HIY"��"NOR"֮һ�������ػ���\n"
            +"��"HIY"���"NOR"�����������Ļ���Ϊ����Ϊ�ض���������֧Ԯ��Ҫ��\n"
            +"��˭�ƹ�֮ɽ��Ϊ�����֮����\n");
  set("gender","����");
  set("class","fighter");
  set("nickname",""HIY"����"NOR"��"HIC"�ػ���"NOR"");
  set("title",""HIM"��Ȩ"HIR"��"HIY"��"NOR"");
  set("attitude","heroism");
  set("age",1000);
  set("max_kee",500000);
  set("kee",500000);
  set("str",40);
  set("con",40);
  set("cps",40);
  set("cor",40);
  set("int",40);
  set("max_force",200000);
  set("force",200000);
  set("force_factor",150);
  set("combat_exp",18000000);
  set_skill("dodge",200);
  set_skill("move",200);
  set_skill("force",550);
  set_skill("parry",200);
  set_skill("unarmed",200);
  set_skill("linpo-steps",200);
  set_skill("six-fingers",200);
  set_skill("sunforce",550);
  map_skill("unarmed","six-fingers");
  map_skill("parry","six-fingers");
  map_skill("move","linpo-steps");
  map_skill("dodge","linpo-steps");
  map_skill("force","sunforce");
  set("chat_chance_combat",100);
//set("chat_msg_combat",({
//   (:perform_action,"unarmed.handwriting":),
//   (:this_object(),"exert_sunforce":),
//   }));
setup();
  add_money("gold",50);
//carry_object(PING_OBJ"cloudy_fan()");
//carry_object(PING_OBJ"neck()")->wear();
//create_family("�μ�",10,"����");
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
int exert_sunforce()
{
        object ob=this_object();
        if( !present("sunforce finger",ob) )
        {
          command("say ��..�Ϸ���������档");
          command("exert sun-finger");
                  command("wield finger");
        }
        return 1;
}
int accept_kill(object who)
{
  command("perform unarmed.handwriting");
  return 1;
}
int accept_fight(object who)
{
  command("perform unarmed.handwriting");
  return 1;
}
void die()
{
        object winner = query_temp("last_damage_from");
        //if(!wizardp(winner)){
        tell_object(users(),"\n\n\t��"HIY"��  ��  ��  ��  ��  ��  ��  ��  ��  ��  ֮  ��  "NOR"��\n\n\t\t��"HIY"��  ��  ��  ��  ��  ֮  ɽ  ��"NOR"��\n"+
        "\n\n\n\t"HIB"�벻����"HIY"���"HIB"Ϊ���֮��, ���հ���"NOR""+winner->query("name")+""HIB"֮��"NOR"\n\t"HIR"�ɺ�ѽ������"NOR"\n");

     tell_object(users(),"\n\n"HIR"����þ����һ������ʹ��"NOR"����"HIR"��"NOR"��\Ѫ"HIR"��"NOR"����"HIR"��"NOR"\n\n\t��"HIY+BLINK"����Ծ�����"NOR"��\n\n");

        //}
        :: die();
}

