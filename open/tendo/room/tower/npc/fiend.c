#include <ansi.h>
#include <combat.h>
inherit NPC;
#define bell_big 400
#define bell_small 200
#define SPELLLVL 100
#define MANACOST 150
#define INVCOST 18
int special_att ();
object room2;
void create()
{
        set("title",RED"ڤ��֮��"NOR);
        set_name("ڤ������",({"fiend"}));
        set("max_gin",3000);
        set("gin",3000);
        set("race","Ұ��");
        set("age",1200);
        set("str", 100);
        set("max_kee", 2400);
        set("kee", 2400);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",500000);
        set_temp("apply/armor",90);
        set_temp("apply/attack", 90);
        set("force_factor",12);
        set("bellicosity",2000);
        set("max_sen",3000);
        set("sen",3000);
        set("max_atman",2500);
        set("atman",2500);
        set("max_mana",2000);
        set("mana",2000);
        set("max_force",3000);
        set("force",3000);
        set("cor", 40);
        set("cps", 40);

        set("chat_chance_combat",45);
        set ("chat_msg_combat", ({(: special_att :)}));

        command("wield all");
        command("wear all");
        set_skill("hell-evil",90);
        map_skill("parry","hell-evil");
        set("unarmed",90);
        map_skill("unarmed","hell-evil");
        set_skill("dodge",90);
        set_skill("fly-steps", 70);
        map_skill("dodge","fly-steps");
        set_skill("parry",90);
        setup();
        carry_object ("/open/tendo/room/tower/obj/ring")->wield ();
        carry_object ("/open/tendo/room/tower/obj/neck")->wear ();
        add_money("gold",20);
        carry_object("/open/tendo/room/tower/obj/boots")->wear();
        carry_object("/open/tendo/room/tower/obj/cloth")->wear();
        carry_object("/open/tendo/room/tower/obj/hat")->wear();
        carry_object("/open/tendo/room/tower/obj/hands")->wear();
        carry_object("/open/tendo/room/tower/obj/belt")->wear();
        carry_object("/open/tendo/room/tower/obj/wrists")->wear();
        carry_object("/open/tendo/room/tower/obj/shield")->wear();
        carry_object("/open/tendo/room/tower/obj/legging")->wear();
        carry_object("/open/tendo/room/tower/obj/book");

}

int accept_kill(object ob)
{
        int i;
        object ob1,hu_fa;
        string place;
        ob1 = this_object();

        if( !present("hu-fa", environment(ob)) )
        {
        tell_room(environment(ob),HIW"\nͻȻ�������λ����!!\n\n"NOR);
        for(i=0;i<2;i++)
         {
         hu_fa = new("/open/tendo/room/tower/npc/hu_fa");
         hu_fa->move(environment(ob));
         hu_fa->kill_ob(this_player());
         }
        }
        write("[1;32m����������˹����е��������������ޣ���[0m\n");
        return 1;
}
int spell ()
{
  return SPELLLVL;
}

int manacost ()
{
  return MANACOST;
}

int invcost ()
{
  return INVCOST;
}

