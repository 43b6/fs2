
inherit NPC;
void create()
{
set_name("ľ��",({"man"}) );
	set("gender", "����" );
        set("age",45);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
set("long","һ��������ϰ�õ�ľ��.\n"
                "����æ�����Ĺ���.\n");
set("combat_exp",1000);
	set("attitude", "peaceful");
set("max_kee",2000);
        set("chat_chance", 25);
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
         	
}

