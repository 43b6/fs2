#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
          set_name("ɱ��ħ",({"killer"}));
          set("long","����һ������ɱ������,�е������߻���ħ�ĸо�,ֻ��������ɱ���ƺ��Ϳ���ɱ��һ���ˡ�\n");
		set("gender","����");
	set("combat_exp", 132810);
          set("attitude","aggressive");
          set("age",40);
          set("score",100);
               set("str", 30);
                set("cor", 30);
                set("per", 20);
                set("int", 25);
                set("cps", 10);
          set("bellicosity",60000);
	set("force",700);
	set("max_force",700);
	set("force_factor",10);
          set_skill("dodge",60);
          set_skill("unarmed",50);
          set_skill("parry",30);
          set_skill("move",20);
          set_skill("force",80);
	set_skill("snowforce",40);
	set_skill("snow-martial",40);
	set_skill("black-steps",50);
          map_skill("force", "snowforce");
	map_skill("dodge","black-steps");
          map_skill("unarmed", "snow-martial");
	setup();
}

