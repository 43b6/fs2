#include <ansi.h>

inherit NPC;

void create()
{
      set_name("��",({"drinker"}));
      set("long","һ����������������������������С�\n");
      set("age",40);
      set("attitude","friendly");
      set("gender","����");

      set_skill("unarmed",80);
      set_skill("dodge",80);
      set("combat_exp",300000);

      set("chat_chance",2);
      set("chat_msg",({
          "��̾������~~�������尡...\n",
          "��̾���������£��Ѿ����Ⱑ~~\n",
      }));

      setup();
      carry_object("/obj/cloth")->wear();
}

int accept_fight(object me)
{
      write("��ҡ��ҡͷ˵������!��ֻ��һ�����α���??\n");
      return 0;
}
