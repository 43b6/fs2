#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
 seteuid(getuid()); 
set("nickname",HIR"��һս��"NOR);
set_name("ǧ�ﲻ����",({"chan lin","chan","lin"}));
set("long","
    ������ǰ�ܹ����Ժ����ʧ������,����˵������
����˵���о����Ǹ��ɵ��书,�����ĳ��ֻ᲻������
�ֵĺƽ�..������������,������������������һ����

    ");
set("gender","����");
set("attitude","heroism");
set("age",50);
set("max_kee",3500);
set("class","badman");
set("kee",3500);
set("int",30);
set("per",30);
set("str", 45);
set("con", 30);
set("force",4500);
set("max_force",4500);
set("combat_exp",1200000);
set_skill("force",100);
set_skill("badforce",100);
set_skill("dodge",90);
set_skill("parry",80);
set_skill("unarmed",100);
set_skill("badstrike",100);
set_skill("ghost-steps",70);
map_skill("dodge","ghost-steps");
map_skill("unarmed","badstrike");
map_skill("force","badforce");
map_skill("parry","badstrike");
setup();
carry_object("/open/snow/obj/figring")->wield();
carry_object("/open/gsword/obj/dragon-cloth")->wear();
carry_object("/open/wu/npc/obj/armband")->wear();
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


