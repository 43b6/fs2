#include <ansi.h>

inherit NPC;

void create()
{
      set_name("�����",({"hyena"}));
      set("long",@LONG
һֻ�൱�ټ��Ĵ���ǣ������������ɭ������ʳ��ż�����������Ŀ��
Ѹ�ݵ���������ת��һת������ʹ�㱳����亹ֱ�����㲻�����룺�˴���
���Ǹ�����֮�أ����ǿ��뿪Ϊ�
LONG
      );

      set("race","Ұ��");
      set("gender","����");
      set("age", 6);
      set("attitude","peaceful");

      set("limbs",({"ͷ��","����","ǰ��","β��","����"}));
      set("verbs",({"bite","claw"}));

      set_skill("dodge",50);
      set_temp("apply/armor",30);
      set_temp("apply/attack",50);
      set("combat_exp",3500);

      set("chat_chance",1);
      set("chat_msg",({
          (:random_move:),
          "�����̧��ͷ�����������ܵ�ζ����\n",
          "���������ķ������˹�����������������˼�Ȧ��\n",
          "���������ͷ���������һ���ĳ�Х���ŵ���һ����亹��\n",
      }));

      setup();
}

void init()
{
      object me=this_player();
      ::init();
      if( me->query_temp("blood")==1 )  {
      message_vision("������ŵ�$N���ϵ�Ѫ��ζ��һ����Х��������$N��\n",me);
      this_object()->kill_ob(me);
      }
}
