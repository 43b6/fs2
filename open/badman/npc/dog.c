#include <ansi.h>

inherit NPC;

void create()
{
      set("title","��Ȯ");
      set_name("���",({"dog"}));
      set("long","һֻȫ����ڵĴ��ǹ��������������һͬ���Σ��Եø�����˷ܡ�\n");
      set("race","Ұ��");
      set("attitude","peaceful");
      set("gender","����");
      set("age",5);
      set("limbs",({"ͷ��","β��","ǰ��","����","����"}));
      set("verbs",({"bite","claw"}));

      set_skill("unarmed",30);
      set_skill("dodge",25);
      set("combat_exp",5000);

      set("chat_chance",2);
      set("chat_msg",({
          "����ú���ץ��ץ�Լ��Ķ��䡣\n",
          "���������ȱ������ᡣ\n",
          "��������˺��ȿ�����С���ϣ�����һ����\n",
      }));

      setup();
}
