#include <ansi.h>
inherit F_VENDOR;

string magic1();
string magic2();

void create()
{
	set_name("����ˮ",({"chinshi"}));
	set("long","����½����Сʦ�ܣ���Ȼ�书�����Ȳ�����λʦ�ֵ��ǹ���"HIW"����
"NOR"�����������������һָ��ม�\n");               
        set("gender","����");
        set("class","taoist");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",36);
        set("title","����ɵڶ�������");
        set("str", 16);
        set("cor", 29);
        set("cps", 28);
        set("per", 24);
        set("spi", 25);
        set("int", 26);
	set("kar", 30);
        set("force", 3000);
        set("max_force", 3000);
        set("max_mana",2000);
        set("mana",2000);
        set("max_atman",2000);
        set("atman",2000);
        set_skill("literate", 100);
	set_skill("cure",100);
	set_skill("taoism", 100);
	map_skill("cure", "taoism");
	set_skill("magic",80);
	set_skill("gmagic",90);
	map_skill("magic","gmagic");
	set_skill("spells",80);
        set_skill("necromancy",90);
	map_skill("spells","necromancy");
        set_skill("force",50);
        set_skill("gforce",80);
        map_skill("force","gforce");
        set_skill("dodge",40);
        set_skill("g-steps", 70);
        map_skill("dodge","g-steps");
        set_skill("parry",60);
        set_skill("whip",40);
        set_skill("gwhip",40);
        map_skill("whip","gwhip");
        map_skill("parry","gwhip");
        set("force_factor", 10);
        setup();
        carry_object("/open/tendo/obj/whisk")->wield();
	carry_object("/open/tendo/obj/chaosbelt")->wear();
	add_money("silver",60);
       
}
