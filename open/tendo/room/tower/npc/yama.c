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
        set("title","ڤ����������");
        set_name("�ñ�ǧ��",({"yama"}));
        set("max_gin",2000);
        set("gin",2000);
        set("race","Ұ��");
        set("age",660);
        set("str", 75);
        set("max_kee", 1500);
        set("kee", 1500);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",450000);
        set_temp("apply/armor",70);
        set_temp("apply/attack", 65);
        set("force_factor",10);
        set("bellicosity",1200);
        set("max_sen",2000);
        set("sen",2000);
        set("max_atman",1500);
        set("atman",1500);
        set("max_mana",1000);
        set("mana",1000);
        set("max_force",2000);
        set("force",2000);
        set("cor", 30);
        set("cps", 35);

        set("chat_chance_combat",30);
        set ("chat_msg_combat", ({(: special_att :)}));

        command("wield all");
        command("wear all");
        set_skill("hell-evil",80);
        map_skill("parry","hell-evil");
        set("unarmed",90);
        map_skill("unarmed","hell-evil");
        set_skill("dodge",60);
        set_skill("fly-steps", 60);
        map_skill("dodge","fly-steps");
        set_skill("parry",80);
setup();
    add_money("gold",10);
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
        write("����������˹����е����󵨿�ͽ��������Ҳ�Ҷ�����\n");
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
          "HIW"�ñ�ǧ������ٿ���ڷ�����,�������һ"NOR"
    "HIW"���ƾ�,������Ӱ,�罭��ȱ����,��к����,�Ʒ��缤��"NOR"
                  "HIW"��������������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIR"ħ �� �� ��"HIB"  ����"NOR"
          "HIW"�ñ�ǧ����ͷ����ӭ������,˫Ŀ�¹����,"NOR"
    "HIW"��Ȼ˫�۶���,�û���ǧ�����ֱ�,ÿһ���ֱ��˳�һ���"NOR"
             "HIW"�۵��Ʒ�,�������Ӱ�����������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIW"�� �� �� ��"HIB"  ����"NOR"
          "HIW"�ñ�ǧ��˫�ֱ�����������˿��¶��Ũ�ҵĶ�"NOR"
    "HIW"����˫��͸����ֻ���ñ�ǧ��˫�ֲ�ͣ���裬�����мд���"NOR"
  "HIW"������֮��Ż�Ķ���,ʹ�����ܵ�������Ӱ�죬�ܵ�������˺�!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIC"�� �� �� ��"HIB"  ����"NOR"
          "HIW"�ñ�ǧ��һ��������ĳ�Х,�������,���ε�"NOR"
    "HIW"�ջ���,һ����������ͬһʯ����֮�����,�Բ�ͬ�ķ���,"NOR"
  "HIW"��ͬ�ĽǶ�,������������ħצ�����Ӱ,�����������ķ�������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "MAG"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ֻ���ñ�ǧ������һ����˫��ǰ����һ������"NOR"
    "HIW"�εľ�����Ȼ��ǰӿȥ���ۻ�ľ������εõ������ɳ��ʯ��"NOR"
                       "HIW"�������Ϯ��ȥ!!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIY"�� �� �� Ѫ"HIB"  ����"NOR"
          "HIW"�ñ�ǧ��˫�ƻ���ǧ����Ӱ,��Ӱ������һ�ɾ�"NOR"
              "HIW"�춯�ǵľ���,�����Ʒ���������ȥ!!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIC"�� �� Ī ��"HIB"  ����"NOR"
          "HIW"�ñ�ǧ�����幭��˫�ƽ������棬ȫ��������"NOR"
    "HIW"һƬ�����У��������粨�ΰ㸡��������������ھ������ⲻ��"NOR"
   "HIW"���ӣ�ֻ���ñ�ǧ��ͻȻ��˫��һ�ϣ�һ�������������㼲���ȥ!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIR"�� ħ �� ת"HIB"  ����"NOR"
          "HIW"�ñ�ǧ����������˫צ ,˫צ����һ��ҫĿ���,"NOR"
    "HIW"����ʮ���� ,��עȫ�� ,����׼��ʹ����ǿ��Ե���һʽ,��ʱ"NOR"
  "HIW"����ħ���������ƻñ�ǧ�� ,��ٱħ����˾������֮�� ,��������"NOR"
 "HIW"�����ϵ��׹� ,�ñ�ǧ�ֺ�Ȼ��������ǰ ,����ʹ����ʯ���쾪��һ��!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIY"�� Ӱ �� ��"HIB"  ����"NOR"
          "HIW"�����޾��ľ���������ӿ��ñ�ǧ�����ڣ�ֻ����"NOR"
    "HIW"��ǧ��˫�Ʋ�ͣ����ϸ΢�ı仯���·���ڶ��㣬�����ﶼ��ʳ"NOR"
                 "HIW"����,��Ȼ˫�ƻ������ȫ��!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ʮ  ʽ ����"NOR"
                  "HIB"����  "HIW"�� �� �� ��"HIB"  ����"NOR"
          "HIW"�ñ�ǧ�ֿ��һ��,�Ͽ�ƽ��Ų������,�����ĵ�,��"NOR"
    "HIW"�ֹɶ��ھ�,�������,�ƾ���ɽ,�������ε�����,�����������"NOR"
                       "HIW"֮�Ƴ������!!"NOR"
         "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ʮ  һ  ʽ ����"NOR"
                  "HIB"����  "HIC"�� �� �� ��"HIB"  ����"NOR"
          "HIW"�ñ�ǧ���������,��������,����һ��,˲ʱ����"NOR"
    "HIW"��, ��ɳ����,�ñ�ǧ�ֳ÷�ɳ��ʯ֮��,������������,����һ��,"NOR"
      "HIW"˫����£,����һ������������,���������������ĳ�����!"NOR"
         "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ʮ  ��  ʽ ����"NOR"
                  "HIB"����  "HIR"Ⱥ ħ �� ��"HIB"  ����"NOR"
          "HIW"�ñ�ǧ�������ƻ�����һ����ɫ��â�����з�����"NOR"
    "HIW"ʹ��ֲ������ںη���ֻ���ñ�ǧ������һչ���û���ǧ����Ӱ,"NOR"
 "HIW"��Ӱ�мд��ų��ص��ƾ���������,�����ڳ���֮���ѱ�������Ӱ������!"NOR"
        "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"֮  "HIC"��  "RED"��  "MAG"��  "HIW"�� "HIB"����"NOR"
                  "HIB"����  "MAG"ǧ  ��  ��  ɢ"HIB"  ����"NOR"
          "HIW"�ñ�ǧ�����ص���,������ȭ,���֮��,����֮��,ɷ"NOR"
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




