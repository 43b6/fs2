#include <ansi.h>

inherit NPC;

void create()
{
      set("title","�ﹷ�к�");
      set_name("��",({"dabau"}));
      set("long",@LONG
����---�ָ��˵ı������ӣ��ƽ���������������к�������İ�Ȯ---�������
һͬ���J���J���һ�½�ǡ�
LONG
      );
      set("age",10);
      set("gender","����");
      set("attitude","friendly");

      set_skill("parry",10);
      set_skill("dodge",10);
      set_skill("unarmed",5);
      set("combat_bat",1000);

      set("chat_chance_combat",2);
      set("chat_msg_combat",({
          "�󱦴�У��ۣ����衢���裬������������Ҫ���Ұ���\n",
      }) );

      setup();

      carry_object("/obj/cloth")->wear();
      add_money("coin",5);
}

int accept_kill(object me)
{
      object ob,dog;
      ob=this_object();
      dog=present( "dog",environment(ob) );
      if( !present( "dog",environment(ob)) || !living(dog))  return 1;
      else {
          tell_room(environment(me),"�󱦺��ȵ����ۣ����������������Ұ���\n"),
          message_vision(HIB"\nԭ��һ�ԵĴ���������У���$N�����˹�ȥ��\n"NOR,me);
          dog->kill_ob(me);
          return 1;
      }
      return 1;
}
