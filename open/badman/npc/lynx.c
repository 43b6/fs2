#include <ansi.h>

inherit NPC;

void create()
{
      set_name("Сɽè",({"little lynx","lynx"}));
      set("long",@LONG
һֻ���������ϴ��˯��Сɽè����δ˯�ѵ��������������˫�ۣ�������
�����㣬ģ��ʮ������ϲ����
LONG
      );

      set("race","Ұ��");
      set("gender","����");
      set("age", 3);
      set("attitude","peaceful");

      set("limbs",({"ͷ��","����","ǰ��","β��","����"}));
      set("verbs",({"bite","claw"}));

      set_skill("dodge",25);
      set_temp("apply/armor",15);
      set_temp("apply/attack",20);
      set("combat_exp",630);

      set("chat_chance",1);
      set("chat_msg",({
          "Сɽȩ̀����ͷ���˸����Ƿ��\n",
          "Сɽȩ̀��ͷ�����㼸�ۣ���ſ�¼���˯���ľ���\n",
      }));

      setup();
}

void die()
{
      object killer;
      killer=query_temp("last_damage_from");
      killer->set_temp("blood",1);
      message_vision("������Ѫ������$N���·��ϡ�\n",killer);
}
