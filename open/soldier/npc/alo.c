#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
 seteuid(getuid()); 
set("nickname",HIB"���麷��"NOR);
set_name("��ŵɶ�����",({"a lo","a","lo"}));
set("long","
    ��ӵ��һ����׳����������о��������͑G��
�ģ�������һ��Сƽͷ�ʹ���һ������������һ����
�ʿ㣬�����������һ��������Ī���ǡ�����������
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
set("force",2000);
set("max_force",2000);
set("combat_exp",800000);
set_skill("force",60);
set_skill("spforce",50);
set_skill("dodge",60);
set_skill("parry",70);
set_skill("lance",80);
set_skill("power-lance",80);
set_skill("eagle-steps",60);
map_skill("dodge","fly-steps");
map_skill("lance","power-lance");
map_skill("force","spforce");
map_skill("parry","power-lance");
set("apply/armor",60);
  set("inquiry",([
      "��켦��" : "����������!!!..���������!!!��\n",
      
      ]));
setup();
carry_object("/open/soldier/obj/calamity")->wield ();
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


