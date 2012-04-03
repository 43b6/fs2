#include </open/open.h>
#include <ansi.h>

inherit NPC;
inherit SSERVER;

int do_attack();

void create()
{
      set_name("����",({"snake"}));
      set("long","һֻͷ������״�Ķ��ߣ����̳�һ�Ų�ͣ���������š�\n");
      set("race","Ұ��");
      set("gender","����");
      set("age",10);
      set("attitude","peaceful");

      set("limbs",({"ͷ��","����","�ߴ�","β��"}));
      set("verbs",({"bite"}));
      set("max_kee",150);
      set("kee",150);
      set_skill("dodge",10);
      set_temp("apply/armor",20);
      set_temp("apply/attack",30);
      set("combat_exp",1000);

      set("chat_chance",1);
      set("chat_msg",({
          "�������������ţ����������ܵ�״����\n",
      }));

      set("chat_chance_combat",35);
      set("chat_msg_combat",({
         (:do_attack:),
      }));

      setup();
}

int do_attack()
{
      object me = offensive_target(this_object());
      int M;
      M=(int)me->query_condition("snake_poison");

      if( me->query_skill("dodge")>=30 ) {
        message_vision("������һ��ҧס$N������$N���ɵĶ㿪�ˡ�\n",me);
        return 0;
      }

       else if( random(2)>=1 ) {
         message_vision("������������Ҫҧ$N������$Nһ�ƴ�����׼ͷ��\n",me);
         return 0;
       }

      else  {
        me->apply_condition("snake_poison",M+3);
        if( M==0 ) {
          message_vision(HIR"$Nһ����С�ģ�������ҧ��һ�ڣ��ж��ˡ�\n"NOR,me);
          return 1;
        }
        else {
          message_vision(HIB"$N�ֱ�����ҧ��һ�ڣ��ж������ˡ�\n"NOR,me);
          return 1;
        }
        return 1;
      }
      return 1;
}
