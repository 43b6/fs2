inherit NPC;     //�δ���
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
int exert_sunforce();

void create()
{
  set_name("�δ���",({"muan duan","muan","duan"}));
  set("long","�δ������Ƕ��ϵ�ϵ��������������Ϊ���峤����������\n"
              +"�����ػ��羧������ˣ��ɹ����������¡����ľ�����\n"
            +"�����������ؾ������Ĺؿ���\n");
  set("gender","����"); 
  set("class","scholar");
  set("nickname",""+HIC+"�����ʿ"+NOR+"");
  set("attitude","heroism");
  set("age",30);
  set("max_kee",9500);
  set("kee",9500);
  set("str",40);
  set("con",40);
  set("cps",40);
  set("cor",24);
  set("int",22);
  set("kar",40);
  set("bellicosity",5000);
  set("max_force",10000);
  set("force",10000);
  set("force_factor",10);
  set("combat_exp",10000000);
  set_skill("dodge",100);
  set_skill("move",100);
  set_skill("force",150);
  set_skill("parry",90);
  set_skill("unarmed",90);
  set_skill("stabber",120);
  set_skill("literate",120);
  set_skill("linpo-steps",100);
  set_skill("six-fingers",100);
  set_skill("sunforce",150);
  map_skill("unarmed","six-fingers");
  map_skill("parry","six-fingers");
  map_skill("stabber","six-fingers");
  map_skill("move","linpo-steps");
  map_skill("dodge","linpo-steps");
  map_skill("force","sunforce");
  set("env/������","YES");
  set("marks/sun-finger",1);
  set("marks/six_sp",3);
  set("functions/handwriting/level",100);
  set("chat_chance_combat",100);
  set("chat_msg_combat",({
     (:perform_action,"unarmed.handwriting":),
     (:this_object(),"exert_sunforce":),
     }));
  set("chat_chance",10);
  set("chat_msg", ({
            ""+HIC+"�δ�����������ĵ�: �뵽�ҳ����峤ʱ��Ϊ�����Դ���գ����һͷ�����о����ռ����¼�ı��"+NOR+"\n"+
""+HIC+"�����������벻����ν�ģ�"HIR"����"HIC"��Ҳ����������ң������Խ��޷��԰Ρ�"NOR"\n",
            ""+HIC+"�δ���˵: ������ڲؾ����ҵ�һ����"HIB"���������ȫ"HIC"�壬������һ������ѽ��"+NOR+"\n",
            ""+HIY+"�δ���̾��: �����ʶһ���Ǳ����м��أ���ʢ��ʱ�ڳ�������֮�ֵ�������"HIR"˫���������"HIY"��ѽ��"+NOR+"\n",
               }));
setup();
  add_money("gold",50);
  carry_object("/open/ping/obj/cloud_fan");
    carry_object(PING_OBJ"neck0")->wear();
  carry_object("/open/ping/questsfan/obj/diamond_armor")->wear();
  carry_object("/open/ping/questsfan/obj/diamond_cloak")->wear();
  create_family("�μ�",10,"�峤");
}
int accept_kill(object who)
{
  command("perform unarmed.handwriting");
  command("wield fan");
  command("exert sun-finger");
  command("wield finger");
  kill_ob(who);
  return 1;
}
int accept_fight(object who)
{
  command("perform unarmed.handwriting");
  command("wield fan");
  command("exert sun-finger");
  command("wield finger");
  fight_ob(who);
  return 1;
}
void die()
{
        object winner = query_temp("last_damage_from");
//        if(!wizardp(winner)){;:
        tell_object(users(),"\n\t[0;1m��[1my[1;36m��[1mj[1m��[1mP[1m��[1m@[1m��[1m��[1m��[1mP[1m��[1m��[1m��[1m_[1m [1m [0m[0;1;36m��[1m��[1m��[1mn[1m��[1m��[1m��[1mW[1m��[1mE[1m��[1md[1m��[1m��[0m\n\t\t[0;1;36m��[1m��[1m��[1mJ[1m��[1m��[1m��[1m��[1m��[1mE[1m��[1mU[1m��[1m��[1m [1m [1m��[1mS[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[1;37m��[1mz[0m\n"+
        "\n\t[0;1m��[1mQ[1m��[1m��[1m��[1mq[1m��[1mt[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mu[1m,[1m [0m[0;1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[0m"+HIR+""+winner->query("name")+"[0;1m��[1m��[1m��[1m��[0m\n\t[0;1m��[1mu[1m��[1mO[1;31m��[1m��[0m[0;1;31m��[1m��[1m��[1mt[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[0m\n");
        tell_object(users(),"\n\n[36m�Ϸ���ջ���һ��[0;1;5m��[1;5my[1;5m��[1;5mP[0m��\n\n\t[0;1;31m��[1mu[1;35m��[0m[0;1;35m��[1m��[1mv[1m��[1mP[1;31m��[1mv[0m\n\n");
//       }
        :: die();
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
        if( obj->query("id") == "fire colored glaze" )
        {
          command("pat "+getuid(me));
          command("say ̫����, �������ҵ���л�ˡ�");
         if( me->query("family/family_name") == "�μ�" && me->query("questsfan/quest_step") == 5 )
          {
           command("say �δ���������õĶ���˵��:���¾�������˹���֮���Ȼ������Ҫ��ȡ�羧
                          ʯ�ģ��Ǳ����Ѿ�ͨ�����ؿ��飬������ɽ����������!!!\n");
            me->set("questsfan/quest_step", 6);
          }
          destruct(obj);
        }
        else
        command("? "+getuid(me));
        return 1;
}

