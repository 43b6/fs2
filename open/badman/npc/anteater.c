#include <ansi.h>

inherit NPC;

void create()
{
      set_name("ʳ����",({"anteater"}));
      set("long","һֻ�������������ϳԵ�ʳ���ޣ��������ͷ��ʳ���ϵ����ϡ�\n");

      set("race","Ұ��");
      set("gender","����");
      set("age", 5);
      set("attitude","peaceful");

      set("limbs",({"ͷ��","����","�Ȳ�","β��"}));
      set("verbs",({"bite","claw"}));

      set_skill("dodge",10);
      set_temp("apply/armor",5);
      set_temp("apply/attack",10);
      set("combat_exp",410);

      set("chat_chance",1);
      set("chat_msg",({
          "ʳ����������ͷ��������ϵ����ϡ�\n",
          "ʳ���޽����������졣\n",
      }));

      setup();
}

void die()
{
      object killer;
      killer=query_temp("last_damage_from");
      killer->set_temp("blood",1);
      message_vision("������Ѫ������$N���·��ϡ�\n",killer);
      ::die();
}
