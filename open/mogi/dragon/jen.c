// by poloer
#include "/open/open.h"
#include <ansi.h>

inherit NPC;
void use_poison(object me, object viction);


void create()
{
    set_name(HIR"֣����"NOR, ({"jen wu-cho", "jen","wu-cho"}));
    set("gender", "����");
    set("title", "��������");
    set("nickname", HIB"����"NOR);
    set("age",20);
    set("long","\n�������ǳ��׶���ˣ����ϳ���ɱ����\n\n");
    set("quest/dragon",1);
set_skill("parry",100);
        set("s_kee",4000);
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spe",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("combat_exp",3000000);
        set_skill("skystrike",200);
        set("kee",4000);
        set("max_kee",4000);
        set("gin",4000);
        set("max_gin",4000);
        set("sen",4000);
        set("max_sen",4000);
        set("atman",1700);
        set("max_atman",1000);
        set("mana",1000);
        set("max_mana",1000);
        set("force",6000);
        set("force_factor", 15);
        set("max_force",6000);
        set_skill("dodge",100);
        set_skill("unarmed",200);
        set_skill("nine-steps",100);
        set("functions/evil-blade/level",100);
        set("chat_chance_combat",15);
        set("limbs",({"ͷ��","�ز�","����","����"}));
        map_skill("dodge","nine-steps");
        map_skill("unarmed","skystrike");
        setup();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();
        carry_object(__DIR__"obj/ghostar")->wear();
        add_money("gold",50);
}


void greeting(object me)
{
 write(HIC"֣���ſ����˵��
���������Ŷ������ҵ������ˣ��㻹�����ǿ��?��
��������������ҽ�������Ȼ���ԣ��������������أ���
"NOR); 
}

void heart_beat()
{
        if( random(5) < 2 ){
        if(!is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
            if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
                           }
        }
        :: heart_beat();
}       
 void die()
{
    object winner = query_temp("last_damage_from");
    tell_object(users(),HIM"
       
      "HIW"��������˵:"HIM" ���ҵ��������������ˣ�ԩԩ�౨��ʱ�˰���
         
      ������Ȼ����"+winner->query("name")+HIM"֮�����ǲ��ʨ�");

           new(__DIR__"obj/key")->move(winner);
      

   winner->set("quest/dragon",1);


 tell_object(winner,HIW"֣����˵:ԩԩ�౨��ʱ��ѽ~
      ���ˣ��ҾͰ����ҵ�Կ�׽�����ɣ�\n"NOR,this_player());

         ::die();
      }                                         
