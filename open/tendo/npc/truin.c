#include <ansi.h>
inherit NPC;


void create()
{
	set_name("��ӱ",({"truin"}) );
        set("long","��������һ������С�ͱ���������ɽ�У�������½�����ط�����
���������\n");
        set("gender","Ů��");
        set("class","taoist");
	set("combat_exp",40000);
        set("age",18);
	 set("title","����ɵ���������");
        set("str", 15);
        set("cor", 30);
        set("cps", 30);
        set("per", 30);
        set("spi", 30);
        set("int", 26);
        set("force", 200);
        set("max_force", 200);
        set("max_mana",200);
        set("max_atman",150);
	set("max_kee",6000);
	set("kee",6000);

	
        setup();
	add_money("gold",1);
}

