#include <ansi.h>

inherit NPC;

void create()
{
      set_name("����Գ",({"gibbon"}));
      set("long",@LONG
һֻ�����ϵĳ���Գ���������������ֱ���������֮�䵴����ȥ����������Ҳ��
��Ϊ�⣬ֻ����������İ���������ˡ�
LONG
      );

      set("race","Ұ��");
      set("gender","����");
      set("age", 5);
      set("attitude","peaceful");

      set("limbs",({"ͷ��","����","ǰ��","β��","����"}));
      set("verbs",({"bite","claw"}));

      set_skill("dodge",30);
      set_temp("apply/armor",20);
      set_temp("apply/attack",30);
      set("combat_exp",3850);


      set("chat_chance",1);
      set("chat_msg",({
          (:random_move:),
          "����Գ������ץ�˸�����(С�ٿ�:Ӧ���η�֮��)����Ž������\n",
          "����Գץ��ץͷ�������㼸�ۡ�\n",
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
