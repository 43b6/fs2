#include <ansi.h>
inherit NPC;

void create()
{
        seteuid(getuid());      // ����һ��Ҫ
        set_name("���к�", ({ "badman-hu","hu" }));
        set("attitude","aggressive");
        set("clan_kill",1);
        set("title","�Ĵ����֮ĩ");
        set("nickname",HIR"���׼���"NOR);
        set("race", "����");
        set("gender", "����");
        set("age", 35);
        set("long", "
һ�����μ�Ϊ�ݳ�������, һ˫�۾��������, �ƺ��ڴ�ʲô�����⡣\n");
        set("str", 30);
        set("cor", 30);
        set("max_kee", 3000);
        set("max_force", 3000);
        set("force", 3000);
        set("force_factor", 15);
        set("combat_exp", 800000);
        set_skill("unarmed", 70);
        set_skill("parry", 70);
        set_skill("dodge", 120);
        set_skill("force", 50);
        set_skill("snowforce",80);
        set_skill("hell-evil",90);
        set_skill("sha-steps", 120);
        map_skill("unarmed","hell-evil");
        map_skill("dodge","sha-steps");
        map_skill("force","snowforce");
        set("chat_chance", 8);
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (: this_object(),"special_attack" :),
        }));
        set_temp("apply/armor", 70);

        setup();
        add_money("silver", 10);
        carry_object("/open/tailong/obj/ghost-claw")->wield();
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
   message_vision(HIB"
\n���к�����ԽתԽ��, ����һ���������, ֻ�����������������צ���㹥��, \n
������а���ռ�ɱ��\n\n"
HIR"\t����"HIG"���������צ��"HIR"����\n\n"NOR,this_object());
  ob->add("kee",200);
   }
   else
   {
   message_vision(HIY"\n���к�������ħ�����ķ�������˼��Ĺ�â�����к����Ϸ��������к׵Ĵ��˻ָ���!\n"NOR,this_object());
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
HIY"�����ڴ�Ϣ֮��, ͻȻ����һ��, ������һ���֮��..\n"NOR);
   winner->move("/open/main/mi_room/mi08.c");
        ::die();
        return 0;
}
