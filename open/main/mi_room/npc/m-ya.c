#include <ansi.h>
inherit NPC;

void create()
{
        seteuid(getuid());      // ����һ��Ҫ
        set_name("Ҷ����", ({ "mother-ya","ya" }) );
        set("attitude","aggressive");
        set("clan_kill",1);
        set("title","�Ĵ����֮��");
        set("nickname",HIG"�޶���"NOR);
        set("race", "����");
        set("gender", "Ů��");
        set("age", 35);
        set("long", "
һ��������ɫ����������, һ����Ҷü, ����͵�����,
��������������������Ķ�֮һ��Ҷ���\n");
        set("str", 30);
        set("cor", 30);
        set("max_kee", 3000);
        set("max_force", 3000);
        set("force", 3000);
        set("force_factor", 15);
        set("combat_exp", 900000);
        set_skill("blade", 90);
        set_skill("parry", 70);
        set_skill("dodge",100);
        set_skill("move",100);
        set_skill("force", 90);
        set_skill("sixforce",100);
        set_skill("gold-blade", 100);
        set_skill("sha-steps", 100);
        map_skill("blade","gold-blade");
        map_skill("dodge","sha-steps");
        map_skill("parry","gold-blade");
        set("chat_chance", 8);
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (: this_object(),"special_attack" :),
        }));
        set_temp("apply/armor", 80);

        setup();
        add_money("gold",10);
        carry_object("/open/tailong/obj/liu-blade")->wield();
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
   message_vision(HIR"Ҷ������ŵ���֮��ʹ��"HIY"������������"HIR", ��һ������, ��������!!\n\n"NOR,this_object());
   ob->add("kee",-100);
   }
   else
   {
   message_vision(HIY"\nҶ����������ħ�����ķ�������˼��Ĺ�â��Ҷ�������Ϸ�����Ҷ����Ĵ��˻ָ���!\n"NOR,this_object());
me->add("kee",500);
me->add("max_kee",100);
   }
  return 1;
  }
void die()
{
   object winner;
   winner= query_temp("last_damage_from");
   tell_object(winner,
HIY"����Ҷ��������ֵ�һ���ܵ�, ��æ���˽�ȥ..\n"NOR);
   winner->move("/open/main/room/to_chun2.c");
        ::die();
        return 0;
}