int special_att ()
{
  object me = this_object ();
  object *enemy = query_enemy (), victim;
  int i = sizeof (enemy), damage;
  victim = enemy[random(i)];
message_vision(HIB+
"          ���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  һ  ʽ ����"NOR"
                  "HIB"����  "HIY"�� ħ �� ��"HIB"  ����"NOR"
          "HIW"ڤ����������ٿ���ڷ�����,�������һ"NOR"
    "HIW"���ƾ�,������Ӱ,�罭��ȱ����,��к����,�Ʒ��缤��"NOR"
                  "HIW"��������������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIR"ħ �� �� ��"HIB"  ����"NOR"
          "HIW"ڤ��������ͷ����ӭ������,˫Ŀ�¹����,"NOR"
    "HIW"��Ȼ˫�۶���,�û���ǧ�����ֱ�,ÿһ���ֱ��˳�һ���"NOR"
             "HIW"�۵��Ʒ�,�������Ӱ�����������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIW"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ڤ������˫�ֱ�����������˿��¶��Ũ�ҵĶ�"NOR"
    "HIW"����˫��͸����ֻ��ڤ������˫�ֲ�ͣ���裬�����мд���"NOR"
  "HIW"������֮��Ż�Ķ���,ʹ�����ܵ�������Ӱ�죬�ܵ�������˺�!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIC"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ڤ������һ��������ĳ�Х,�������,���ε�"NOR"
    "HIW"�ջ���,һ����������ͬһʯ����֮�����,�Բ�ͬ�ķ���,"NOR"
  "HIW"��ͬ�ĽǶ�,������������ħצ�����Ӱ,�����������ķ�������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "MAG"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ֻ��ڤ����������һ����˫��ǰ����һ������"NOR"
    "HIW"�εľ�����Ȼ��ǰӿȥ���ۻ�ľ������εõ������ɳ��ʯ��"NOR"
                       "HIW"�������Ϯ��ȥ!!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIY"�� �� �� Ѫ"HIB"  ����"NOR"
          "HIW"ڤ������˫�ƻ���ǧ����Ӱ,��Ӱ������һ�ɾ�"NOR"
              "HIW"�춯�ǵľ���,�����Ʒ���������ȥ!!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIC"�� �� Ī ��"HIB"  ����"NOR"
          "HIW"ڤ���������幭��˫�ƽ������棬ȫ��������"NOR"
    "HIW"һƬ�����У��������粨�ΰ㸡��������������ھ������ⲻ��"NOR"
   "HIW"���ӣ�ֻ��ڤ������ͻȻ��˫��һ�ϣ�һ�������������㼲���ȥ!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIR"�� ħ �� ת"HIB"  ����"NOR"
          "HIW"ڤ��������������˫צ ,˫צ����һ��ҫĿ���,"NOR"
    "HIW"����ʮ���� ,��עȫ�� ,����׼��ʹ����ǿ��Ե���һʽ,��ʱ"NOR"
  "HIW"����ħ����������ڤ������ ,��ٱħ����˾������֮�� ,��������"NOR"
 "HIW"�����ϵ��׹� ,ڤ�����޺�Ȼ��������ǰ ,����ʹ����ʯ���쾪��һ��!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIY"�� Ӱ �� ��"HIB"  ����"NOR"
          "HIW"�����޾��ľ���������ӿ��ڤ���������ڣ�ֻ��ڤ"NOR"
    "HIW"������˫�Ʋ�ͣ����ϸ΢�ı仯���·���ڶ��㣬�����ﶼ��ʳ"NOR"
                 "HIW"����,��Ȼ˫�ƻ������ȫ��!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ʮ  ʽ ����"NOR"
                  "HIB"����  "HIW"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ڤ�����޿��һ��,�Ͽ�ƽ��Ų������,�����ĵ�,��"NOR"
    "HIW"�ֹɶ��ھ�,�������,�ƾ���ɽ,�������ε�����,�����������"NOR"
                       "HIW"֮�Ƴ������!!"NOR"
         "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ʮ  һ  ʽ ����"NOR"
                  "HIB"����  "HIC"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ڤ�������������,��������,����һ��,˲ʱ����"NOR"
    "HIW"��, ��ɳ����,ڤ�����޳÷�ɳ��ʯ֮��,������������,����һ��,"NOR"
      "HIW"˫����£,����һ������������,���������������ĳ�����!"NOR"
         "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ʮ  ��  ʽ ����"NOR"
                  "HIB"����  "HIR"Ⱥ ħ �� ��"HIB"  ����"NOR"
          "HIW"ڤ�����������ƻ�����һ����ɫ��â�����з�����"NOR"
    "HIW"ʹ��ֲ������ںη���ֻ��ڤ����������һչ���û���ǧ����Ӱ,"NOR"
 "HIW"��Ӱ�мд��ų��ص��ƾ���������,�����ڳ���֮���ѱ�������Ӱ������!"NOR"
        "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"֮  "HIC"��  "RED"��  "MAG"��  "HIW"�� "HIB"����"NOR"
                  "HIB"����  "MAG"ǧ  ��  ��  ɢ"HIB"  ����"NOR"
          "HIW"ڤ���������ص���,������ȭ,���֮��,����֮��,ɷ"NOR"
    "HIW"ʱ��շ·�ͻȻ�ڰ�����,��ħ�·𶼴�Ĺ����������,��ɽ����,"NOR"
 "HIW"��ط���,�ݺ����¿ռ�,Ϊ�Ʒ�����Ӱ����,��������ɼʵ����л�����!!\n"+NOR,me);

  if (random (2) >= 1)
    {
      damage = 30+(victim->query ("max_kee") / 8);
   if (damage < 40)
        damage = 40;
      if (damage > 250)
        damage = 250;
message_vision(HIR"$N���ұ��Ʒ����� , ��ʱȫ��Ѫ��Ȫӿ.\n"NOR,victim);
      victim->apply_condition ("bleeding", random (i * i));
      victim->receive_damage ("kee", damage, me);
      COMBAT_D->report_status (victim, 0);
    }
  else
    {
message_vision(HIW"ֻ��ϧ��$N����һ��, ��������, ���һ������, ��Ƥ��ʱ���˿���.\n"NOR,victim);
    }
  start_busy (1);
  return 1;
}
void unconcious()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),
HIB"\nڤ�����ް���:
     "HIW"���� �� �� �� �� �� �һ Ƭ �� �� ˮ �� �� ;\n                        
                      "HIY" \��\ �� �� ɽ �� �� ������ �� �� �� �� �� �� ����\n
"HIC"û�뵽��ڤ�����ޱ��������֮�󣬵����ؼ�����!!����ȴ����"HIW""+winner->query("name")+""HIC"֮�֣���\n"NOR);
        :: unconcious();
}
void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),HIB"\n\nֻ�����������ɢ���ָֻ���һƬ��͡�\n\n"NOR);

        :: die();
}

      


