#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
 seteuid(getuid()); 
set("nickname",HIM"��ǹ��"NOR);
set_name("������",({"si ka","si","ka"}));
set("long","
    �����ھ��������Ŀ�ǹ��,����Ѹ��,��˵
��ս��ʱ����������֮��,��ͷͷ������һ����
�ɻ�ȱ�Ĵ󽫡�

    ");
set("gender","����");
set("attitude","heroism");
set("age",32);
set("max_kee",4500);
set("class","soldier");
set("kee",4500);
set("int",30);
set("per",30);
set("str", 35);
set("con", 30);
set("force",3000);
set("max_force",3000);
set("combat_exp",1000000);
set_skill("force",60);
set_skill("spforce",50);
set_skill("dodge",60);
set_skill("parry",70);
set_skill("lance",90);
set_skill("power-lance",90);
set_skill("eagle-steps",70);
map_skill("dodge","fly-steps");
map_skill("lance","power-lance");
map_skill("force","spforce");
map_skill("parry","power-lance");
set("apply/armor",80);
setup();
carry_object("/open/soldier/obj/god")->wield ();
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


