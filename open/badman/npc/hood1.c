#include <ansi.h>

inherit NPC;

string do_steal();

void create()
{
      set_name("С��Ƥ",({"hood"}) );
      set("long","һ�������ڽ�ͷ���л��й��С��졣\n");

      set("gender","����");
      set("age",25);
      set("attitude","badman");

      set_skill("dodge",10);
      set_skill("unarmed",15);
      set_temp("apply/attack",10);
      set_temp("apply/armor",10);
      set("combat_exp",300);

      set("chat_chance_combat",80);
      set("chat_msg_combat",({
         (:do_steal:)
      }));

      set("chat_chance",2);
      set("chat_msg",({
          "С��Ƥһ��������������ǰ���˼�Ȧ��\n",
          "С��Ƥ��������ļ��˵����ι��С�ֵܡ���ЩǮ�������ӻ�������\n",
      }));

      setup();

      carry_object("/obj/cloth")->wear();
}
