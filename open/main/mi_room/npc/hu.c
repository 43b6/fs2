#include <ansi.h>
inherit NPC;

void create()
{
        seteuid(getuid());      // 这行一定要
        set_name("云中鹤", ({ "badman-hu","hu" }));
        set("attitude","aggressive");
        set("clan_kill",1);
        set("title","四大恶人之末");
        set("nickname",HIR"穷凶极恶"NOR);
        set("race", "人类");
        set("gender", "男性");
        set("age", 35);
        set("long", "
一个身形极为瘦长的男人, 一双眼睛贼兮兮的, 似乎在打什么坏主意。\n");
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
\n云中鹤身形越转越快, 激起一阵阵的旋风, 只见狂风中四有无数鬼爪向你攻来, \n
此正是邪派终极杀招\n\n"
HIR"\t～～"HIG"‘狂风炼狱爪’"HIR"～～\n\n"NOR,this_object());
  ob->add("kee",200);
   }
   else
   {
   message_vision(HIY"\n云中鹤运起‘天魔疗伤心法’不可思议的光芒从云中鹤身上发出，云中鹤的创伤恢复了!\n"NOR,this_object());
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
HIY"你正在喘息之际, 突然脚下一空, 掉入了一个深洞之中..\n"NOR);
   winner->move("/open/main/mi_room/mi08.c");
        ::die();
        return 0;
}
