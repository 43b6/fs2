#include <ansi.h>

inherit NPC;
  inherit F_MASTER;
void create()
{
            set_name("ѩ���ɵ���",({"snow trainee","trainee"}));
          set("long","����ѩ���ɵĵ��ӣ�����������ϰ���Ͻ����Ŀ���Ӱ�š�\n");
		set("gender","����");
	set("combat_exp",27297);
          set("attitude","heroism");
          set("age",47);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
         set("force",100);
          set_skill("parry",20);
          set("force_factor",10);
              set("max_force",100);
              set_skill("snow-martial",30);
         set_skill("dodge",30);
          set_skill("force",30);
           set_skill("unarmed",30);
            set_skill("snowforce",30);
            map_skill("force","snowforce");
           map_skill("unarmed","snow-martial");
	set_skill("black-steps",40);
	map_skill("dodge","black-steps");
	setup();
}

