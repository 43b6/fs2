#include <ansi.h>
inherit NPC;
string magic1();
string magic2();
void create()
{
     set_name("���Ǻ�",({"elder su","elder","su"}));
     set("title","����ɵڶ�������");
     set("long","����½����ʦ��,��ʦ���������μ����������Ż�һְ.\n");
     set("gender","����");
     set("class","taoist");
     set("age",67);
     set("str",30);
     set("kar",30);
     set("per",30);
     set("cps",25);
     set("cor",25);
     set("combat_exp",400000);
     set("spi",40);
     set("int",24);
     set("max_kee",2500);
     set("kee",2500);
     set("max_sen",1000);
     set("sen",1000);
     set("max_force",1500);
     set("force",1500);
     set("gin",1000);
     set("max_mana",2500);
     set("mana",2500);
     set("max_atman",2500);
     set("atman",2500);
     set_skill("literate",50);
     set_skill("cure",50);
     set_skill("taoism",70);
     map_skill("cure","taoism");
     set_skill("force",75);
     set_skill("gforce",70);
     map_skill("force","gforce");
     set_skill("dodge",60);
     set_skill("g-steps",70);
     map_skill("dodge","g-steps");
     set_skill("magic",80);
     set_skill("gmagic",80);
     map_skill("magic","gmagic");
     set_skill("whip",70);
     set_skill("gwhip",75);
     map_skill("whip","gwhip");
     set_skill("parry",70);
     map_skill("parry","gwhip");
     set_skill("spells",80);
     set_skill("necromancy",80);
     map_skill("spells","necromancy");
     set("spells/feeblebolt/level",50);
     set("spells/missible/level",50);
     set("spells/hardshell/level",1);
     set("spells/invocation/level",90);
     set("spells/drift/level",1);
     set("spells/lightfire/level",1);
     set("spells/flee/level",60);   
     set("force_factor",10);
     set("chat_chance_combat",65);
     set("chat_msg_combat", ({
     // (: perform_action, "whip.stopmove" :),
     (: magic1 :),
     (: magic2 :),

}));
setup();
     carry_object("/open/tendo/obj/whisk.c")->wield();
     add_money("gold",5);
     command("wield all");
}
string magic1()
{
 if (this_object ()->query ("sen") >30) {
 "/daemon/class/taoist/necromancy/invocation"->cast_soldier(this_object(),"lumob");
}
return "\n";
}
string magic2()
{
if(random(2))
command("cast feeblebolt");
else command("cast missible");
return "\n";
}
int accept_fight(object who)
{
object me;
me=this_object();
return 1;
notify_fail("���Ǻ�������һ��˵��ȥ��ȥ��ȥ���������£�!!!!\n");
me->move(__DIR__"road2");
  return 1;
} 




