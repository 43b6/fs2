#include <ansi.h>

inherit NPC;

void create()
{
      set_name("��ɽ��",({"pangolin"}));
      set("long","һֻ���м�Ӳ��ǵĴ�ɽ�ף���Ŭ�����ŵ��ϵ�������\n");

      set("race","Ұ��");
      set("gender","����");
      set("age", 4);
      set("attitude","peaceful");

      set("limbs",({"ͷ��","����","�Ȳ�","β��"}));
      set("verbs",({"bite","claw"}));

      set_skill("dodge",10);
      set_temp("apply/armor",70);
      set_temp("apply/attack",10);
      set("combat_exp",520);

      set("chat_chance",1);
      set("chat_msg",({
          "��ɽ�����������ܵ�ζ����\n",
          "��ɽ���ú��Ȱ�һ��ʯ�ӴӶ������˳�����\n",
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
