#include <ansi.h>

inherit NPC;

void create()
{
      set_name("�ִ��",({"fat urchin","urchin"}));
      set("long",@LONG
һֻ��������˯�����ִ�⬣����ֵ�ģ��ʮ������ϲ���������̲�ס������
����ͷ�����ֿ�������ļ�̣����뻹�����˰ɡ�
LONG
      );

      set("race","Ұ��");
      set("gender","����");
      set("age", 4);
      set("attitude","peaceful");

      set("limbs",({"ͷ��","����","ǰ��","β��","����"}));
      set("verbs",({"claw","bite"}));

      set("max_kee",150);
      set("kee",150);
      set_skill("dodge",10);
      set_temp("apply/armor",90);
      set_temp("apply/attack",30);
      set("combat_exp",740);

      set("chat_chance",1);
      set("chat_msg",({
          "�ִ��̧����ͷ���˸����Ƿ��\n",
          "�ִ��̧����ͷ�����������㼸�ۡ�\n",
      }));

      setup();
}

void die()
{
      object killer;
      killer=query_temp("last_damage_from");
      killer->set_temp("blood",1);
      message_vision(HIR"\n������Ѫ������$N���·��ϡ�\n"NOR,killer);
      ::die();
}
