#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
 seteuid(getuid()); 
set("nickname",HIR"ħ��ս��"NOR);
set_name("Լ��������",({"john"}));
set("long","
    �����Ӹ߸�׳׳,����΢���˵�,�������С����
����ӵ�е��书ȴ����һ��֮��,����֮��,��������
��������Ϊħ��ս��ʵ������ǡ���ġ�

    ");
set("gender","����");
set("attitude","heroism");
set("age",32);
set("max_kee",3500);
set("class","soldier");
set("kee",3500);
set("int",30);
set("per",30);
set("str", 35);
set("con", 30);
set("force",2500);
set("max_force",2500);
set("combat_exp",850000);
set_skill("force",60);
set_skill("spforce",50);
set_skill("dodge",60);
set_skill("parry",70);
set_skill("lance",85);
set_skill("power-lance",85);
set_skill("eagle-steps",60);
map_skill("dodge","fly-steps");
map_skill("lance","power-lance");
map_skill("force","spforce");
map_skill("parry","power-lance");
set("apply/armor",60);
setup();
carry_object("/open/soldier/obj/sharpen")->wield ();
add_money("gold",10);
}

int accept_kill(object who)
{
   say(HIY" ���Ӹ���ƴ��!!!\n"NOR);
   setup();
   return 1;
}
void init()
{
      if (this_player()->query_temp("blood")== 1)
      kill_ob(this_player());
}


