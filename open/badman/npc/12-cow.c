#include <ansi.h>
inherit NPC;
void create()
{
  set_name("黄牛君",({"yellow cow","yellow","cow"}));
  set("long","这家伙是恶名全球的十二星象的黄牛君 .你看他那粗犷的脸孔 ,微微散发出\n些许杀气 ,不禁打了个冷颤 .\n");
  set("gender","男性");
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
  set("title", HIY"十二"HIW"星象"NOR);

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
