#include <ansi.h>
inherit NPC;
void create()
{
  set_name("��ţ��",({"yellow cow","yellow","cow"}));
  set("long","��һ��Ƕ���ȫ���ʮ������Ļ�ţ�� .�㿴���Ǵ�������� ,΢΢ɢ����\nЩ��ɱ�� ,�������˸���� .\n");
  set("gender","����");
  set("age",37);
  set("attitude","heriosm");
  set("str",32);
  set("combat_exp",950000);
  set("max_force",2500);
  set("force",2500);
  set("max_kee",2000);
  set("kee",2000);
  set("max_sen",1200);
  set("sen",1200);
  set("max_gin",750);
  set("gin",750);
  set("force_factor",45);
  set("bellicosity",1723);
  set("title", HIY"ʮ��"HIW"����"NOR);

  set_skill("unarmed",100);
  set_skill("dodge",90);
  set_skill("move",75);
  set_skill("parry",20);
  set_skill("force",100);
  set_skill("snow-kee",100);
  set_skill("snow-martial",100);
  set_skill("snowforce",107);
  set_skill("rain-steps",65);
  set("functions/ice-fingers/level",29);
  set("functions/snow-powerup/level",28);
  
  map_skill("unarmed","snow-martial");
  map_skill("force","snowforce");
  map_skill("parry","snow-kee");
  map_skill("dodge","rain-steps");
  map_skill("move","rain-steps");
  
  set("chat_chance_combat",60);
   set("chat_msg_combat",({
   (: perform_action, "snow-martial.ice-fingers" :),
   }));

  setup();
  carry_object("/open/badman/obj/cow_horn.c")->wield();
}
