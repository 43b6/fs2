#include <ansi.h>
inherit F_VENDOR;

string magic1();
string magic2();

void create()
{
        set_name("־��",({"geshan"}));
		set("long","���ڰ�æ��ˮʦ��������\n");
        set("gender","����");
        set("class","taoist");
        set("combat_exp",20000);
        set("attitude","heroism");
        set("age",30);
		set("title","����ɵ���������");
        set("str", 25);
        set("cor", 29);
        set("cps", 28);
        set("per", 24);
        set("spi", 25);
        set("int", 26);
          set("force", 500);
         set_skill("literate",50);
         set("max_force", 500);
        set("max_mana",400);
           set("max_atman",300);
         set_skill("force",30);
          set_skill("gforce",50);
         map_skill("force","gforce");
       set_skill("dodge",30);
          set_skill("parry",40);
         set_skill("whip",50);
         set_skill("gwhip",50);
        map_skill("whip","gwhip");
        set_skill("g-steps", 40);
        map_skill("dodge","g-steps");
        set("force_factor", 6);
        setup();
        carry_object("/u/m/moi/obj/whip")->wield();
        carry_object("/u/m/moi/obj/hat1")->wear();
        carry_object("/u/m/moi/obj/shoe1")->wear();
        carry_object("/u/m/moi/obj/robe1")->wear();
}
