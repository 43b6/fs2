#include <ansi.h>
inherit NPC;
void create()
{
  set_name("�׹����",({"fruit monkey","fruit","monkey"}));
  set("long","��ǰ��������λ�˲����� ,�ﲻ���ļһ� ,����ʮ������֮һ���׹���� .����������С ,�ɻ���ĺ� !��������ʹ���Ӱ������� ,����һ��!!!\n");
  set("gender","����");
  set("age",34);
  set("attitude","heriosm");
  set("spi",35);
  set("combat_exp",1300000);
  set("max_force",2700);
  set("force",2700);
  set("max_kee",3000);
  set("kee",3000);
  set("max_sen",1100);
  set("sen",1100);
  set("max_gin",1500);
  set("gin",1500);
  set("force_factor",10);
  set("bellicosity",1982);
  set("title",YEL"ʮ��"HIW"����"NOR);
  set("nickname","[33m��[0m");

  set_skill("unarmed",120);
  set_skill("dodge",150);
  set_skill("move",150);
  set_skill("parry",70);
  set_skill("force",50);
  set_skill("six-closefist",120);
  set_skill("badstrike",120);
  set_skill("pyrobat-steps",150);
  set_skill("badforce",50);
  set("functions/badstrike/level",40);

  map_skill("unarmed","six-closefist");
  map_skill("parry","six-closefist");
  map_skill("dodge","pyrobat-steps");
  map_skill("move","pyrobat-steps");
  map_skill("force","badforce");
  set("chat_chance_combat",60);
   set("chat_msg_combat",({
  (: perform_action, "badstrike.evil-blade" :),
  }));

  setup();
}
