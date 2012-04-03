inherit NPC;
#include <ansi.h>
#include <marksman.h>
void create()
{
        set_name("初级弓箭手", ({ "bowman" }) );
set("class","marksman");
create_family("射日派",4,"门生");
        set("gender", "男性" );
        set("age", 25);
        set("long", "一位正在努力的想要把弓箭练好的生手。\n");
set("combat_exp",50000);
set("max_kee",800);
        set("max_force",500);
set_skill("dodge",50);
set_skill("parry",50);
set_skill("archery",50);
set_skill("god-shooting",30);
set_skill("rain-steps",50);
map_skill("parry","rain-steps");
map_skill("force","iceforce");
set_skill("iceforce",50);
        map_skill("archery","god-shooting");
        set_temp("apply/attack",10);
        set_temp("apply/dodge",10);
        set("force_factor",5);
        set("chat_msg",({
        "初级弓箭手努力的说着：我一定会把李广师父教我的弓箭努力学习。 ",
        }));
          setup();
carry_object(C_OBJ"/bow-1")->wield();
carry_object(C_OBJ"/arrow-1");
carry_object(C_OBJ"/book");
}
int accept_kill(object ob)
{
 command("say 你竟敢动上我的头上来，你想必是活的不耐烦了!");
 command("say 纳命来!!");
command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say 好吧!!我就陪你玩玩。");
command("cmd holdup arrow with bow");
return 1;
}


