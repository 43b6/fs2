// kill_tiger.c
// ��ɱ�Ķ��ǻ� by chan
inherit NPC;
#include <ansi.h>

void create()
{
      set_name("���ǻ�",({"tiger"}));
      set("title","����");
      set("long",
       "����һͷ�׺ݵĶ��ǻ���ר��Ϯɱ����ƽ�ϼ���վ���ÿ͡�\n");
      set("race", "Ұ��");
      set("age", 20);
      set("attitude","aggressive");
      set("max_gin", 2000);
      set("max_kee", 3000);
      set("max_sen", 2000);
      set("str", 110);
      set("cor", 40);
      set("spi", 40);
      set("int", 60);
      set("limbs", ({ "ͷ��", "����", "ǰ��", "����", "β��" }) );
      set("verbs", ({ "bite", "claw","hoof"}) );
      set_temp("apply/attack", 160);
      set_temp("apply/damage", 200);
      set_temp("apply/armor", 120);
      set("combat_exp",299340);
      set("score", 100000);
      set("chat_msg_combat",({
        (: this_object(),"special_attack" :),
        }));
      set("chat_chance",1000);
     set_skill("dodge",100);
     set_skill("parry",100);
     set_skill("unarmed",100);
      set("chat_msg",({
         (: random_move  :),
        }));
      setup();
      carry_object(__DIR__"tiger-head");
}
int special_attack()
 {
   object ob,me;
   int k;
   me = this_object();
   k = random(10);
   ob=this_object()->query_enemy();
   if(k > 7)
   {
   message_vision(HIW"���ǻ�������!!!���մ�صľ��ͣ�ʹ���ǻ����˻ָ���!\n"NOR,this_object());
   me->add("kee",500);
   }
  return 1;
  }
