#include <ansi.h>

inherit F_SOLDIER;

void create()
{
	set_name("�Ʊ�ʹ",({"soldier officer","officer"}));
	set("gender","����");
          set("attitude","heroism");
	set("combat_exp",440);
	set("class","officer");
	set("officer_class","�Ʊ�ʹ");
	set("officer_power",30);
	set("max_officer_power",30);
          set("age",47);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("soldier_list",([
	"soldier":"��ʿ(soldier)",
	"fighter":"��ʿ(fighter)",
        "guard":"����(guard)",
        "guard2":"˽�˻���(guard2)",
	]));
	set("soldier_lv",([
	"soldier":5,
	"fighter":10,
	"guard":15,
        "guard2":25,
	]));
	setup();
}

